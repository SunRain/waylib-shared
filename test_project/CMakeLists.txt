cmake_minimum_required(VERSION 3.21)
project(WaylibSharedMinimalConsumer LANGUAGES C CXX)

# 公共头使用 C++20；仅主 target 的使用要求可以提升这个 C++17 消费者。
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 核心开发包不应要求下游安装 Qt Quick Controls 2。
set(CMAKE_DISABLE_FIND_PACKAGE_Qt6QuickControls2 TRUE)
find_package(WaylibShared 0.7.0 EXACT REQUIRED COMPONENTS SharedServer)
find_package(Qt6 REQUIRED COMPONENTS Core Gui Qml Quick)
find_package(PkgConfig REQUIRED)

add_executable(waylibshared_minimal_consumer main.cpp)
target_link_libraries(waylibshared_minimal_consumer PRIVATE WaylibShared::SharedServer)

include(cmake/PkgConfigConsumer.cmake)

add_executable(waylibshared_native_consumer native_test.c)
target_link_libraries(waylibshared_native_consumer PRIVATE WaylibShared::waylib-wlroots)

# 不链接 Waylib，也不编入默认 import root，避免绕过已安装的 QML plugin。
add_executable(waylibshared_qml_consumer qml_test.cpp)
target_link_libraries(waylibshared_qml_consumer PRIVATE Qt6::Gui Qt6::Qml Qt6::Quick)

pkg_check_modules(TEST_WAYLAND_SERVER REQUIRED IMPORTED_TARGET wayland-server)
add_executable(waylibshared_protocol_consumer protocol_test.cpp)
target_link_libraries(waylibshared_protocol_consumer
    PRIVATE Qt6::Core PkgConfig::TEST_WAYLAND_SERVER)
waylib_generate_qtwayland_server_protocol(waylibshared_protocol_consumer
    PROTOCOL "${WaylibShared_WLROOTS_PROTOCOLS_DIR}/virtual-keyboard-unstable-v1.xml"
    BASENAME virtual-keyboard-unstable-v1
    PREFIX zwp_
    PRIVATE_CODE)

include(CTest)
if(BUILD_TESTING)
    # 清理发生在启动前；在 main() 中 unset 已无法阻止 loader 预加载旧库。
    function(waylibshared_add_runtime_test name target)
        add_test(NAME "${name}" COMMAND "${CMAKE_COMMAND}" -E env
            --unset=LD_LIBRARY_PATH --unset=LD_PRELOAD --unset=LD_AUDIT
            --unset=QML_IMPORT_PATH --unset=QML2_IMPORT_PATH
            --unset=QT_PLUGIN_PATH --unset=QT_QPA_PLATFORM_PLUGIN_PATH
            ${ARGN} "$<TARGET_FILE:${target}>")
        set_tests_properties("${name}" PROPERTIES TIMEOUT 15)
    endfunction()

    waylibshared_add_runtime_test(waylibshared_link_test waylibshared_minimal_consumer)
    waylibshared_add_runtime_test(waylibshared_pkgconfig_link_test
        waylibshared_pkgconfig_consumer)
    waylibshared_add_runtime_test(waylibshared_native_link_test waylibshared_native_consumer)
    waylibshared_add_runtime_test(waylibshared_protocol_generation_test
        waylibshared_protocol_consumer)
    waylibshared_add_runtime_test(waylibshared_qml_import_test waylibshared_qml_consumer
        "QT_QPA_PLATFORM=offscreen" "QML_IMPORT_PATH=${WaylibShared_QML_IMPORT_DIR}")
    include(cmake/VersionTests.cmake)
endif()
