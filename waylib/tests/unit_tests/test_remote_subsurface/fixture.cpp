// SPDX-License-Identifier: Apache-2.0 OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only
#include "fixture.h"

#include <wremotesubsurfacemanagerv1.h>

#include <QElapsedTimer>

#include <cerrno>
#include <cstring>
#include <poll.h>
#include <sys/socket.h>
#include <unistd.h>
#include <wayland-server-core.h>
extern "C" {
#include <wlr/types/wlr_compositor.h>
}

WAYLIB_SERVER_USE_NAMESPACE

namespace {
void registryGlobal(void *data, wl_registry *registry, uint32_t name, const char *interface, uint32_t version)
{
    auto *client = static_cast<Client *>(data);
    if (std::strcmp(interface, "wl_compositor") == 0) {
        client->compositor = static_cast<wl_compositor *>(wl_registry_bind(registry, name, &wl_compositor_interface, 4));
    } else if (std::strcmp(interface, "treeland_subsurface_manager_v1") == 0) {
        client->managerVersion = version;
        client->manager = static_cast<treeland_subsurface_manager_v1 *>(
            wl_registry_bind(registry, name, &treeland_subsurface_manager_v1_interface, 1));
    }
}

void registryRemove(void *, wl_registry *, uint32_t) {}

void syncDone(void *data, wl_callback *callback, uint32_t)
{
    *static_cast<bool *>(data) = true;
    wl_callback_destroy(callback);
}

void surfaceToken(void *data, treeland_exported_surface_v1 *, const char *token)
{
    static_cast<Exported *>(data)->token = QString::fromUtf8(token);
}

void parentRejected(void *data, treeland_exported_surface_v1 *, uint32_t reason, const char *token)
{
    auto *exported = static_cast<Exported *>(data);
    exported->reasons.append(reason);
    exported->rejectedTokens.append(QString::fromUtf8(token));
}
}

Client::Client(wl_display *server)
    : serverDisplay(server)
{
    int sockets[2];
    if (socketpair(AF_UNIX, SOCK_STREAM | SOCK_CLOEXEC, 0, sockets) != 0) {
        error = QString::fromLocal8Bit(std::strerror(errno));
        return;
    }
    serverClient = wl_client_create(server, sockets[0]);
    if (!serverClient) {
        close(sockets[0]);
        close(sockets[1]);
        error = QStringLiteral("wl_client_create failed");
        return;
    }
    display = wl_display_connect_to_fd(sockets[1]);
    if (!display) {
        close(sockets[1]);
        error = QStringLiteral("wl_display_connect_to_fd failed");
        return;
    }
    registry = wl_display_get_registry(display);
    static const wl_registry_listener listener = {registryGlobal, registryRemove};
    wl_registry_add_listener(registry, &listener, this);
}

Client::~Client()
{
    if (manager)
        treeland_subsurface_manager_v1_destroy(manager);
    if (compositor)
        wl_compositor_destroy(compositor);
    if (registry)
        wl_registry_destroy(registry);
    if (display) {
        wl_display_flush(display);
        wl_display_disconnect(display);
    }
    if (serverClient)
        wl_client_destroy(serverClient);
}

bool Client::roundtrip()
{
    if (!display)
        return false;
    bool done = false;
    auto *callback = wl_display_sync(display);
    static const wl_callback_listener listener = {syncDone};
    wl_callback_add_listener(callback, &listener, &done);
    QElapsedTimer timer;
    timer.start();
    while (!done && timer.elapsed() < 3000) {
        if (wl_display_flush(display) < 0 && errno != EAGAIN)
            break;
        wl_event_loop_dispatch(wl_display_get_event_loop(serverDisplay), 0);
        wl_display_flush_clients(serverDisplay);
        if (wl_display_dispatch_pending(display) < 0)
            break;
        if (done)
            break;
        pollfd descriptor{wl_display_get_fd(display), POLLIN, 0};
        if (poll(&descriptor, 1, 10) > 0 && wl_display_dispatch(display) < 0)
            break;
    }
    if (!done)
        wl_callback_destroy(callback);
    return done;
}

void Client::exportSurface(Exported &result)
{
    result.surface = wl_compositor_create_surface(compositor);
    result.object = treeland_subsurface_manager_v1_export_surface(manager, result.surface);
    static const treeland_exported_surface_v1_listener listener = {surfaceToken, parentRejected};
    treeland_exported_surface_v1_add_listener(result.object, &listener, &result);
}

ServerFixture::ServerFixture()
{
    wlr_compositor_create(server.handle(), 6, nullptr);
    server.attach<WRemoteSubsurfaceManagerV1>();
    server.start();
}

ServerFixture::~ServerFixture()
{
    server.stop();
}

wlr_surface *ServerFixture::nativeSurface(const Client &client, wl_surface *surface) const
{
    auto *resource = wl_client_get_object(client.serverClient, wl_proxy_get_id(reinterpret_cast<wl_proxy *>(surface)));
    return resource ? wlr_surface_from_resource(resource) : nullptr;
}
