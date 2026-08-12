set(TARGET WaylibSharedServer)

set(WAYLIB_CMAKE_INSTALL_DIR
    "${CMAKE_INSTALL_LIBDIR}/cmake/WaylibShared"
    CACHE STRING "Install directory for waylib cmake files")

set(_WAYLIB_DEFAULT_QML_INSTALL_DIR "${QT6_INSTALL_QML}")
if(NOT _WAYLIB_DEFAULT_QML_INSTALL_DIR
   OR IS_ABSOLUTE "${_WAYLIB_DEFAULT_QML_INSTALL_DIR}")
  set(_WAYLIB_DEFAULT_QML_INSTALL_DIR "${CMAKE_INSTALL_LIBDIR}/qt6/qml")
endif()
set(WAYLIB_QML_INSTALL_DIR
    "${_WAYLIB_DEFAULT_QML_INSTALL_DIR}"
    CACHE STRING "Install directory for QML modules")

# Migrate the previous non-relocatable default; other custom paths stay intact.
if(WAYLIB_QML_INSTALL_DIR STREQUAL "/usr/lib/qt6/qml")
  set(WAYLIB_QML_INSTALL_DIR
      "${_WAYLIB_DEFAULT_QML_INSTALL_DIR}"
      CACHE STRING "Install directory for QML modules"
      FORCE)
endif()
unset(_WAYLIB_DEFAULT_QML_INSTALL_DIR)

set(WAYLIB_INCLUDE_INSTALL_DIR
    "${CMAKE_INSTALL_INCLUDEDIR}/waylibshared/waylibserver"
    CACHE STRING "Install directory for waylib headers")

# 兼容迁移：老的默认值为 "${CMAKE_INSTALL_INCLUDEDIR}/waylib"，为了避免与 treeland 同前缀安装冲突，
# 若 cache 中仍为旧默认值则自动切换到新的命名空间目录；用户自定义值保持不变。
set(_WAYLIBSERVER_DEFAULT_INCLUDEDIR "${CMAKE_INSTALL_INCLUDEDIR}/waylibshared/waylibserver")
set(_WAYLIBSERVER_LEGACY_INCLUDEDIR "${CMAKE_INSTALL_INCLUDEDIR}/waylib")
if(DEFINED WAYLIB_INCLUDE_INSTALL_DIR AND WAYLIB_INCLUDE_INSTALL_DIR STREQUAL _WAYLIBSERVER_LEGACY_INCLUDEDIR)
  set(WAYLIB_INCLUDE_INSTALL_DIR
      "${_WAYLIBSERVER_DEFAULT_INCLUDEDIR}"
      CACHE STRING "Install directory for waylib headers"
      FORCE)
endif()
unset(_WAYLIBSERVER_DEFAULT_INCLUDEDIR)
unset(_WAYLIBSERVER_LEGACY_INCLUDEDIR)

if(Qt6_VERSION VERSION_GREATER_EQUAL 6.10)
  find_package(Qt6 REQUIRED COMPONENTS GuiPrivate QuickPrivate)
endif()
find_package(Qt6 COMPONENTS Core Gui Quick QmlIntegration REQUIRED)

qt_standard_project_setup(REQUIRES 6.8)

if(QT_KNOWN_POLICY_QTP0001) # this policy was introduced in Qt 6.5
  qt_policy(SET QTP0001 NEW)
  # the RESOURCE_PREFIX argument for qt_add_qml_module() defaults to ":/qt/qml/"
endif()

find_package(PkgConfig REQUIRED)
pkg_search_module(LIBDRM REQUIRED IMPORTED_TARGET libdrm)
set(WAYLIB_WLROOTS_INCLUDE_DIRS "")
set(WAYLIB_WLROOTS_PUBLIC_TARGET "")
if (NOT TARGET Wlroots::wlroots)
    # Standalone Waylib build against an installed waylib-wlroots (built by
    # the wlroots CMake scaffold, which also installs its headers and
    # waylib-wlroots.pc). Resolve the library, its public dependencies and
    # the wconfig.h version/feature metadata from that pkg-config file, so
    # no monorepo layout is assumed.
    find_package(PkgConfig REQUIRED)
    pkg_check_modules(WLR_INSTALLED REQUIRED IMPORTED_TARGET waylib-wlroots)
    add_library(Wlroots::wlroots ALIAS PkgConfig::WLR_INSTALLED)
    set(WAYLIB_WLROOTS_PUBLIC_TARGET PkgConfig::WLR_INSTALLED)
    foreach(_dir IN LISTS WLR_INSTALLED_INCLUDE_DIRS)
        list(APPEND WAYLIB_WLROOTS_INCLUDE_DIRS "$<BUILD_INTERFACE:${_dir}>")
    endforeach()
    pkg_get_variable(WLROOTS_VERSION waylib-wlroots wlroots_version)
    pkg_get_variable(WLROOTS_VERSION_MAJOR waylib-wlroots wlroots_version_major)
    pkg_get_variable(WLROOTS_VERSION_MINOR waylib-wlroots wlroots_version_minor)
    pkg_get_variable(WLROOTS_VERSION_PATCH waylib-wlroots wlroots_version_patch)
    pkg_get_variable(_waylib_wlroots_features waylib-wlroots wlroots_features)
    separate_arguments(_waylib_wlroots_features UNIX_COMMAND "${_waylib_wlroots_features}")
    foreach(_feature IN LISTS _waylib_wlroots_features)
        set(WLR_HAVE_${_feature} 1)
    endforeach()
else()
    set(WAYLIB_WLROOTS_PUBLIC_TARGET Wlroots::wlroots)
    set(_waylib_wlroots_include "${CMAKE_CURRENT_SOURCE_DIR}/../../../3rdparty/wlroots/include")
    if (NOT EXISTS "${_waylib_wlroots_include}/wlr")
        message(FATAL_ERROR "waylib uses vendored wlroots, but headers were not found at ${_waylib_wlroots_include}")
    endif()
    list(APPEND WAYLIB_WLROOTS_INCLUDE_DIRS "$<BUILD_INTERFACE:${_waylib_wlroots_include}>")
endif()
set(WLROOTS_TARGET Wlroots::wlroots)
pkg_search_module(WAYLAND REQUIRED IMPORTED_TARGET wayland-server)
pkg_search_module(WAYLAND_PROTOCOLS REQUIRED IMPORTED_TARGET wayland-protocols)
pkg_search_module(WLR_PROTOCOLS REQUIRED wlr-protocols)
pkg_search_module(PIXMAN REQUIRED IMPORTED_TARGET pixman-1)
pkg_search_module(XKBCOMMON REQUIRED IMPORTED_TARGET xkbcommon)
pkg_search_module(XCB REQUIRED IMPORTED_TARGET xcb)
pkg_search_module(EGL REQUIRED IMPORTED_TARGET egl)

add_compile_definitions(WLR_PRIVATE=)

ws_generate(
    server
    wayland-protocols
    unstable/text-input/text-input-unstable-v1.xml
    text-input-unstable-v1-protocol
)

ws_generate(
    server
    wayland-protocols
    ${CMAKE_CURRENT_LIST_DIR}/protocols/private/text-input-unstable-v2.xml
    text-input-unstable-v2-protocol
)

ws_generate(
    server
    wayland-protocols
    unstable/xdg-output/xdg-output-unstable-v1.xml
    xdg-output-unstable-v1-protocol
)

ws_generate(
    server
    wayland-protocols
    staging/color-management/color-management-v1.xml
    color-management-v1-protocol
)

ws_generate(
    server
    wayland-protocols
    staging/security-context/security-context-v1.xml
    security-context-v1-protocol
)

#TODO: Remove after wlroots 0.20
ws_generate(
    server
    wayland-protocols
    staging/xdg-toplevel-tag/xdg-toplevel-tag-v1.xml
    xdg-toplevel-tag-v1-protocol
)

#TODO: Remove after wlroots 0.20
ws_generate(
    server
    wayland-protocols
    stable/xdg-shell/xdg-shell.xml
    xdg-shell-protocol
)

#TODO: Remove after wlroots 0.20
ws_generate(
    server
    wayland-protocols
    staging/ext-image-capture-source/ext-image-capture-source-v1.xml
    ext-image-capture-source-v1-protocol
)

# TODO: Remove after wlroots 0.20
ws_generate(
    server
    wayland-protocols
    staging/ext-foreign-toplevel-list/ext-foreign-toplevel-list-v1.xml
    ext-foreign-toplevel-list-v1-protocol
)

set(SOURCES
    wayliblogging.cpp

    kernel/wbackend.cpp
    kernel/wcursor.cpp
    kernel/winputdevice.cpp
    kernel/woutput.cpp
    kernel/wseat.cpp
    kernel/wevent.cpp
    kernel/wserver.cpp
    kernel/wsurface.cpp
    kernel/wtoplevelsurface.cpp

    kernel/wtypes.cpp

    kernel/woutputlayout.cpp
    kernel/wxcursorimage.cpp
    kernel/wglobal.cpp
    utils/wscoplistener.cpp
    kernel/wsocket.cpp

    qtquick/wsurfaceitem.cpp
    qtquick/woutputhelper.cpp
    qtquick/woutputrenderwindow.cpp
    qtquick/woutputviewport.cpp
    qtquick/woutputitem.cpp
    qtquick/woutputlayoutitem.cpp
    qtquick/wquickoutputlayout.cpp
    qtquick/wquickcursor.cpp
    qtquick/wquickobserver.cpp
    qtquick/weventjunkman.cpp
    qtquick/wrenderhelper.cpp
    qtquick/wquicktextureproxy.cpp
    qtquick/woutputlayer.cpp
    qtquick/wrenderbufferblitter.cpp
    qtquick/wxdgtoplevelsurfaceitem.cpp
    qtquick/wxdgpopupsurfaceitem.cpp
    qtquick/wlayersurfaceitem.cpp
    qtquick/wxwaylandsurfaceitem.cpp
    qtquick/wqmlcreator.cpp
    qtquick/winputpopupsurfaceitem.cpp
    qtquick/wsgtextureprovider.cpp
    qtquick/wtextureproviderprovider.cpp
    qtquick/wbufferitem.cpp

    qtquick/private/wquickcoordmapper.cpp
    qtquick/private/wquicksocketattached.cpp
    qtquick/private/wqmlhelper.cpp
    qtquick/private/wbufferrenderer.cpp
    qtquick/private/wrenderbuffernode.cpp

    ${WAYLAND_PROTOCOLS_OUTPUTDIR}/text-input-unstable-v1-protocol.c
    ${WAYLAND_PROTOCOLS_OUTPUTDIR}/text-input-unstable-v2-protocol.c
    ${WAYLAND_PROTOCOLS_OUTPUTDIR}/xdg-output-unstable-v1-protocol.c
    ${WAYLAND_PROTOCOLS_OUTPUTDIR}/security-context-v1-protocol.c
    ${WAYLAND_PROTOCOLS_OUTPUTDIR}/xdg-toplevel-tag-v1-protocol.c #TODO: Remove after wlroots 0.20
    ${WAYLAND_PROTOCOLS_OUTPUTDIR}/xdg-shell-protocol.c #TODO: Remove after wlroots 0.20
    ${WAYLAND_PROTOCOLS_OUTPUTDIR}/ext-image-capture-source-v1-protocol.c #TODO: Remove after wlroots 0.20
    ${WAYLAND_PROTOCOLS_OUTPUTDIR}/ext-foreign-toplevel-list-v1-protocol.c #TODO Remove after wlroots 0.20

    utils/wtools.cpp
    utils/wthreadutils.cpp
    utils/wimagebuffer.cpp
    utils/wcursorimage.cpp
    utils/wextimagecapturesourcev1impl.cpp
    utils/wbufferdumper.cpp

    platformplugin/qwlrootsintegration.cpp
    platformplugin/qwlrootscreen.cpp
    platformplugin/qwlrootswindow.cpp
    platformplugin/qwlrootscursor.cpp
    platformplugin/types.cpp
    protocols/wxdgshell.cpp
    protocols/wxdgsurface.cpp
    protocols/wxdgtoplevelsurface.cpp
    protocols/wxdgtopleveltagmanager.cpp #TODO: Remove after wlroots 0.20
    protocols/wxdgpopupsurface.cpp

    protocols/wxwayland.cpp
    protocols/wxwaylandsurface.cpp
    protocols/wlayersurface.cpp
    protocols/wforeigntoplevelv1.cpp
    protocols/wxdgoutput.cpp
    protocols/wxdgdecorationmanager.cpp
    protocols/wlayershell.cpp
    protocols/winputmethodhelper.cpp
    protocols/winputpopupsurface.cpp
    protocols/private/winputmethodv2.cpp
    protocols/private/wtextinputv1.cpp
    protocols/private/wtextinputv2.cpp
    protocols/private/wtextinputv3.cpp
    protocols/private/wvirtualkeyboardv1.cpp
    protocols/ext_foreign_toplevel_image_capture_source.c #TODO: Remove after wlroots 0.20
    protocols/wcursorshapemanagerv1.cpp
    protocols/woutputmanagerv1.cpp
    protocols/wextforeigntoplevellistv1.cpp
    protocols/wxdgdialogmanagerv1.cpp
    protocols/wsecuritycontextmanager.cpp
    protocols/wsessionlockmanager.cpp
    protocols/wsessionlock.cpp
    protocols/wsessionlocksurface.cpp
)

set(HEADERS
    wayliblogging.h

    kernel/wglobal.h
    kernel/wlr_all.h
    kernel/wlr_fwd.h
    kernel/wpointer.h
    utils/wscoplistener.h
    utils/wscopedvalue.h
    utils/wlogging.h
    kernel/wbackend.h
    kernel/wcursor.h
    kernel/winputdevice.h
    kernel/woutput.h
    kernel/wseat.h
    kernel/wevent.h
    kernel/wserver.h
    kernel/wsurface.h
    kernel/wtypes.h
    kernel/woutputlayout.h
    kernel/wxcursorimage.h
    kernel/wsocket.h
    kernel/wtoplevelsurface.h

    kernel/WOutput
    kernel/WServer
    kernel/WServerInterface
    kernel/WBackend
    kernel/WCursor
    kernel/WInputDevice
    kernel/WSeat
    kernel/WEvent
    kernel/WInputEvent
    kernel/WSurface

    qtquick/wsurfaceitem.h
    qtquick/WSurfaceItem
    qtquick/woutputhelper.h
    qtquick/woutputlayoutitem.h
    qtquick/wquickoutputlayout.h
    qtquick/woutputrenderwindow.h
    qtquick/woutputviewport.h
    qtquick/woutputitem.h
    qtquick/wquickcursor.h
    qtquick/wquickobserver.h
    qtquick/weventjunkman.h
    qtquick/wrenderhelper.h
    qtquick/wquicktextureproxy.h
    qtquick/woutputlayer.h
    qtquick/wrenderbufferblitter.h
    qtquick/wxdgtoplevelsurfaceitem.h
    qtquick/wxdgpopupsurfaceitem.h
    qtquick/wlayersurfaceitem.h
    qtquick/wxwaylandsurfaceitem.h
    qtquick/winputpopupsurfaceitem.h
    qtquick/wqmlcreator.h
    qtquick/wsgtextureprovider.h
    qtquick/wtextureproviderprovider.h
    qtquick/wbufferitem.h

    utils/wtools.h
    utils/wthreadutils.h
    utils/WThreadUtils
    utils/wimagebuffer.h
    utils/wcursorimage.h
    utils/WCursorImage
    utils/wextimagecapturesourcev1impl.h
    utils/wbufferdumper.h
    utils/WBufferDumper
    utils/wcontainerof.h
    utils/WContainerOf
    protocols/wxdgshell.h
    protocols/WXdgShell
    protocols/wxdgsurface.h
    protocols/WXdgSurface
    protocols/wxdgtoplevelsurface.h
    protocols/wxdgtopleveltagmanager.h
    protocols/wxdgpopupsurface.h
    protocols/wlayersurface.h
    protocols/wxdgdecorationmanager.h
    protocols/WXdgDecorationManager
    protocols/WLayerSurface
    protocols/wforeigntoplevelv1.h
    protocols/WForeignToplevel
    protocols/wxdgoutput.h
    protocols/WXdgOutput
    protocols/WInputMethodHelper
    protocols/winputmethodhelper.h
    protocols/winputpopupsurface.h
    protocols/WInputPopupSurface
    protocols/wcursorshapemanagerv1.h
    protocols/WCursorShapeManagerV1
    protocols/woutputmanagerv1.h
    protocols/WOutputManagerV1
    protocols/wlayershell.h
    protocols/WLayerShell
    protocols/wxwayland.h
    protocols/WXWayland
    protocols/wxwaylandsurface.h
    protocols/WXWaylandSurface
    protocols/wextforeigntoplevellistv1.h
    protocols/wxdgdialogmanagerv1.h
    protocols/ext_foreign_toplevel_image_capture_source_manager_v1.h #TODO: Remove after wlroots 0.20
    protocols/wsecuritycontextmanager.h
    protocols/wsessionlockmanager.h
    protocols/WSessionLockManager
    protocols/wsessionlock.h
    protocols/WSessionLock
    protocols/wsessionlocksurface.h
    protocols/WSessionLockSurface
)

set(PRIVATE_HEADERS
    platformplugin/qwlrootsintegration.h
    platformplugin/qwlrootscreen.h
    platformplugin/qwlrootswindow.h
    platformplugin/qwlrootscursor.h
    platformplugin/types.h
    kernel/private/wglobal_p.h
    kernel/private/wsurface_p.h
    kernel/private/wprivateaccessor_p.h
    qtquick/private/woutputviewport_p.h
    qtquick/private/wquickcoordmapper_p.h
    qtquick/private/woutputitem_p.h
    qtquick/private/wquicksocketattached_p.h
    qtquick/private/wqmlcreator_p.h
    qtquick/private/wqmlhelper_p.h
    qtquick/private/wquicktextureproxy_p.h
    qtquick/private/wbufferrenderer_p.h
    qtquick/private/wrenderbuffernode_p.h
    qtquick/private/wsurfaceitem_p.h
    ${WAYLAND_PROTOCOLS_OUTPUTDIR}/text-input-unstable-v1-protocol.h
    ${WAYLAND_PROTOCOLS_OUTPUTDIR}/text-input-unstable-v2-protocol.h
    ${WAYLAND_PROTOCOLS_OUTPUTDIR}/xdg-output-unstable-v1-protocol.h
    ${WAYLAND_PROTOCOLS_OUTPUTDIR}/xdg-toplevel-tag-v1-protocol.h #TODO: Remove after wlroots 0.20
    ${WAYLAND_PROTOCOLS_OUTPUTDIR}/xdg-shell-protocol.h #TODO: Remove after wlroots 0.20
    ${WAYLAND_PROTOCOLS_OUTPUTDIR}/ext-image-capture-source-v1-protocol.h #TODO: Remove after wlroots 0.20
    ${WAYLAND_PROTOCOLS_OUTPUTDIR}/ext-foreign-toplevel-list-v1-protocol.h #TODO: Remove after wlroots 0.20

    protocols/private/winputmethodv2_p.h
    protocols/private/wtextinput_p.h
    protocols/private/wtextinputv1_p.h
    protocols/private/wtextinputv2_p.h
    protocols/private/wtextinputv3_p.h
    protocols/private/wvirtualkeyboardv1_p.h
)

if(NOT DISABLE_XWAYLAND)
  list(APPEND SOURCES protocols/wxwayland.cpp protocols/wxwaylandsurface.cpp)
endif()

add_library(${TARGET} SHARED ${SOURCES})
add_library(WaylibShared::SharedServer ALIAS ${TARGET})

qt_add_qml_module(
    ${TARGET}
    URI WaylibShared.QuickSharedServer
    VERSION "1.0" # Qt bug: The major version must be larger than 0
    OUTPUT_DIRECTORY
      "WaylibShared/QuickSharedServer"
  SOURCES
   ${HEADERS}
   ${PRIVATE_HEADERS}
  )

# Preserve the existing QML plugin filename without relying on KDE settings.
set_target_properties(${TARGET}plugin PROPERTIES PREFIX "")

target_compile_definitions(${TARGET}
    PRIVATE
    WLR_USE_UNSTABLE
    LIBWAYLIB_SERVER_LIBRARY
    QT_NO_SIGNALS_SLOTS_KEYWORDS
)

set_target_properties(
  ${TARGET}
  PROPERTIES VERSION ${CMAKE_PROJECT_VERSION}
             SOVERSION ${PROJECT_VERSION_MAJOR}
             EXPORT_NAME SharedServer
             PUBLIC_HEADER "${HEADERS}"
             # PRIVATE_HEADER "${PRIVATE_HEADERS}"
             # CMake Warning has PRIVATE_HEADER files but no PRIVATE_HEADER DESTINATION
             POSITION_INDEPENDENT_CODE ON
)

# Replace qwlroots' qwconfig.h: forward wlroots feature/version vars
# exported by the wlroots CMake build.
if(NOT DEFINED WLROOTS_VERSION)
    message(FATAL_ERROR "WLROOTS_VERSION not set; wlroots CMake export missing")
endif()
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/cmake/wconfig.h.in ${CMAKE_CURRENT_BINARY_DIR}/wconfig.h @ONLY)
target_include_directories(${TARGET} PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
target_include_directories(${TARGET} INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>)

# Public headers (wglobal.h etc.) include Qt types, so the Qt targets must
# propagate to consumers via the exported WaylibShared::SharedServer target.
target_link_libraries(${TARGET}
    PUBLIC
        Qt6::Core
        Qt6::Gui
        Qt6::Quick
        Qt6::QmlIntegration
        PkgConfig::XCB
    PRIVATE
        Qt6::GuiPrivate
        Qt6::QuickPrivate
        ${WLROOTS_TARGET}
        PkgConfig::LIBDRM
        PkgConfig::WAYLAND
        PkgConfig::WAYLAND_PROTOCOLS
        PkgConfig::PIXMAN
        PkgConfig::XKBCOMMON
        PkgConfig::EGL
)

target_link_libraries(${TARGET}
    PUBLIC
        ${WAYLIB_WLROOTS_PUBLIC_TARGET}
)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

target_include_directories(${TARGET}
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/kernel>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/qtquick>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/qtquick/private>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/utils>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/protocols>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/protocols/private>
        $<INSTALL_INTERFACE:${WAYLIB_INCLUDE_INSTALL_DIR}>
    PRIVATE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        ${Qt6Gui_PRIVATE_INCLUDE_DIRS}
        ${Qt6Quick_PRIVATE_INCLUDE_DIRS}
        ${Qt6EglSupport_PRIVATE_INCLUDE_DIRS}
        ${Qt6InputSupport_PRIVATE_INCLUDE_DIRS}
)

target_link_directories(${TARGET}
    INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_LIBDIR}>
)


install(
  TARGETS ${TARGET}
  EXPORT WaylibSharedServerTargets
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  PUBLIC_HEADER COMPONENT Development DESTINATION ${WAYLIB_INCLUDE_INSTALL_DIR})

# Generated config header (wconfig.h) is part of the public API surface
# (included by wglobal.h) and must ship with the installed headers.
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/wconfig.h
        DESTINATION ${WAYLIB_INCLUDE_INSTALL_DIR}
)

# Public headers use Q_MOC_INCLUDE/Q_PRIVATE_SLOT referencing kernel
# private headers (e.g. wserver.h -> private/wserver_p.h), and Treeland
# consumes kernel private API (e.g. WToplevelSurfacePrivate); install the
# private dependencies so installed consumers can compile and moc.
# WSurfaceHandler no longer exists; its orphaned implementation header is not an API.
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/kernel/private
        DESTINATION ${WAYLIB_INCLUDE_INSTALL_DIR}
        FILES_MATCHING PATTERN "*.h"
        PATTERN "wsurfacehandler_p.h" EXCLUDE)

# Install QML module generated targets separately to avoid dependency issues
# This works around the Qt CMake QML module export issue
get_directory_property(all_targets BUILDSYSTEM_TARGETS)
foreach(target_name ${all_targets})
    if(target_name MATCHES "^${TARGET}_resources_")
        install(TARGETS ${target_name}
            ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
            RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        )
    endif()
endforeach()

# Install QML module files manually since qt_add_qml_module INSTALL_LOCATION is ignored
message(STATUS "WaylibShared QML module will be installed to ${WAYLIB_QML_INSTALL_DIR}/WaylibShared/QuickSharedServer")
install(
  DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/WaylibShared/QuickSharedServer/"
  DESTINATION "${WAYLIB_QML_INSTALL_DIR}/WaylibShared/QuickSharedServer"
  FILES_MATCHING
  PATTERN "*.qmltypes"
  PATTERN "qmldir"
  PATTERN "*.so"
  PATTERN "*.dll"
  PATTERN "*.dylib")

configure_package_config_file(
  "${CMAKE_CURRENT_SOURCE_DIR}/../cmake/WaylibServerConfig.cmake.in"
  "${CMAKE_CURRENT_BINARY_DIR}/WaylibSharedServerConfig.cmake"
  INSTALL_DESTINATION ${WAYLIB_CMAKE_INSTALL_DIR})

write_basic_package_version_file(
  "${CMAKE_CURRENT_BINARY_DIR}/WaylibSharedServerConfigVersion.cmake"
  VERSION ${PROJECT_VERSION}
  COMPATIBILITY SameMinorVersion)

# 导出构建目录中的配置文件，以便子模块使用
export(
  EXPORT WaylibSharedServerTargets
  FILE "${CMAKE_CURRENT_BINARY_DIR}/WaylibSharedServerTargets.cmake"
  NAMESPACE WaylibShared::)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/WaylibSharedServerConfig.cmake
              ${CMAKE_CURRENT_BINARY_DIR}/WaylibSharedServerConfigVersion.cmake
        DESTINATION ${WAYLIB_CMAKE_INSTALL_DIR})

install(
  EXPORT WaylibSharedServerTargets
  FILE WaylibSharedServerTargets.cmake
  DESTINATION ${WAYLIB_CMAKE_INSTALL_DIR}
  NAMESPACE WaylibShared::)

include(${PROJECT_SOURCE_DIR}/cmake/Helpers.cmake)
add_pkgconfig_module(
  ${TARGET}
  ${TARGET}
  "${CMAKE_INSTALL_FULL_INCLUDEDIR}/waylibshared/waylibserver"
  "waylib-wlroots, Qt6Gui, Qt6Quick, Qt6QmlIntegration, xcb")
