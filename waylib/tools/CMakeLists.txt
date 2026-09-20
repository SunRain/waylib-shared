project(qtwaylandscanner_waylib CXX)

if (PROJECT_IS_TOP_LEVEL)
    cmake_minimum_required(VERSION 3.16)
    set(CMAKE_CXX_STANDARD 20)
    find_package(Qt6 CONFIG REQUIRED Core)
endif()

if(CMAKE_CROSSCOMPILING AND QTWAYLANDSCANNER_EXECUTABLE)
    add_executable(qtwaylandscanner_waylib IMPORTED GLOBAL)
    set_target_properties(qtwaylandscanner_waylib PROPERTIES IMPORTED_LOCATION ${QTWAYLANDSCANNER_EXECUTABLE})
elseif(CMAKE_CROSSCOMPILING)
    # search native tooling prefix
    set(NATIVE_PREFIX "" CACHE STRING "CMAKE_PREFIX_PATH for native Qt libraries")

    message(STATUS "Building qtwaylandscanner_waylib against ${NATIVE_PREFIX}")

    include(ExternalProject)
    ExternalProject_Add(native_qtwaylandscanner_waylib
            SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}
            CMAKE_ARGS -DECM_DIR=${ECM_DIR} -DCMAKE_PREFIX_PATH=${NATIVE_PREFIX}
            -DCMAKE_INSTALL_PREFIX=${CMAKE_CURRENT_BINARY_DIR}
            -DQT_MAJOR_VERSION=${QT_MAJOR_VERSION}
            INSTALL_COMMAND ""
            BUILD_BYPRODUCTS ${CMAKE_CURRENT_BINARY_DIR}/native_qtwaylandscanner_waylib-prefix/src/native_qtwaylandscanner_waylib-build/qtwaylandscanner_waylib
            )
    add_executable(qtwaylandscanner_waylib IMPORTED GLOBAL)
    add_dependencies(qtwaylandscanner_waylib native_qtwaylandscanner_waylib)
    set_target_properties(qtwaylandscanner_waylib PROPERTIES IMPORTED_LOCATION
            ${CMAKE_CURRENT_BINARY_DIR}/native_qtwaylandscanner_waylib-prefix/src/native_qtwaylandscanner_waylib-build/qtwaylandscanner_waylib)
else()
    # host build
    remove_definitions(-DQT_NO_CAST_FROM_ASCII)
    add_executable(qtwaylandscanner_waylib ${CMAKE_CURRENT_SOURCE_DIR}/qtwaylandscanner.cpp)
    target_link_libraries(qtwaylandscanner_waylib Qt6::Core)
endif()

add_executable(WaylibShared::qtwaylandscanner ALIAS qtwaylandscanner_waylib)
include("${CMAKE_CURRENT_LIST_DIR}/../cmake/WaylibProtocolHelpers.cmake")

if(WAYLIB_INSTALL_ENABLED AND TREELAND_INSTALL_DEV AND NOT CMAKE_CROSSCOMPILING)
    set_target_properties(qtwaylandscanner_waylib PROPERTIES EXPORT_NAME qtwaylandscanner)
    install(TARGETS qtwaylandscanner_waylib EXPORT WaylibSharedServerTargets
            RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}" COMPONENT Development)
    install(FILES "${CMAKE_CURRENT_LIST_DIR}/../cmake/WaylibProtocolHelpers.cmake"
            DESTINATION "${WAYLIB_CMAKE_INSTALL_DIR}" COMPONENT Development)
endif()
