// SPDX-License-Identifier: Apache-2.0 OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only
#include "fixture.h"

#include <WSurface>
#include <WSubsurface>

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
    treeland_exported_surface_v1_destroy(surface.object);
    wl_surface_destroy(surface.surface);
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
        QCOMPARE(rejected, QStringList{QString()});
        treeland_remote_subsurface_v1_place_above(remote, "");
        QVERIFY(childClient.roundtrip());
        QCOMPARE(rejected.size(), 1);
        QCOMPARE(surface->subsurfacesAbove().size(), 1);
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
