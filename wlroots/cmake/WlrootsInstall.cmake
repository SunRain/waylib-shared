# SPDX-License-Identifier: Apache-2.0 OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

if(DEFINED WAYLIB_INSTALL_ENABLED AND NOT WAYLIB_INSTALL_ENABLED)
    return()
endif()

# ---------------------------------------------------------------------------
# Install native library, public headers and package metadata
# ---------------------------------------------------------------------------
if(NOT TREELAND_INSTALL_DEV)
    install(TARGETS waylib_wlroots_native_library
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR} NAMELINK_SKIP)
endif()

if(TREELAND_INSTALL_DEV)
    install(TARGETS waylib_wlroots_native_library
        EXPORT WaylibSharedServerTargets
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR} NAMELINK_COMPONENT Development
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    )

    # Install the wlroots headers so consumers of the exported
    # WaylibShared::waylib-wlroots target can compile against them.
    install(DIRECTORY ${WLROOTS_SOURCE_DIR}/include/wlr
            DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
    install(DIRECTORY ${WLR_GENERATED_INCLUDE_DIR}/wlr
            DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
    # Flat protocol headers (e.g. cursor-shape-v1-protocol.h) are included
    # without a directory prefix.
    install(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/protocol/
            DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
            FILES_MATCHING PATTERN "*.h")
    # wlroots' own private protocol headers (drm-client-protocol.h etc.)
    install(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/protocol/
            DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/wlr
            FILES_MATCHING PATTERN "*.h")

    install(FILES "${WLROOTS_SOURCE_DIR}/protocol/virtual-keyboard-unstable-v1.xml"
            DESTINATION "${WAYLIB_WLROOTS_PROTOCOLS_INSTALL_DIR}")
endif()

# ---------------------------------------------------------------------------
# pkg-config metadata for installed-library consumers (e.g. a standalone
# Waylib build). Carries version and feature flags as pkg-config variables
# so the consumer can regenerate its wconfig.h without running this scaffold.
# ---------------------------------------------------------------------------
set(WAYLIB_WLROOTS_PC_REQUIRES "wayland-server >= 1.26.0, libdrm >= 2.4.134, xkbcommon, pixman-1 >= 0.46.4")
set(WAYLIB_WLROOTS_PC_FEATURES "")
foreach(_feature IN ITEMS DRM_BACKEND X11_BACKEND LIBINPUT_BACKEND XWAYLAND
                        GLES2_RENDERER VULKAN_RENDERER GBM_ALLOCATOR SESSION
                        COLOR_MANAGEMENT UDMABUF_ALLOCATOR)
    if(WLR_HAS_${_feature})
        list(APPEND WAYLIB_WLROOTS_PC_FEATURES "${_feature}")
    endif()
endforeach()
string(REPLACE ";" " " WAYLIB_WLROOTS_PC_FEATURES "${WAYLIB_WLROOTS_PC_FEATURES}")
set(WAYLIB_WLROOTS_PC_VERSION ${WLROOTS_VERSION})
waylib_pkgconfig_path(WAYLIB_WLROOTS_PC_INCLUDEDIR "${CMAKE_INSTALL_INCLUDEDIR}")
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/cmake/waylib-wlroots.pc.in
               ${CMAKE_CURRENT_BINARY_DIR}/waylib-wlroots.pc @ONLY)
if(TREELAND_INSTALL_DEV)
    install(FILES ${CMAKE_CURRENT_BINARY_DIR}/waylib-wlroots.pc
            DESTINATION ${WAYLIB_PKGCONFIG_INSTALL_DIR})
endif()
