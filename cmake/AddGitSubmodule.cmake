function(add_git_submodule dir)
    find_package(Git REQUIRED)
    
    if (EXISTS ${CMAKE_SOURCE_DIR}/${dir}/CMakeLists.txt)
        message(STATUS "Found Package CMakeLists.txt ${CMAKE_SOURCE_DIR}/${dir}")
        add_subdirectory(${dir})
    else()
        message(WARNING "Not Found CMakeLists.txt ${CMAKE_SOURCE_DIR}/${dir}")
    endif()
    
endfunction(add_git_submodule)
