cmake_minimum_required(VERSION 3.25.0)

file(STRINGS "${CMAKE_CURRENT_SOURCE_DIR}/VERSION" WAYLIB_VERSION LIMIT_COUNT 1)
project(
  QuickWaylibServer
  VERSION ${WAYLIB_VERSION}
  LANGUAGES CXX C)

set(WAYLIB_INSTALL_ENABLED ${PROJECT_IS_TOP_LEVEL})

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Standard installation paths
include(cmake/WaylibInstallDirs.cmake)
# Macros
include(FeatureSummary)

option(ADDRESS_SANITIZER "Enable address sanitizer" OFF)
add_feature_info(ASanSupport ADDRESS_SANITIZER
                 "https://github.com/google/sanitizers/wiki/AddressSanitizer")

option(BUILD_SHARED_LIBS "Build shared libraries" ON)
add_feature_info(BuildSharedLibs BUILD_SHARED_LIBS
                 "Build shared libraries instead of static")

if(ADDRESS_SANITIZER)
  add_compile_options(-fsanitize=address -fno-optimize-sibling-calls
                      -fno-omit-frame-pointer)
  add_link_options(-fsanitize=address)
endif()
# NOTE: Qt keywords conflict with wlroots. but dtksystemsettings still uses it.
# add_definitions("-DQT_NO_KEYWORDS")

# 在 wlroots 和 Waylib 配置前确定 standalone 开发包默认值；父工程缓存值优先。
option(TREELAND_INSTALL_DEV "Install development files (headers, CMake config, pkg-config, .so symlinks)" ON)

add_subdirectory(wlroots)
add_subdirectory(waylib)

if(BUILD_WAYLIB_TESTS)
  enable_testing()
endif()

# 内嵌开发和安装包使用同名目录合同，下游不推导 child 布局。
set(WaylibShared_QML_IMPORT_DIR "${CMAKE_CURRENT_BINARY_DIR}/waylib/src/server")
set(WaylibShared_LIBDIR "${CMAKE_CURRENT_BINARY_DIR}/waylib/src/server")
set(WaylibShared_WLROOTS_PROTOCOLS_DIR "${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/wlroots/protocol")
set(WaylibShared_PKGCONFIG_DIR "${CMAKE_CURRENT_BINARY_DIR}/waylib/src/server")
if(NOT PROJECT_IS_TOP_LEVEL)
  foreach(_directory QML_IMPORT_DIR LIBDIR WLROOTS_PROTOCOLS_DIR PKGCONFIG_DIR)
    set(WaylibShared_${_directory} "${WaylibShared_${_directory}}" PARENT_SCOPE)
  endforeach()
endif()

# Display feature summary
feature_summary(WHAT ALL)
