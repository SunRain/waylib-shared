# SPDX-License-Identifier: Apache-2.0 OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

include_guard(GLOBAL)
include(GNUInstallDirs)

set(WAYLIB_CMAKE_INSTALL_DIR "${CMAKE_INSTALL_LIBDIR}/cmake/WaylibShared"
    CACHE STRING "Install directory for Waylib CMake files")
set(WAYLIB_QML_INSTALL_DIR "${CMAKE_INSTALL_LIBDIR}/qt6/qml"
    CACHE STRING "Install directory for Waylib QML modules")
set(WAYLIB_INCLUDE_INSTALL_DIR "${CMAKE_INSTALL_INCLUDEDIR}/waylibshared/waylibserver"
    CACHE STRING "Install directory for Waylib headers")
set(WAYLIB_WLROOTS_PROTOCOLS_INSTALL_DIR "${CMAKE_INSTALL_DATADIR}/waylibshared/wlroots-protocols")
set(WAYLIB_PKGCONFIG_INSTALL_DIR "${CMAKE_INSTALL_LIBDIR}/pkgconfig")

# 相对安装目录随包移动；显式绝对目录保持固定位置语义。
function(waylib_package_path output directory)
    if(IS_ABSOLUTE "${directory}")
        set(${output} "${directory}" PARENT_SCOPE)
    else()
        set(${output} "\${PACKAGE_PREFIX_DIR}/${directory}" PARENT_SCOPE)
    endif()
endfunction()

# 生成 pc 变量引用，而不是写入配置时的安装前缀。
function(waylib_pkgconfig_path output directory)
    if(IS_ABSOLUTE "${directory}")
        set(${output} "${directory}" PARENT_SCOPE)
    else()
        set(${output} "\${prefix}/${directory}" PARENT_SCOPE)
    endif()
endfunction()

if(IS_ABSOLUTE "${CMAKE_INSTALL_LIBDIR}")
    set(WAYLIB_PC_PREFIX "${CMAKE_INSTALL_PREFIX}")
else()
    file(RELATIVE_PATH _waylib_pc_to_prefix
        "${CMAKE_INSTALL_PREFIX}/${WAYLIB_PKGCONFIG_INSTALL_DIR}"
        "${CMAKE_INSTALL_PREFIX}")
    set(WAYLIB_PC_PREFIX "\${pcfiledir}/${_waylib_pc_to_prefix}")
endif()
waylib_pkgconfig_path(WAYLIB_PC_LIBDIR "${CMAKE_INSTALL_LIBDIR}")
waylib_pkgconfig_path(WAYLIB_PC_QMLDIR "${WAYLIB_QML_INSTALL_DIR}")
waylib_pkgconfig_path(WAYLIB_PC_PROTOCOLSDIR "${WAYLIB_WLROOTS_PROTOCOLS_INSTALL_DIR}")
