find_package(Qt6 REQUIRED COMPONENTS Core Test)

add_executable(test_wlog main.cpp)

target_link_libraries(test_wlog
    PRIVATE
        WaylibShared::SharedServer
        Qt::Core
        Qt::Test
)

add_test(NAME test_wlog COMMAND test_wlog)
