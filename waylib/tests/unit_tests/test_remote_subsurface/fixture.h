// SPDX-License-Identifier: Apache-2.0 OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only
#pragma once

#include "remote-client.h"

#include <WServer>
#include <QString>
#include <QStringList>
#include <QVector>

#include <wayland-client.h>

struct wlr_surface;

struct Exported
{
    wl_surface *surface = nullptr;
    treeland_exported_surface_v1 *object = nullptr;
    QString token;
    QVector<uint32_t> reasons;
    QStringList rejectedTokens;
};

struct Client
{
    explicit Client(wl_display *server);
    ~Client();
    Client(const Client &) = delete;
    Client &operator=(const Client &) = delete;

    /// 完成真实 socket 上的双向 roundtrip，服务端始终由创建线程派发。
    bool roundtrip();
    /// 导出客户端 surface，并把协议事件写入调用方持有的状态。
    void exportSurface(Exported &result);

    wl_display *serverDisplay = nullptr;
    wl_display *display = nullptr;
    wl_client *serverClient = nullptr;
    wl_registry *registry = nullptr;
    wl_compositor *compositor = nullptr;
    treeland_subsurface_manager_v1 *manager = nullptr;
    uint32_t managerVersion = 0;
    QString error;
};

struct ServerFixture
{
    ServerFixture();
    ~ServerFixture();
    ServerFixture(const ServerFixture &) = delete;
    ServerFixture &operator=(const ServerFixture &) = delete;

    /// 通过真实 server-side wl_resource 找到本测试客户端的 native surface。
    wlr_surface *nativeSurface(const Client &client, wl_surface *surface) const;

    WAYLIB_SERVER_NAMESPACE::WServer server;
};
