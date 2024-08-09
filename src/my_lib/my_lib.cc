#include <iostream>

#include "my_lib.h"
#include "config.hpp"
#include <nlohmann/json.hpp>
#include <fmt/format.h>
#include <spdlog/logger.h>
#include <cxxopts.hpp>
#include <catch2/catch_all.hpp>

/**
 * @brief Prints out Hello World and test json library.
*/
void print_hello_world()
{
    std::cout << "Used JSON Version:" << 
    NLOHMANN_JSON_VERSION_MAJOR << "." <<
    NLOHMANN_JSON_VERSION_MINOR << "." << 
    NLOHMANN_JSON_VERSION_PATCH << std::endl;
    nlohmann::json j{"name", "xiaowang"};
    std::cout << j << std::endl;

    std::cout << "Used FMT Version:" << FMT_VERSION << std::endl;

    std::cout << "Used CXXOPTS Version: " << 
    CXXOPTS__VERSION_MAJOR << "." << 
    CXXOPTS__VERSION_MINOR << "." <<
    CXXOPTS__VERSION_PATCH << "\n";

    std::cout << "Used SPDLOG version: " << SPDLOG_API::project_version << std::endl;


    std::cout << "Project Version: " << project_version << std::endl;
    std::cout << "Hello What a Beautiful World!" << std::endl;
}
