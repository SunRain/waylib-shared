// SPDX-License-Identifier: Apache-2.0 OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

#include "qwayland-server-virtual-keyboard-unstable-v1.h"

#include <QDebug>

#include <memory>

int main()
{
    std::unique_ptr<wl_display, decltype(&wl_display_destroy)> display(wl_display_create(),
                                                                       wl_display_destroy);
    if (!display) {
        qCritical() << "Cannot create a display for the generated protocol";
        return 1;
    }

    using VirtualKeyboardManager = QtWaylandServer::zwp_virtual_keyboard_manager_v1;
    VirtualKeyboardManager manager(display.get(), 1);
    if (!manager.isGlobal()
        || manager.interfaceName() != QByteArrayView("zwp_virtual_keyboard_manager_v1")
        || manager.interfaceVersion() != 1) {
        qCritical() << "The installed scanner produced an unusable virtual-keyboard manager";
        return 2;
    }
    qInfo() << "Installed protocol XML, scanner, generated C/C++ and Wayland global passed";
    return 0;
}
