# SPDX-License-Identifier: Apache-2.0 OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

set(_waylib_qml_module_dir "${WAYLIB_QML_INSTALL_DIR}/WaylibShared/QuickSharedServer")
if(NOT IS_ABSOLUTE "${WAYLIB_QML_INSTALL_DIR}" AND NOT IS_ABSOLUTE "${CMAKE_INSTALL_LIBDIR}")
    file(RELATIVE_PATH _waylib_plugin_to_libdir
        "${CMAKE_INSTALL_PREFIX}/${_waylib_qml_module_dir}"
        "${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR}")
    set(_waylib_plugin_rpath "$ORIGIN/${_waylib_plugin_to_libdir}")
else()
    set(_waylib_plugin_rpath "${CMAKE_INSTALL_FULL_LIBDIR}")
endif()
set_target_properties(${TARGET}plugin PROPERTIES
    INSTALL_RPATH "${_waylib_plugin_rpath}"
    BUILD_RPATH_USE_ORIGIN ON)

# 内嵌开发只参与构建；库和 QML runtime 始终由独立包安装。
if(NOT WAYLIB_INSTALL_ENABLED)
    return()
endif()

if(NOT TREELAND_INSTALL_DEV)
    install(TARGETS ${TARGET}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR} NAMELINK_SKIP)
endif()

# 二进制必须经过 target 安装以转换 RUNPATH，不能当普通文件复制。
install(TARGETS ${TARGET}plugin
    LIBRARY DESTINATION "${_waylib_qml_module_dir}"
    RUNTIME DESTINATION "${_waylib_qml_module_dir}")
install(FILES
    "${CMAKE_CURRENT_BINARY_DIR}/WaylibShared/QuickSharedServer/qmldir"
    "${CMAKE_CURRENT_BINARY_DIR}/WaylibShared/QuickSharedServer/${TARGET}.qmltypes"
    DESTINATION "${_waylib_qml_module_dir}")

if(TREELAND_INSTALL_DEV)
    install(
      TARGETS ${TARGET}
      EXPORT WaylibSharedServerTargets
      LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR} NAMELINK_COMPONENT Development
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

    waylib_package_path(WAYLIB_PACKAGE_QMLDIR "${WAYLIB_QML_INSTALL_DIR}")
    waylib_package_path(WAYLIB_PACKAGE_LIBDIR "${CMAKE_INSTALL_LIBDIR}")
    waylib_package_path(WAYLIB_PACKAGE_PKGCONFIGDIR "${WAYLIB_PKGCONFIG_INSTALL_DIR}")
    waylib_package_path(WAYLIB_PACKAGE_PROTOCOLSDIR "${WAYLIB_WLROOTS_PROTOCOLS_INSTALL_DIR}")

    configure_package_config_file(
      "${CMAKE_CURRENT_SOURCE_DIR}/../cmake/WaylibServerConfig.cmake.in"
      "${CMAKE_CURRENT_BINARY_DIR}/WaylibSharedServerConfig.cmake"
      INSTALL_DESTINATION ${WAYLIB_CMAKE_INSTALL_DIR})

    write_basic_package_version_file(
      "${CMAKE_CURRENT_BINARY_DIR}/WaylibSharedServerConfigVersion.cmake"
      VERSION ${WAYLIB_VERSION}
      COMPATIBILITY SameMinorVersion)

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
      "${WAYLIB_INCLUDE_INSTALL_DIR}"
      "waylib-wlroots = ${WLROOTS_VERSION}, Qt6Gui = ${Qt6_VERSION}, Qt6Quick = ${Qt6_VERSION}, Qt6QmlIntegration = ${Qt6_VERSION}, xcb")
endif()
