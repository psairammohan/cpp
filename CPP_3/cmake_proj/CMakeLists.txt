cmake_minimum_required(VERSION 3.18)
project(cmake_test_project)

message(STATUS "!!!!!!!")
include_directories(${PROJECT_SOURCE_DIR}/src)
add_subdirectory(${PROJECT_SOURCE_DIR}/src)
enable_testing()
add_subdirectory(test)