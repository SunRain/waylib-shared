# SPDX-License-Identifier: Apache-2.0 OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

cmake_minimum_required(VERSION 3.21)
project(WaylibSharedVersionRequest LANGUAGES C CXX)

if(NOT WAYLIB_PACKAGE_NAME MATCHES "^(WaylibShared|WaylibSharedServer)$")
    message(FATAL_ERROR "Select WaylibShared or WaylibSharedServer")
endif()
set(CMAKE_DISABLE_FIND_PACKAGE_Qt6QuickControls2 TRUE)
set(_exact)
if(WAYLIB_REQUEST_EXACT)
    set(_exact EXACT)
endif()
set(_components)
if(WAYLIB_PACKAGE_NAME STREQUAL "WaylibShared")
    set(_components COMPONENTS SharedServer)
endif()

find_package(${WAYLIB_PACKAGE_NAME} ${WAYLIB_REQUEST_VERSION} ${_exact}
    CONFIG QUIET ${_components} PATHS "${WAYLIB_PACKAGE_DIR}" NO_DEFAULT_PATH)

if(WAYLIB_EXPECT_FOUND)
    if(NOT ${WAYLIB_PACKAGE_NAME}_FOUND)
        message(FATAL_ERROR
            "${WAYLIB_PACKAGE_NAME} rejected supported version ${WAYLIB_REQUEST_VERSION}")
    endif()
    if(NOT "${${WAYLIB_PACKAGE_NAME}_VERSION}" STREQUAL "${WAYLIB_REQUEST_VERSION}")
        message(FATAL_ERROR "${WAYLIB_PACKAGE_NAME} reported a different release version")
    endif()
    message(STATUS "${WAYLIB_PACKAGE_NAME} accepted exact version ${WAYLIB_REQUEST_VERSION}")
elseif(${WAYLIB_PACKAGE_NAME}_FOUND)
    message(FATAL_ERROR
        "${WAYLIB_PACKAGE_NAME} accepted incompatible version ${WAYLIB_REQUEST_VERSION}")
else()
    message(STATUS "${WAYLIB_PACKAGE_NAME} rejected incompatible version ${WAYLIB_REQUEST_VERSION}")
endif()
