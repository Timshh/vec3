cmake_minimum_required(VERSION 3.11)
project(Vector3)

add_library(Vector3 INTERFACE)

target_include_directories(Vector3 INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)