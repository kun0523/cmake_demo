project(MY_EXE)

add_executable(${PROJECT_NAME} main.cc)
# target_include_directories(${PROJECT_NAME} PUBLIC ../src)
target_link_libraries(
    ${PROJECT_NAME} 
    PUBLIC 
    MY_LIB
    nlohmann_json
    )