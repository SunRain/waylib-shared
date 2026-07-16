# Copyright (C) 2026 UnionTech Software Technology Co., Ltd.
# SPDX-License-Identifier: Apache-2.0 OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

# CMake build for vendored wlroots 0.19.3.
# 包装层保留在 wlroots/；源码来自 3rdparty/wlroots 独立子模块。
# 仅使用统一同步流程更新子模块；update-from-upstream.sh 保留但拒绝写入。
# Do not call project() here.

cmake_minimum_required(VERSION 3.25)

# 独立 wlroots 子模块仍保持原生源码结构，不向其中写入 CMake 文件。
set(WLROOTS_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../3rdparty/wlroots")
get_filename_component(WLROOTS_SOURCE_DIR "${WLROOTS_SOURCE_DIR}" ABSOLUTE)
if(NOT EXISTS "${WLROOTS_SOURCE_DIR}/include/wlr")
    message(FATAL_ERROR
        "wlroots: missing upstream tree at ${WLROOTS_SOURCE_DIR}. "
        "Expected vendored sources under 3rdparty/wlroots.")
endif()

set(WLR_NATIVE_VERSION 0.19.3)
set(WLR_NATIVE_VERSION_MAJOR 0)
set(WLR_NATIVE_VERSION_MINOR 19)
set(WLR_NATIVE_VERSION_PATCH 3)

# ---------------------------------------------------------------------------
# Feature options (defaults ON; soft options may auto-disable)
# ---------------------------------------------------------------------------
option(WLROOTS_BACKEND_DRM "Build DRM backend" ON)
option(WLROOTS_BACKEND_LIBINPUT "Build libinput backend" ON)
option(WLROOTS_BACKEND_X11 "Build X11 backend" ON)
option(WLROOTS_RENDERER_GLES2 "Build GLES2 renderer" ON)
option(WLROOTS_RENDERER_VULKAN "Build Vulkan renderer" ON)
option(WLROOTS_ALLOCATOR_GBM "Build GBM allocator" ON)
option(WLROOTS_ALLOCATOR_UDMABUF "Build udmabuf allocator" ON)
option(WLROOTS_SESSION "Build session support" ON)
option(WLROOTS_XWAYLAND "Build Xwayland support" ON)
option(WLROOTS_COLOR_MANAGEMENT "Build color management (lcms2)" ON)
option(WLROOTS_LIBLIFTOFF "Build libliftoff support (soft)" ON)
option(WLROOTS_XCB_ERRORS "Build xcb-errors support (soft)" ON)
# Examples/tinywl are separate binaries, never linked into waylib_wlroots_native_library.
# Default OFF; CMake port does not build them yet when ON (see message below).
option(WLROOTS_EXAMPLES "Build wlroots examples and tinywl (optional)" OFF)

if((WLROOTS_BACKEND_DRM OR WLROOTS_BACKEND_LIBINPUT) AND NOT WLROOTS_SESSION)
    message(FATAL_ERROR
        "WLROOTS_SESSION is required when WLROOTS_BACKEND_DRM or "
        "WLROOTS_BACKEND_LIBINPUT is enabled")
endif()

# ---------------------------------------------------------------------------
# Always-required packages
# ---------------------------------------------------------------------------
find_package(PkgConfig REQUIRED)
include(GNUInstallDirs)
include(CheckIncludeFile)
include(CheckSymbolExists)
include(CheckCSourceCompiles)
include(TestBigEndian)

pkg_check_modules(WAYLAND_SERVER REQUIRED IMPORTED_TARGET wayland-server>=1.23.1)
pkg_check_modules(LIBDRM REQUIRED IMPORTED_TARGET libdrm>=2.4.122)
pkg_check_modules(XKBCOMMON REQUIRED IMPORTED_TARGET xkbcommon)
pkg_check_modules(PIXMAN REQUIRED IMPORTED_TARGET pixman-1>=0.43.0)
pkg_check_modules(WAYLAND_PROTOCOLS REQUIRED wayland-protocols>=1.41)
pkg_check_modules(WAYLAND_CLIENT REQUIRED IMPORTED_TARGET wayland-client>=1.23.1)
pkg_check_modules(WAYLAND_SCANNER_PC REQUIRED wayland-scanner)

pkg_get_variable(WAYLAND_PROTOCOLS_DATADIR wayland-protocols pkgdatadir)
pkg_get_variable(WAYLAND_SCANNER_BIN wayland-scanner wayland_scanner)
if(NOT WAYLAND_SCANNER_BIN)
    find_program(WAYLAND_SCANNER_BIN NAMES wayland-scanner REQUIRED)
endif()

find_library(MATH_LIBRARY m REQUIRED)
find_library(RT_LIBRARY rt REQUIRED)

# ---------------------------------------------------------------------------
# Conditional / feature packages
# ---------------------------------------------------------------------------
set(WLR_HAS_DRM_BACKEND 0)
set(WLR_HAS_LIBINPUT_BACKEND 0)
set(WLR_HAS_X11_BACKEND 0)
set(WLR_HAS_GLES2_RENDERER 0)
set(WLR_HAS_VULKAN_RENDERER 0)
set(WLR_HAS_GBM_ALLOCATOR 0)
set(WLR_HAS_UDMABUF_ALLOCATOR 0)
set(WLR_HAS_XWAYLAND 0)
set(WLR_HAS_SESSION 0)
set(WLR_HAS_COLOR_MANAGEMENT 0)

set(HAVE_LIBLIFTOFF 0)
set(HAVE_LIBLIFTOFF_0_5 0)
set(HAVE_XCB_ERRORS 0)
set(HAVE_EGL 0)
set(HAVE_EVENTFD 0)
set(HAVE_GBM_BO_GET_FD_FOR_PLANE 0)
set(HAVE_LIBINPUT_BUSTYPE 0)
set(HAVE_LIBINPUT_SWITCH_KEYPAD_SLIDE 0)
set(HAVE_XWAYLAND_LISTENFD 0)
set(HAVE_XWAYLAND_NO_TOUCH_POINTER_EMULATION 0)
set(HAVE_XWAYLAND_FORCE_XRANDR_EMULATION 0)
set(HAVE_XWAYLAND_TERMINATE_DELAY 0)
set(HAVE_XCB_XFIXES_SET_CLIENT_DISCONNECT_MODE 0)
set(XWAYLAND_PATH "")

# Session (libudev + libseat)
if(WLROOTS_SESSION)
    pkg_check_modules(LIBUDEV REQUIRED IMPORTED_TARGET libudev)
    pkg_check_modules(LIBSEAT REQUIRED IMPORTED_TARGET libseat>=0.2.0)
    set(WLR_HAS_SESSION 1)
endif()

# DRM backend
if(WLROOTS_BACKEND_DRM)
    if(NOT WLR_HAS_SESSION)
        message(FATAL_ERROR "DRM backend requires session support")
    endif()
    pkg_check_modules(LIBDISPLAY_INFO REQUIRED IMPORTED_TARGET libdisplay-info)
    pkg_check_modules(HWDATA REQUIRED hwdata)
    pkg_get_variable(HWDATA_DIR hwdata pkgdatadir)
    set(WLR_HAS_DRM_BACKEND 1)

    if(WLROOTS_LIBLIFTOFF)
        pkg_check_modules(LIBLIFTOFF IMPORTED_TARGET libliftoff>=0.4.0)
        if(LIBLIFTOFF_FOUND)
            set(HAVE_LIBLIFTOFF 1)
            if(LIBLIFTOFF_VERSION VERSION_GREATER_EQUAL "0.5.0")
                set(HAVE_LIBLIFTOFF_0_5 1)
            endif()
        else()
            message(STATUS "libliftoff not found; disabling WLROOTS_LIBLIFTOFF")
            set(WLROOTS_LIBLIFTOFF OFF CACHE BOOL "Build libliftoff support (soft)" FORCE)
        endif()
    endif()
endif()

# libinput backend
if(WLROOTS_BACKEND_LIBINPUT)
    if(NOT WLR_HAS_SESSION)
        message(FATAL_ERROR "libinput backend requires session support")
    endif()
    pkg_check_modules(LIBINPUT REQUIRED IMPORTED_TARGET libinput>=1.19.0)
    set(WLR_HAS_LIBINPUT_BACKEND 1)
    if(LIBINPUT_VERSION VERSION_GREATER_EQUAL "1.26.0")
        set(HAVE_LIBINPUT_BUSTYPE 1)
    endif()
    if(LIBINPUT_VERSION VERSION_GREATER_EQUAL "1.30.901")
        set(HAVE_LIBINPUT_SWITCH_KEYPAD_SLIDE 1)
    endif()
endif()

# X11 backend
if(WLROOTS_BACKEND_X11)
    set(_wlr_x11_pkgs
        xcb
        xcb-dri3
        xcb-present
        xcb-render
        xcb-renderutil
        xcb-shm
        xcb-xfixes
        xcb-xinput
    )
    foreach(_pkg IN LISTS _wlr_x11_pkgs)
        string(REPLACE "-" "_" _var "${_pkg}")
        string(TOUPPER "${_var}" _var)
        pkg_check_modules(${_var} REQUIRED IMPORTED_TARGET ${_pkg})
        list(APPEND WLR_X11_TARGETS PkgConfig::${_var})
    endforeach()
    set(WLR_HAS_X11_BACKEND 1)
endif()

# GLES2 renderer (+ EGL/GBM)
if(WLROOTS_RENDERER_GLES2)
    pkg_check_modules(EGL REQUIRED IMPORTED_TARGET egl)
    pkg_check_modules(GBM REQUIRED IMPORTED_TARGET gbm)
    pkg_check_modules(GLESV2 REQUIRED IMPORTED_TARGET glesv2)
    set(WLR_HAS_GLES2_RENDERER 1)
    set(HAVE_EGL 1)
endif()

# Vulkan renderer
if(WLROOTS_RENDERER_VULKAN)
    pkg_check_modules(VULKAN REQUIRED IMPORTED_TARGET vulkan)
    find_program(GLSLANG_VALIDATOR NAMES glslang glslangValidator)
    if(NOT GLSLANG_VALIDATOR)
        message(FATAL_ERROR "glslang/glslangValidator required for Vulkan renderer")
    endif()
    set(WLR_HAS_VULKAN_RENDERER 1)
endif()

# GBM allocator
if(WLROOTS_ALLOCATOR_GBM)
    if(NOT TARGET PkgConfig::GBM)
        pkg_check_modules(GBM REQUIRED IMPORTED_TARGET gbm>=17.1.0)
    endif()
    set(WLR_HAS_GBM_ALLOCATOR 1)

    set(CMAKE_REQUIRED_INCLUDES ${GBM_INCLUDE_DIRS})
    set(CMAKE_REQUIRED_LIBRARIES ${GBM_LIBRARIES})
    check_symbol_exists(gbm_bo_get_fd_for_plane "gbm.h" _have_gbm_bo_get_fd_for_plane)
    unset(CMAKE_REQUIRED_INCLUDES)
    unset(CMAKE_REQUIRED_LIBRARIES)
    if(_have_gbm_bo_get_fd_for_plane)
        set(HAVE_GBM_BO_GET_FD_FOR_PLANE 1)
    endif()
endif()

# udmabuf allocator (kernel headers + memfd seals)
if(WLROOTS_ALLOCATOR_UDMABUF)
    check_include_file("linux/udmabuf.h" _have_udmabuf_h)
    check_c_source_compiles("
        #define _GNU_SOURCE
        #include <sys/mman.h>
        #include <fcntl.h>
        int main(void) {
            (void)memfd_create;
            (void)F_ADD_SEALS;
            return 0;
        }
    " _have_udmabuf_apis)
    if(NOT _have_udmabuf_h OR NOT _have_udmabuf_apis)
        message(FATAL_ERROR
            "udmabuf allocator requires memfd_create, F_ADD_SEALS and <linux/udmabuf.h>")
    endif()
    set(WLR_HAS_UDMABUF_ALLOCATOR 1)
endif()

# Color management (lcms2)
if(WLROOTS_COLOR_MANAGEMENT)
    pkg_check_modules(LCMS2 REQUIRED IMPORTED_TARGET lcms2)
    set(WLR_HAS_COLOR_MANAGEMENT 1)
endif()

# Xwayland
if(WLROOTS_XWAYLAND)
    pkg_check_modules(XWAYLAND REQUIRED xwayland)
    set(_wlr_xwayland_pkgs
        xcb
        xcb-composite
        xcb-ewmh
        xcb-icccm
        xcb-render
        xcb-res
        xcb-xfixes
    )
    foreach(_pkg IN LISTS _wlr_xwayland_pkgs)
        string(REPLACE "-" "_" _var "${_pkg}")
        string(TOUPPER "XWL_${_var}" _var)
        if(NOT TARGET PkgConfig::${_var})
            # Reuse already-imported targets where package names collide with X11 backend
            string(REPLACE "-" "_" _plain "${_pkg}")
            string(TOUPPER "${_plain}" _plain)
            if(TARGET PkgConfig::${_plain})
                list(APPEND WLR_XWAYLAND_TARGETS PkgConfig::${_plain})
            else()
                pkg_check_modules(${_var} REQUIRED IMPORTED_TARGET ${_pkg})
                list(APPEND WLR_XWAYLAND_TARGETS PkgConfig::${_var})
            endif()
        endif()
    endforeach()

    pkg_get_variable(XWAYLAND_PATH xwayland xwayland)
    if(NOT XWAYLAND_PATH)
        set(XWAYLAND_PATH "Xwayland")
    endif()

    foreach(_feat IN ITEMS listenfd no_touch_pointer_emulation force_xrandr_emulation terminate_delay)
        string(TOUPPER "${_feat}" _feat_up)
        pkg_get_variable(_xwl_have_${_feat} xwayland have_${_feat})
        if(_xwl_have_${_feat} STREQUAL "true")
            set(HAVE_XWAYLAND_${_feat_up} 1)
        endif()
    endforeach()

    # Probe xcb_xfixes_set_client_disconnect_mode (needs xcb + xcb-xfixes)
    set(_xcb_xfixes_inc)
    set(_xcb_xfixes_libs)
    if(DEFINED XCB_XFIXES_INCLUDE_DIRS)
        list(APPEND _xcb_xfixes_inc ${XCB_XFIXES_INCLUDE_DIRS})
    endif()
    if(DEFINED XCB_INCLUDE_DIRS)
        list(APPEND _xcb_xfixes_inc ${XCB_INCLUDE_DIRS})
    endif()
    if(DEFINED XWL_XCB_XFIXES_INCLUDE_DIRS)
        list(APPEND _xcb_xfixes_inc ${XWL_XCB_XFIXES_INCLUDE_DIRS})
    endif()
    if(DEFINED XCB_XFIXES_LIBRARIES)
        list(APPEND _xcb_xfixes_libs ${XCB_XFIXES_LIBRARIES})
    elseif(DEFINED XWL_XCB_XFIXES_LIBRARIES)
        list(APPEND _xcb_xfixes_libs ${XWL_XCB_XFIXES_LIBRARIES})
    endif()
    if(DEFINED XCB_LIBRARIES)
        list(APPEND _xcb_xfixes_libs ${XCB_LIBRARIES})
    elseif(DEFINED XWL_XCB_LIBRARIES)
        list(APPEND _xcb_xfixes_libs ${XWL_XCB_LIBRARIES})
    endif()
    set(CMAKE_REQUIRED_INCLUDES ${_xcb_xfixes_inc})
    set(CMAKE_REQUIRED_LIBRARIES ${_xcb_xfixes_libs})
    check_symbol_exists(xcb_xfixes_set_client_disconnect_mode
        "xcb/xfixes.h" _have_xcb_xfixes_set_client_disconnect_mode)
    unset(CMAKE_REQUIRED_INCLUDES)
    unset(CMAKE_REQUIRED_LIBRARIES)
    if(_have_xcb_xfixes_set_client_disconnect_mode)
        set(HAVE_XCB_XFIXES_SET_CLIENT_DISCONNECT_MODE 1)
    endif()

    set(WLR_HAS_XWAYLAND 1)
endif()

# Soft: xcb-errors (used by X11 backend / xwayland)
if(WLROOTS_XCB_ERRORS)
    pkg_check_modules(XCB_ERRORS IMPORTED_TARGET xcb-errors)
    if(XCB_ERRORS_FOUND)
        set(HAVE_XCB_ERRORS 1)
    else()
        message(STATUS "xcb-errors not found; disabling WLROOTS_XCB_ERRORS")
        set(WLROOTS_XCB_ERRORS OFF CACHE BOOL "Build xcb-errors support (soft)" FORCE)
    endif()
endif()

check_include_file("sys/eventfd.h" _have_eventfd)
if(_have_eventfd)
    set(HAVE_EVENTFD 1)
endif()

# ICONDIR (cursor theme search path)
if(NOT DEFINED WLROOTS_ICONDIR OR WLROOTS_ICONDIR STREQUAL "")
    set(WLROOTS_ICONDIR "${CMAKE_INSTALL_FULL_DATADIR}/icons")
endif()
set(ICONDIR "${WLROOTS_ICONDIR}")

# Endianness
test_big_endian(WLR_IS_BIG_ENDIAN)
if(WLR_IS_BIG_ENDIAN)
    set(WLR_LITTLE_ENDIAN 0)
    set(WLR_BIG_ENDIAN 1)
else()
    set(WLR_LITTLE_ENDIAN 1)
    set(WLR_BIG_ENDIAN 0)
endif()

# ---------------------------------------------------------------------------
# Helper modules (Task 3/4 fill these in)
# ---------------------------------------------------------------------------
include("${CMAKE_CURRENT_SOURCE_DIR}/cmake/WlrootsProtocols.cmake")
wlroots_generate_public_configuration()
wlroots_generate_internal_configuration()
include("${CMAKE_CURRENT_SOURCE_DIR}/cmake/WlrootsShaders.cmake")
include("${CMAKE_CURRENT_SOURCE_DIR}/cmake/WlrootsSources.cmake")

# ---------------------------------------------------------------------------
# Library target
# ---------------------------------------------------------------------------
add_library(waylib_wlroots_native_library SHARED)
add_library(Wlroots::wlroots ALIAS waylib_wlroots_native_library)

set_target_properties(waylib_wlroots_native_library PROPERTIES
    OUTPUT_NAME wlroots-0.19
    C_STANDARD 11
    C_STANDARD_REQUIRED ON
    POSITION_INDEPENDENT_CODE ON
)

# Protocol / shader / pnpids codegen (Task 3).
wlroots_generate_protocols(waylib_wlroots_native_library)
wlroots_generate_shaders(waylib_wlroots_native_library)
wlroots_generate_pnpids(waylib_wlroots_native_library)

# Full meson-mirrored source collection (util/types/backend/render/xcursor/xwayland).
wlroots_collect_sources(waylib_wlroots_native_library)

target_include_directories(waylib_wlroots_native_library
    SYSTEM PUBLIC
        $<BUILD_INTERFACE:${WLROOTS_SOURCE_DIR}/include>
        $<BUILD_INTERFACE:${WLR_GENERATED_INCLUDE_DIR}>
    PRIVATE
        ${WLROOTS_SOURCE_DIR}/include
        ${CMAKE_CURRENT_BINARY_DIR}
        ${WLR_GENERATED_INCLUDE_DIR}
)

target_compile_definitions(waylib_wlroots_native_library
    PUBLIC
        WLR_USE_UNSTABLE
    PRIVATE
        _POSIX_C_SOURCE=200809L
        WLR_USE_UNSTABLE
        WLR_PRIVATE=
        WLR_LITTLE_ENDIAN=${WLR_LITTLE_ENDIAN}
        WLR_BIG_ENDIAN=${WLR_BIG_ENDIAN}
)

# Vendored third-party C is noisy under treeland's warning flags.
# - Do not promote warnings to errors for this target.
# - Silence unused-parameter (wlroots APIs intentionally unused in many stubs).
target_compile_options(waylib_wlroots_native_library PRIVATE
    -Wno-error
    -Wno-unused-parameter
)

# examples/ and tinywl/ are not part of the library source set (see WlrootsSources.cmake).
if(WLROOTS_EXAMPLES)
    message(STATUS
        "WLROOTS_EXAMPLES=ON: example/tinywl CMake targets are not ported yet; "
        "only libwaylib_wlroots_native_library is built. Use meson in 3rdparty/wlroots to build examples.")
endif()

target_link_libraries(waylib_wlroots_native_library
    PUBLIC
        PkgConfig::WAYLAND_SERVER
        PkgConfig::LIBDRM
        PkgConfig::XKBCOMMON
        PkgConfig::PIXMAN
    PRIVATE
        PkgConfig::WAYLAND_CLIENT
        ${MATH_LIBRARY}
        ${RT_LIBRARY}
)

wlroots_link_feature_libraries(waylib_wlroots_native_library)

# Symbol version script (same as upstream meson)
target_link_options(waylib_wlroots_native_library PRIVATE
    "LINKER:--version-script=${WLROOTS_SOURCE_DIR}/wlroots.syms"
)
set_target_properties(waylib_wlroots_native_library PROPERTIES
    LINK_DEPENDS "${WLROOTS_SOURCE_DIR}/wlroots.syms"
)

# ---------------------------------------------------------------------------
# Install library only (no headers, no .pc)
# ---------------------------------------------------------------------------
install(TARGETS waylib_wlroots_native_library
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# ---------------------------------------------------------------------------
# Export version / feature vars for qwlroots (lowercase true/false)
# ---------------------------------------------------------------------------
macro(wlr_export_bool _name _value01)
    if(${_value01})
        set(${_name} true CACHE INTERNAL "wlroots feature ${_name}")
    else()
        set(${_name} false CACHE INTERNAL "wlroots feature ${_name}")
    endif()
endmacro()

wlr_export_bool(WLR_HAVE_DRM_BACKEND ${WLR_HAS_DRM_BACKEND})
wlr_export_bool(WLR_HAVE_X11_BACKEND ${WLR_HAS_X11_BACKEND})
wlr_export_bool(WLR_HAVE_LIBINPUT_BACKEND ${WLR_HAS_LIBINPUT_BACKEND})
wlr_export_bool(WLR_HAVE_XWAYLAND ${WLR_HAS_XWAYLAND})
wlr_export_bool(WLR_HAVE_GLES2_RENDERER ${WLR_HAS_GLES2_RENDERER})
wlr_export_bool(WLR_HAVE_VULKAN_RENDERER ${WLR_HAS_VULKAN_RENDERER})
wlr_export_bool(WLR_HAVE_GBM_ALLOCATOR ${WLR_HAS_GBM_ALLOCATOR})
wlr_export_bool(WLR_HAVE_SESSION ${WLR_HAS_SESSION})
wlr_export_bool(WLR_HAVE_COLOR_MANAGEMENT ${WLR_HAS_COLOR_MANAGEMENT})
wlr_export_bool(WLR_HAVE_UDMABUF_ALLOCATOR ${WLR_HAS_UDMABUF_ALLOCATOR})

# qwlroots 从本次生成的 pkg-config 元数据读取版本与能力，不覆盖其公共变量。
message(STATUS "waylib_wlroots_native_library ${WLR_NATIVE_VERSION}: "
    "drm=${WLR_HAVE_DRM_BACKEND} libinput=${WLR_HAVE_LIBINPUT_BACKEND} "
    "x11=${WLR_HAVE_X11_BACKEND} gles2=${WLR_HAVE_GLES2_RENDERER} "
    "vulkan=${WLR_HAVE_VULKAN_RENDERER} gbm=${WLR_HAVE_GBM_ALLOCATOR} "
    "udmabuf=${WLR_HAVE_UDMABUF_ALLOCATOR} session=${WLR_HAVE_SESSION} "
    "xwayland=${WLR_HAVE_XWAYLAND} color=${WLR_HAVE_COLOR_MANAGEMENT} "
    "liftoff=${HAVE_LIBLIFTOFF} xcb-errors=${HAVE_XCB_ERRORS}")

# 保持既有 PkgConfig::WLROOTS 公共依赖；元数据和链接均绑定当前 R。
set(_wlroots_pc_dir "${CMAKE_CURRENT_BINARY_DIR}/pkgconfig")
file(MAKE_DIRECTORY "${_wlroots_pc_dir}")
set(_wlroots_pc "prefix=${CMAKE_CURRENT_BINARY_DIR}\n")
foreach(_feature IN ITEMS DRM_BACKEND LIBINPUT_BACKEND X11_BACKEND GLES2_RENDERER
        VULKAN_RENDERER GBM_ALLOCATOR UDMABUF_ALLOCATOR XWAYLAND SESSION COLOR_MANAGEMENT)
    string(TOLOWER "${_feature}" _feature_lower)
    string(APPEND _wlroots_pc "have_${_feature_lower}=${WLR_HAVE_${_feature}}\n")
endforeach()
string(APPEND _wlroots_pc "Name: wlroots-0.19\nDescription: Local wlroots library\n"
    "Version: ${WLR_NATIVE_VERSION}\nLibs: -L${CMAKE_CURRENT_BINARY_DIR} -lwlroots-0.19\n"
    "Cflags: -I${WLROOTS_SOURCE_DIR}/include -I${WLR_GENERATED_INCLUDE_DIR}\n")
file(WRITE "${_wlroots_pc_dir}/wlroots-0.19.pc" "${_wlroots_pc}")
set(ENV{PKG_CONFIG_PATH} "${_wlroots_pc_dir}:$ENV{PKG_CONFIG_PATH}")
pkg_check_modules(WLROOTS REQUIRED IMPORTED_TARGET GLOBAL wlroots-0.19>=0.19.0)
pkg_get_variable(_wlroots_pc_actual wlroots-0.19 pcfiledir)
if(NOT _wlroots_pc_actual STREQUAL _wlroots_pc_dir)
    message(FATAL_ERROR "wlroots metadata does not belong to the current wrapper build")
endif()
set_property(TARGET PkgConfig::WLROOTS PROPERTY
    INTERFACE_LINK_LIBRARIES waylib_wlroots_native_library)
