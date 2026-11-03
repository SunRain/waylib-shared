// SPDX-License-Identifier: Apache-2.0 OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only
#include "fixture.h"

#include <WSurface>
#include <WSubsurface>
#include <wscoplistener.h>

extern "C" {
#include <wlr/types/wlr_compositor.h>
}

#include <QTest>
#include <memory>

WAYLIB_SERVER_USE_NAMESPACE

namespace {
void invalidSibling(void *data, treeland_remote_subsurface_v1 *, const char *token)
{
    static_cast<QStringList *>(data)->append(QString::fromUtf8(token));
}

void destroyExport(Exported &surface)
{
    if (surface.object)
        treeland_exported_surface_v1_destroy(surface.object);
    if (surface.surface)
        wl_surface_destroy(surface.surface);
    surface.object = nullptr;
    surface.surface = nullptr;
}
}

class RemoteSubsurfaceTest : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void registry()
    {
        ServerFixture fixture;
        Client client(fixture.server.handle());
        QVERIFY2(client.error.isEmpty(), qPrintable(client.error));
        QVERIFY(client.roundtrip());
        QVERIFY(client.compositor);
        QVERIFY(client.manager);
        QCOMPARE(client.managerVersion, 1u);
        QVERIFY(!client.sawLegacyManager);
    }

    void tokenAndRejection()
    {
        ServerFixture fixture;
        Client client(fixture.server.handle());
        QVERIFY2(client.error.isEmpty(), qPrintable(client.error));
        QVERIFY(client.roundtrip());
        QVERIFY(client.manager);
        Exported parent, child;
        client.exportSurface(parent);
        client.exportSurface(child);
        QVERIFY(client.roundtrip());
        QVERIFY(!parent.token.isEmpty());
        QVERIFY(parent.token.size() <= 128);
        QVERIFY(!child.token.isEmpty());
        QVERIFY(child.token != parent.token);
        // 独立字面量取自所选上游合同，不能用生成枚举同时作为 actual 与 expected。
        auto *rejected = treeland_exported_surface_v1_create_remote_subsurface(child.object, "missing-token");
        QVERIFY(client.roundtrip());
        QCOMPARE(child.reasons, QVector<uint32_t>{0});
        QCOMPARE(child.rejectedTokens, QStringList{QStringLiteral("missing-token")});
        wl_proxy_destroy(reinterpret_cast<wl_proxy *>(rejected));
        const auto token = parent.token.toUtf8();
        treeland_exported_surface_v1_destroy(parent.object);
        rejected = treeland_exported_surface_v1_create_remote_subsurface(child.object, token.constData());
        QVERIFY(client.roundtrip());
        QCOMPARE(child.reasons, (QVector<uint32_t>{0, 0}));
        QCOMPARE(child.rejectedTokens.back(), parent.token);
        wl_proxy_destroy(reinterpret_cast<wl_proxy *>(rejected));
        wl_surface_destroy(parent.surface);
        destroyExport(child);
        QVERIFY(client.roundtrip());
    }

    void exportRevocationPreservesRelation_data()
    {
        QTest::addColumn<bool>("revokeChild");
        QTest::newRow("parent-export") << false;
        QTest::newRow("child-export") << true;
    }

    void exportRevocationPreservesRelation()
    {
        QFETCH(bool, revokeChild);
        ServerFixture fixture;
        Client parentClient(fixture.server.handle()), childClient(fixture.server.handle());
        QVERIFY(parentClient.roundtrip());
        QVERIFY(childClient.roundtrip());
        Exported parent, child;
        parentClient.exportSurface(parent);
        childClient.exportSurface(child);
        QVERIFY(parentClient.roundtrip());
        QVERIFY(childClient.roundtrip());
        auto *parentHandle = fixture.nativeSurface(parentClient, parent.surface);
        QVERIFY(parentHandle);
        auto parentSurface = std::make_unique<WSurface>(parentHandle);
        auto *remote = treeland_exported_surface_v1_create_remote_subsurface(
            child.object, parent.token.toUtf8().constData());
        QVERIFY(childClient.roundtrip());
        QCOMPARE(parentSurface->subsurfaces().size(), 1);
        auto *subsurface = parentSurface->subsurfaces().front();
        QVERIFY(parentClient.commitBuffer(parent.surface));
        QVERIFY(childClient.commitBuffer(child.surface));
        parentSurface->map();
        QVERIFY(subsurface->isMapped());
        const auto remoteId = wl_proxy_get_id(reinterpret_cast<wl_proxy *>(remote));

        auto &revoked = revokeChild ? child : parent;
        treeland_exported_surface_v1_destroy(revoked.object);
        revoked.object = nullptr;
        QVERIFY((revokeChild ? childClient : parentClient).roundtrip());
        QCOMPARE(parentSurface->subsurfaces().size(), 1);
        QCOMPARE(parentSurface->subsurfaces().front(), subsurface);
        QVERIFY(subsurface->isMapped());
        QVERIFY(wl_client_get_object(childClient.serverClient, remoteId));
        treeland_remote_subsurface_v1_set_position(remote, 5, -7);
        treeland_remote_subsurface_v1_place_below(remote, "");
        QVERIFY(childClient.roundtrip());
        wl_surface_commit(parent.surface);
        QVERIFY(parentClient.roundtrip());
        QCOMPARE(subsurface->position(), QPointF(5, -7));
        QCOMPARE(parentSurface->subsurfacesBelow().size(), 1);
        parentSurface->unmap();
        QVERIFY(!subsurface->isMapped());
        parentSurface->map();
        QVERIFY(subsurface->isMapped());
        treeland_remote_subsurface_v1_destroy(remote);
        QVERIFY(childClient.roundtrip());
        QCOMPARE(parentSurface->subsurfaces().size(), 0);
        parentSurface.reset();
        destroyExport(child);
        destroyExport(parent);
        QVERIFY(childClient.roundtrip());
        QVERIFY(parentClient.roundtrip());
    }

    void parentDestroyedBeforeRemote_data()
    {
        QTest::addColumn<bool>("disconnectParent");
        QTest::newRow("surface-destroyed") << false;
        QTest::newRow("client-disconnected") << true;
    }

    void parentDestroyedBeforeRemote()
    {
        QFETCH(bool, disconnectParent);
        ServerFixture fixture;
        auto parentClient = std::make_unique<Client>(fixture.server.handle());
        Client childClient(fixture.server.handle());
        QVERIFY(parentClient->roundtrip());
        QVERIFY(childClient.roundtrip());
        Exported parent, child;
        parentClient->exportSurface(parent);
        childClient.exportSurface(child);
        QVERIFY(parentClient->roundtrip());
        QVERIFY(childClient.roundtrip());
        auto *parentHandle = fixture.nativeSurface(*parentClient, parent.surface);
        auto *childHandle = fixture.nativeSurface(childClient, child.surface);
        QVERIFY(parentHandle && childHandle);
        auto parentSurface = std::make_unique<WSurface>(parentHandle);
        WScopedListener parentDestroyed;
        parentDestroyed.init(&parentHandle->events.destroy, [&] {
            parentDestroyed.disconnect();
            parentSurface.reset();
        });
        auto *remote = treeland_exported_surface_v1_create_remote_subsurface(
            child.object, parent.token.toUtf8().constData());
        QVERIFY(childClient.roundtrip());
        QCOMPARE(parentSurface->subsurfaces().size(), 1);
        QVERIFY(parentClient->commitBuffer(parent.surface));
        QVERIFY(childClient.commitBuffer(child.surface));
        parentSurface->map();
        QVERIFY(childHandle->mapped);
        const auto remoteId = wl_proxy_get_id(reinterpret_cast<wl_proxy *>(remote));
        treeland_exported_surface_v1_destroy(parent.object);
        QVERIFY(parentClient->roundtrip());
        QCOMPARE(parentSurface->subsurfaces().size(), 1);

        if (disconnectParent) {
            parentClient.reset();
        } else {
            wl_surface_destroy(parent.surface);
            QVERIFY(parentClient->roundtrip());
        }
        QVERIFY(!parentSurface);
        QVERIFY(!childHandle->mapped);
        QVERIFY(wl_client_get_object(childClient.serverClient, remoteId));
        treeland_remote_subsurface_v1_set_position(remote, 5, -7);
        treeland_remote_subsurface_v1_place_above(remote, "");
        treeland_remote_subsurface_v1_place_below(remote, "");
        QVERIFY(childClient.commitBuffer(child.surface));
        QVERIFY(!childHandle->mapped);
        QCOMPARE(wl_display_get_error(childClient.display), 0);
        treeland_remote_subsurface_v1_destroy(remote);
        QVERIFY(childClient.roundtrip());
        QVERIFY(!wl_client_get_object(childClient.serverClient, remoteId));
        destroyExport(child);
        QVERIFY(childClient.roundtrip());
    }

    void childDisconnectedAfterRevocation()
    {
        ServerFixture fixture;
        Client parentClient(fixture.server.handle());
        auto childClient = std::make_unique<Client>(fixture.server.handle());
        QVERIFY(parentClient.roundtrip());
        QVERIFY(childClient->roundtrip());
        Exported parent, child;
        parentClient.exportSurface(parent);
        childClient->exportSurface(child);
        QVERIFY(parentClient.roundtrip());
        QVERIFY(childClient->roundtrip());
        auto *parentHandle = fixture.nativeSurface(parentClient, parent.surface);
        QVERIFY(parentHandle);
        auto parentSurface = std::make_unique<WSurface>(parentHandle);
        treeland_exported_surface_v1_create_remote_subsurface(
            child.object, parent.token.toUtf8().constData());
        QVERIFY(childClient->roundtrip());
        QCOMPARE(parentSurface->subsurfaces().size(), 1);
        QVERIFY(parentClient.commitBuffer(parent.surface));
        QVERIFY(childClient->commitBuffer(child.surface));
        parentSurface->map();
        QVERIFY(parentSurface->subsurfaces().front()->isMapped());
        treeland_exported_surface_v1_destroy(parent.object);
        parent.object = nullptr;
        QVERIFY(parentClient.roundtrip());
        treeland_exported_surface_v1_destroy(child.object);
        child.object = nullptr;
        QVERIFY(childClient->roundtrip());
        QCOMPARE(parentSurface->subsurfaces().size(), 1);
        childClient.reset();
        QCOMPARE(parentSurface->subsurfaces().size(), 0);
        QCOMPARE(wl_display_get_error(parentClient.display), 0);
        parentSurface.reset();
        destroyExport(parent);
        QVERIFY(parentClient.roundtrip());
    }

    void relationAndStacking()
    {
        ServerFixture fixture;
        Client parentClient(fixture.server.handle()), childClient(fixture.server.handle());
        QVERIFY(parentClient.roundtrip());
        QVERIFY(childClient.roundtrip());
        QVERIFY(parentClient.manager && childClient.manager);
        Exported parent, child;
        parentClient.exportSurface(parent);
        childClient.exportSurface(child);
        QVERIFY(parentClient.roundtrip());
        QVERIFY(childClient.roundtrip());
        auto *parentHandle = fixture.nativeSurface(parentClient, parent.surface);
        QVERIFY(parentHandle);
        // 与 compositor 一样，先为父 surface 创建包装，再接受远程子表面关系。
        auto parentSurface = std::make_unique<WSurface>(parentHandle);
        const auto token = parent.token.toUtf8();
        auto *remote = treeland_exported_surface_v1_create_remote_subsurface(child.object, token.constData());
        QStringList rejected;
        static const treeland_remote_subsurface_v1_listener listener = {invalidSibling};
        treeland_remote_subsurface_v1_add_listener(remote, &listener, &rejected);
        QVERIFY(childClient.roundtrip());
        auto *surface = WSurface::fromHandle(fixture.nativeSurface(parentClient, parent.surface));
        QVERIFY(surface);
        QCOMPARE(surface->subsurfaces().size(), 1);
        QCOMPARE(surface->subsurfaces().front()->type(), WSubsurface::Type::Remote);
        treeland_remote_subsurface_v1_place_below(remote, "");
        QVERIFY(childClient.roundtrip());
        QVERIFY(rejected.isEmpty());
        QCOMPARE(surface->subsurfacesBelow().size(), 1);
        QCOMPARE(surface->subsurfacesAbove().size(), 0);
        treeland_remote_subsurface_v1_place_above(remote, "");
        QVERIFY(childClient.roundtrip());
        QVERIFY(rejected.isEmpty());
        QCOMPARE(surface->subsurfacesAbove().size(), 1);
        QCOMPARE(surface->subsurfacesBelow().size(), 0);
        treeland_remote_subsurface_v1_place_above(remote, "missing-sibling");
        QVERIFY(childClient.roundtrip());
        QCOMPARE(rejected, QStringList{QStringLiteral("missing-sibling")});
        QCOMPARE(surface->subsurfacesAbove().size(), 1);
        QCOMPARE(surface->subsurfacesBelow().size(), 0);
        treeland_remote_subsurface_v1_place_below(remote, token.constData());
        QVERIFY(childClient.roundtrip());
        QCOMPARE(surface->subsurfacesBelow().size(), 1);
        treeland_remote_subsurface_v1_destroy(remote);
        QVERIFY(childClient.roundtrip());
        QCOMPARE(surface->subsurfaces().size(), 0);
        parentSurface.reset();
        destroyExport(child);
        destroyExport(parent);
        QVERIFY(childClient.roundtrip());
        QVERIFY(parentClient.roundtrip());
    }
};

QTEST_GUILESS_MAIN(RemoteSubsurfaceTest)
#include "main.moc"
