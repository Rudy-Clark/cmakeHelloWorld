cmake_minimum_required(VERSION "3.19.2")

project(CMakeHelloWorld VERSION 1.2)
add_executable(CMakeHelloWorld "main.cpp")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
configure_file(cmakeConfig.h.in cmakeConfig.h)
target_include_directories(CMakeHelloWorld PUBLIC "${PROJECT_BINARY_DIR}")