# SPDX-License-Identifier: Apache-2.0 OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

# pkg-config 不携带 CMake 的语言特性，调用方需明确选择 C++20。
set(_saved_pkg_config_path "$ENV{PKG_CONFIG_PATH}")
set(ENV{PKG_CONFIG_PATH} "${WaylibShared_PKGCONFIG_DIR}:$ENV{PKG_CONFIG_PATH}")
pkg_check_modules(WAYLIBSHARED_PC REQUIRED IMPORTED_TARGET WaylibSharedServer=0.7.0)

file(REAL_PATH "${WaylibShared_PKGCONFIG_DIR}" _candidate_pc_dir)
file(REAL_PATH "${WaylibShared_LIBDIR}" _candidate_lib_dir)
foreach(_package WaylibSharedServer waylib-wlroots)
    pkg_get_variable(_pc_dir "${_package}" pcfiledir)
    pkg_get_variable(_lib_dir "${_package}" libdir)
    file(REAL_PATH "${_pc_dir}" _pc_dir)
    file(REAL_PATH "${_lib_dir}" _lib_dir)
    if(NOT _pc_dir STREQUAL _candidate_pc_dir OR NOT _lib_dir STREQUAL _candidate_lib_dir)
        message(FATAL_ERROR
            "${_package} must use the candidate package: "
            "pcfiledir=${_pc_dir}, libdir=${_lib_dir}; "
            "expected ${_candidate_pc_dir}, ${_candidate_lib_dir}")
    endif()
endforeach()
set(ENV{PKG_CONFIG_PATH} "${_saved_pkg_config_path}")

add_executable(waylibshared_pkgconfig_consumer main.cpp)
target_compile_features(waylibshared_pkgconfig_consumer PRIVATE cxx_std_20)
target_link_libraries(waylibshared_pkgconfig_consumer PRIVATE PkgConfig::WAYLIBSHARED_PC)

unset(_saved_pkg_config_path)
unset(_candidate_pc_dir)
unset(_candidate_lib_dir)
unset(_package)
unset(_pc_dir)
unset(_lib_dir)
