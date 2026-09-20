set(TARGET WaylibSharedServer)

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

ws_generate(
    server
    wayland-protocols
    stable/xdg-shell/xdg-shell.xml
    xdg-shell-protocol
)

include(cmake/WaylibSources.cmake)

add_library(${TARGET} SHARED ${SOURCES})
add_library(WaylibShared::SharedServer ALIAS ${TARGET})

waylib_generate_qtwayland_server_protocol(${TARGET}
    PROTOCOL "${_waylib_remote_subsurface_protocol}"
    BASENAME treeland-remote-subsurface-unstable-v1
)

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

target_compile_features(${TARGET} PUBLIC cxx_std_20)
target_compile_definitions(${TARGET}
    PRIVATE
    WLR_USE_UNSTABLE
    LIBWAYLIB_SERVER_LIBRARY
    QT_NO_SIGNALS_SLOTS_KEYWORDS
)

set_target_properties(
  ${TARGET}
  PROPERTIES VERSION ${WAYLIB_VERSION}
             SOVERSION ${PROJECT_VERSION_MAJOR}
             EXPORT_NAME SharedServer
             PUBLIC_HEADER "${HEADERS}"
             # PRIVATE_HEADER "${PRIVATE_HEADERS}"
             # CMake Warning has PRIVATE_HEADER files but no PRIVATE_HEADER DESTINATION
             POSITION_INDEPENDENT_CODE ON
             INSTALL_RPATH "$ORIGIN"
             BUILD_RPATH_USE_ORIGIN ON
)

# Forward wlroots feature/version vars
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

include(cmake/WaylibInstall.cmake)
