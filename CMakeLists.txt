cmake_minimum_required(VERSION 3.10)

project(Catch2Template LANGUAGES CXX VERSION 0.0.1)

find_package(Catch2 REQUIRED)

include_directories(include)

add_subdirectory(src)
add_subdirectory(tests)

# file(GLOB SOURCES "*.cpp")
