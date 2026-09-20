#include <xcb/xcb.h>
#include <xcb/xcbext.h>

#include <wconfig.h>
#include <wpointer.h>
#include <wserver.h>

#include <QCoreApplication>
#include <QDebug>

#include <type_traits>
#include <utility>

WAYLIB_SERVER_USE_NAMESPACE

static_assert(std::is_same_v<decltype(std::declval<WServer &>().handle()), wl_display *>);
static_assert(__cplusplus >= 202002L, "WaylibShared public headers require C++20");

int main(int argc, char **argv)
{
    QCoreApplication app(argc, argv);
    WServer server;
    if (!server.handle()) {
        qCritical() << "WServer did not create a native display";
        return 1;
    }

    WUniquePointer<wlr_seat> seat(wlr_seat_create(server.handle(), "installed-consumer"));
    if (!seat) {
        qCritical() << "The installed native library did not create a seat";
        return 2;
    }

    WPointer<wlr_seat> observer(seat.get());
    wlr_seat_set_capabilities(seat.get(), WL_SEAT_CAPABILITY_POINTER);
    if (observer.get() != seat.get() || seat->capabilities != WL_SEAT_CAPABILITY_POINTER) {
        qCritical() << "Native seat capabilities or WPointer observation are incorrect";
        return 3;
    }

    // 安装包必须同时提供原生调用与随 native destroy 清空的观察指针。
    seat.reset();
    if (observer) {
        qCritical() << "WPointer still observes a destroyed native seat";
        return 4;
    }
    if (xcb_popcount(0xa5U) != 4) {
        qCritical() << "The public XCB dependency is not usable";
        return 5;
    }
    qInfo() << "Installed public headers, native calls, XCB and WPointer lifecycle passed";
    return 0;
}
