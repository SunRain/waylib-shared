# 为共享库生成可搬迁的 pkg-config 元数据；include_dir 是真实安装目录。
function(add_pkgconfig_module name library include_dir depends)
    waylib_pkgconfig_path(WAYLIB_PC_INCLUDEDIR "${include_dir}")
    configure_file(${CMAKE_CURRENT_FUNCTION_LIST_DIR}/../src/cmake/pkgconfig.pc.in
        ${CMAKE_CURRENT_BINARY_DIR}/${name}.pc
        @ONLY
    )
    install(FILES
        ${CMAKE_CURRENT_BINARY_DIR}/${name}.pc
        DESTINATION ${WAYLIB_PKGCONFIG_INSTALL_DIR}
    )
endfunction()
