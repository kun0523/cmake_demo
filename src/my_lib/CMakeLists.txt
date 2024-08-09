project(MY_LIB)

add_library(${PROJECT_NAME} SHARED my_lib.cc)
target_include_directories(${PROJECT_NAME} 
                            PUBLIC 
                            .
                            "${CMAKE_BINARY_DIR}/configured_files/include"
                            )
target_link_libraries(${PROJECT_NAME} PUBLIC
    nlohmann_json::nlohmann_json
    fmt::fmt
    spdlog::spdlog
    cxxopts::cxxopts
    Catch2::Catch2
)
