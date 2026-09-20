# SPDX-License-Identifier: Apache-2.0 OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

foreach(_package WaylibShared WaylibSharedServer)
    foreach(_case exact incompatible)
        if(_case STREQUAL "exact")
            set(_version 0.7.0)
            set(_exact ON)
            set(_expect_found ON)
        else()
            set(_version 1.0.0)
            set(_exact OFF)
            set(_expect_found OFF)
        endif()
        set(_test "${_package}_${_case}_version")
        add_test(NAME "${_test}"
            COMMAND "${CMAKE_COMMAND}"
                -S "${CMAKE_CURRENT_SOURCE_DIR}/version"
                -B "${CMAKE_CURRENT_BINARY_DIR}/version-tests/${_test}"
                -G "${CMAKE_GENERATOR}"
                "-DCMAKE_C_COMPILER=${CMAKE_C_COMPILER}"
                "-DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER}"
                "-DCMAKE_PREFIX_PATH=${CMAKE_PREFIX_PATH}"
                "-DWAYLIB_PACKAGE_DIR=${WaylibShared_DIR}"
                "-DWAYLIB_PACKAGE_NAME=${_package}"
                "-DWAYLIB_REQUEST_VERSION=${_version}"
                "-DWAYLIB_REQUEST_EXACT=${_exact}"
                "-DWAYLIB_EXPECT_FOUND=${_expect_found}")
        set_tests_properties("${_test}" PROPERTIES TIMEOUT 60)
    endforeach()
endforeach()
unset(_package)
unset(_case)
unset(_version)
unset(_exact)
unset(_expect_found)
unset(_test)
