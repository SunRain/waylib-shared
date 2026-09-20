set(CMAKE_INCLUDE_CURRENT_DIR ON)

if(WAYLIB_INSTALL_ENABLED AND TREELAND_INSTALL_DEV)
    include(CMakePackageConfigHelpers)

    # 配置主包配置文件
    configure_package_config_file(
        "${CMAKE_CURRENT_SOURCE_DIR}/cmake/WaylibConfig.cmake.in"
        "${CMAKE_CURRENT_BINARY_DIR}/WaylibSharedConfig.cmake"
        INSTALL_DESTINATION ${WAYLIB_CMAKE_INSTALL_DIR}
    )

    # 创建版本文件
    write_basic_package_version_file(
        "${CMAKE_CURRENT_BINARY_DIR}/WaylibSharedConfigVersion.cmake"
        VERSION ${WAYLIB_VERSION}
        COMPATIBILITY SameMinorVersion
    )

    # 注意：WaylibTargets将在server子目录中定义

    # 安装配置文件
    install(FILES
        ${CMAKE_CURRENT_BINARY_DIR}/WaylibSharedConfig.cmake
        ${CMAKE_CURRENT_BINARY_DIR}/WaylibSharedConfigVersion.cmake
        DESTINATION ${WAYLIB_CMAKE_INSTALL_DIR}
    )

    # 注意：WaylibTargets将在server子目录中定义
endif()

add_subdirectory(server)
