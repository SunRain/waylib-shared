# SPDX-License-Identifier: Apache-2.0 OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

include_guard(GLOBAL)

# 为 target 生成并编译 Qt Wayland server 协议代码。
# PROTOCOL 是 XML 路径，BASENAME 是生成文件名，PREFIX 是现有 C++ 类名前缀。
# PRIVATE_CODE 保留现有调用语法；Wayland C 接口始终以 private-code 生成。
# 调用方负责链接 Qt6::Core 和 wayland-server（也可链接 SharedServer）。
function(waylib_generate_qtwayland_server_protocol target)
    cmake_parse_arguments(PARSE_ARGV 1 ARGS "PRIVATE_CODE" "PROTOCOL;BASENAME;PREFIX" "")
    if(ARGS_UNPARSED_ARGUMENTS OR NOT ARGS_PROTOCOL OR NOT ARGS_BASENAME)
        message(FATAL_ERROR
            "waylib_generate_qtwayland_server_protocol requires PROTOCOL and BASENAME; "
            "invalid arguments: ${ARGS_UNPARSED_ARGUMENTS};${ARGS_KEYWORDS_MISSING_VALUES}")
    endif()
    if(NOT TARGET "${target}" OR NOT TARGET WaylibShared::qtwaylandscanner)
        message(FATAL_ERROR "Protocol generation requires a target and the WaylibShared scanner")
    endif()
    get_filename_component(_infile "${ARGS_PROTOCOL}" ABSOLUTE)
    if(NOT EXISTS "${_infile}")
        message(FATAL_ERROR "Protocol XML does not exist: ${_infile}")
    endif()

    find_package(PkgConfig REQUIRED)
    pkg_get_variable(_wayland_scanner wayland-scanner wayland_scanner)
    if(NOT _wayland_scanner OR NOT EXISTS "${_wayland_scanner}")
        message(FATAL_ERROR "wayland-scanner is required to generate ${ARGS_BASENAME}")
    endif()
    set(_server_header "${CMAKE_CURRENT_BINARY_DIR}/wayland-${ARGS_BASENAME}-server-protocol.h")
    set(_server_code "${CMAKE_CURRENT_BINARY_DIR}/wayland-${ARGS_BASENAME}-server-protocol.c")
    set(_header "${CMAKE_CURRENT_BINARY_DIR}/qwayland-server-${ARGS_BASENAME}.h")
    set(_code "${CMAKE_CURRENT_BINARY_DIR}/qwayland-server-${ARGS_BASENAME}.cpp")

    add_custom_command(OUTPUT "${_server_header}" "${_server_code}" "${_header}" "${_code}"
        COMMAND "${_wayland_scanner}" server-header "${_infile}" "${_server_header}"
        COMMAND "${_wayland_scanner}" private-code "${_infile}" "${_server_code}"
        COMMAND WaylibShared::qtwaylandscanner server-header "${_infile}" "" "${ARGS_PREFIX}" > "${_header}"
        COMMAND WaylibShared::qtwaylandscanner server-code "${_infile}" "" "${ARGS_PREFIX}" > "${_code}"
        DEPENDS "${_infile}" WaylibShared::qtwaylandscanner
        VERBATIM)
    set_source_files_properties("${_header}" "${_code}" PROPERTIES SKIP_AUTOMOC ON)
    target_sources(${target} PRIVATE "${_server_code}" "${_code}" "${_header}")
    target_include_directories(${target} PRIVATE "${CMAKE_CURRENT_BINARY_DIR}")

    set(_gen_target "generate_protocols_${target}_${ARGS_BASENAME}")
    add_custom_target(${_gen_target} DEPENDS "${_server_header}" "${_server_code}" "${_header}" "${_code}")
    add_dependencies(${target} ${_gen_target})
endfunction()
