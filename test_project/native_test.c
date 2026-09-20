// SPDX-License-Identifier: Apache-2.0 OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

#include <wlr/config.h>
#include <wlr/types/wlr_seat.h>

#include <stdio.h>
#include <string.h>

int main(void)
{
    struct wl_display *display = wl_display_create();
    if (!display) {
        fprintf(stderr, "Cannot create a native Wayland display\n");
        return 1;
    }
    struct wlr_seat *seat = wlr_seat_create(display, "native-only-consumer");
    if (!seat) {
        fprintf(stderr, "The exported native target cannot create a seat\n");
        wl_display_destroy(display);
        return 2;
    }
    wlr_seat_set_capabilities(seat, WL_SEAT_CAPABILITY_KEYBOARD);
    const int valid = seat->capabilities == WL_SEAT_CAPABILITY_KEYBOARD
        && strcmp(seat->name, "native-only-consumer") == 0;
    wlr_seat_destroy(seat);
    wl_display_destroy(display);
    if (!valid) {
        fprintf(stderr, "The exported native target returned incorrect seat state\n");
        return 3;
    }
    puts("Installed native-only target and generated configuration header passed");
    return 0;
}
