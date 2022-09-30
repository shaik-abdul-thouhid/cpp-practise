cmake_minimum_required(VERSION 3.24.1 FATAL_ERROR)

project(Alpha VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(${CMAKE_PROJECT_NAME} src/main.cpp)