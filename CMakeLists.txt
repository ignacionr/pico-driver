cmake_minimum_required(VERSION 3.18)

message(STATUS "Including CMake from: ${PICO_CMAKE_INCLUDE}")
include(pico_sdk_import.cmake)

project(BaseTest)

set(CMAKE_CXX_STANDARD 20)

pico_sdk_init()

add_executable(test
    src/main.cpp
    )

target_link_libraries(test pico_stdlib)

pico_add_extra_outputs(test)
