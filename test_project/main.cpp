#include <wserver.h>
#include <wpointer.h>

#include <QCoreApplication>
#include <type_traits>
#include <utility>

WAYLIB_SERVER_USE_NAMESPACE

static_assert(std::is_same_v<decltype(std::declval<WServer &>().handle()), wl_display *>);

int main(int argc, char **argv)
{
    QCoreApplication app(argc, argv);
    WServer server;
    if (!server.handle())
        return 1;

    WUniquePointer<wlr_seat> seat(wlr_seat_create(server.handle(), "installed-consumer"));
    if (!seat)
        return 2;

    WPointer<wlr_seat> observer(seat.get());
    wlr_seat_set_capabilities(seat.get(), WL_SEAT_CAPABILITY_POINTER);
    if (observer.get() != seat.get() || seat->capabilities != WL_SEAT_CAPABILITY_POINTER)
        return 3;

    // 安装包必须同时提供原生调用与随 native destroy 清空的观察指针。
    seat.reset();
    return observer ? 4 : 0;
}
