# SPDX-License-Identifier: Apache-2.0 OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

find_package(Qt6 REQUIRED COMPONENTS Test)
find_package(PkgConfig REQUIRED)
pkg_check_modules(REMOTE_WAYLAND REQUIRED IMPORTED_TARGET wayland-client wayland-server)
find_program(REMOTE_WAYLAND_SCANNER NAMES wayland-scanner REQUIRED)
set(remote_xml "${CMAKE_CURRENT_LIST_DIR}/../../../protocols/treeland-remote-subsurface-unstable-v1.xml")
set(remote_header "${CMAKE_CURRENT_BINARY_DIR}/remote-client.h")
set(remote_code "${CMAKE_CURRENT_BINARY_DIR}/remote-client.c")
add_custom_command(OUTPUT "${remote_header}"
    COMMAND "${REMOTE_WAYLAND_SCANNER}" client-header "${remote_xml}" "${remote_header}"
    DEPENDS "${remote_xml}" VERBATIM)
add_custom_command(OUTPUT "${remote_code}"
    COMMAND "${REMOTE_WAYLAND_SCANNER}" private-code "${remote_xml}" "${remote_code}"
    DEPENDS "${remote_xml}" VERBATIM)

add_executable(test_remote_subsurface main.cpp fixture.cpp fixture.h "${remote_header}" "${remote_code}")
target_include_directories(test_remote_subsurface PRIVATE "${CMAKE_CURRENT_BINARY_DIR}")
target_link_libraries(test_remote_subsurface PRIVATE WaylibShared::SharedServer Qt6::Test PkgConfig::REMOTE_WAYLAND)
add_test(NAME remote_subsurface_registry COMMAND test_remote_subsurface registry)
add_test(NAME remote_subsurface_token_and_rejection COMMAND test_remote_subsurface tokenAndRejection)
add_test(NAME remote_subsurface_relation_and_stacking COMMAND test_remote_subsurface relationAndStacking)
set_tests_properties(remote_subsurface_registry remote_subsurface_token_and_rejection
    remote_subsurface_relation_and_stacking PROPERTIES TIMEOUT 15 ENVIRONMENT "QT_QPA_PLATFORM=offscreen")
