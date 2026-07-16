# SPDX-License-Identifier: MIT
# 首次 subtree 导入尚无上游 CMake 包装层，先以原生 Meson 接入真实子模块。
# 保留现有 PkgConfig::WLROOTS 公共依赖名称，不提前导入后续来源提交。
find_program(WAYLIB_WLROOTS_MESON NAMES meson REQUIRED)
find_package(PkgConfig REQUIRED)

set(_wlroots_source "${CMAKE_CURRENT_SOURCE_DIR}/../3rdparty/wlroots")
set(_wlroots_build "${CMAKE_CURRENT_BINARY_DIR}/native")
if(NOT EXISTS "${_wlroots_source}/meson.build")
  message(FATAL_ERROR "Initialize the local 3rdparty/wlroots submodule before configuring")
endif()

set(_wlroots_setup setup "${_wlroots_build}" "${_wlroots_source}"
    --buildtype=release --wrap-mode=nodownload
    "--prefix=${CMAKE_CURRENT_BINARY_DIR}/install" --libdir=lib)
if(EXISTS "${_wlroots_build}/meson-private/coredata.dat")
  list(APPEND _wlroots_setup --reconfigure)
endif()
execute_process(
  COMMAND "${CMAKE_COMMAND}" -E env "CC=${CMAKE_C_COMPILER}"
          "${WAYLIB_WLROOTS_MESON}" ${_wlroots_setup}
  RESULT_VARIABLE _wlroots_setup_result
  OUTPUT_VARIABLE _wlroots_setup_output
  ERROR_VARIABLE _wlroots_setup_error)
if(NOT _wlroots_setup_result EQUAL 0)
  message(FATAL_ERROR "Local wlroots configuration failed:\n${_wlroots_setup_output}\n${_wlroots_setup_error}")
endif()

# Meson 的 uninstalled 元数据缺少 have_* 能力变量；从同次生成的安装元数据补齐，
# 仍保留未安装构建的真实头文件和库路径，不伪造或关闭 Xwayland 等能力。
file(READ "${_wlroots_build}/meson-uninstalled/wlroots-0.19-uninstalled.pc" _wlroots_uninstalled_pc)
file(STRINGS "${_wlroots_build}/meson-private/wlroots-0.19.pc" _wlroots_features
     REGEX "^have_[a-z0-9_]+=.*$")
list(JOIN _wlroots_features "\n" _wlroots_feature_text)
set(_wlroots_pc_directory_expected "${CMAKE_CURRENT_BINARY_DIR}/pkgconfig")
file(MAKE_DIRECTORY "${_wlroots_pc_directory_expected}")
file(WRITE "${_wlroots_pc_directory_expected}/wlroots-0.19.pc"
     "${_wlroots_feature_text}\n${_wlroots_uninstalled_pc}")
set(ENV{PKG_CONFIG_PATH} "${_wlroots_pc_directory_expected}:$ENV{PKG_CONFIG_PATH}")
pkg_check_modules(WLROOTS REQUIRED IMPORTED_TARGET GLOBAL wlroots-0.19>=0.19.0)
pkg_get_variable(_wlroots_pc_directory wlroots-0.19 pcfiledir)
if(NOT _wlroots_pc_directory STREQUAL "${_wlroots_pc_directory_expected}")
  message(FATAL_ERROR "wlroots metadata did not resolve to the current native build")
endif()

set(_wlroots_library "${_wlroots_build}/libwlroots-0.19.so")
add_custom_target(waylib_wlroots_native ALL
  COMMAND "${WAYLIB_WLROOTS_MESON}" compile -C "${_wlroots_build}"
  BYPRODUCTS "${_wlroots_library}"
  USES_TERMINAL
  VERBATIM)
# 配置时库尚未生成，FindPkgConfig 可能找到系统同名文件；链接输入必须明确绑定本次产物。
add_library(waylib_wlroots_native_library SHARED IMPORTED GLOBAL)
set_target_properties(waylib_wlroots_native_library PROPERTIES
  IMPORTED_LOCATION "${_wlroots_library}"
  IMPORTED_SONAME "libwlroots-0.19.so")
add_dependencies(waylib_wlroots_native_library waylib_wlroots_native)
set_property(TARGET PkgConfig::WLROOTS PROPERTY
  INTERFACE_LINK_LIBRARIES waylib_wlroots_native_library)
