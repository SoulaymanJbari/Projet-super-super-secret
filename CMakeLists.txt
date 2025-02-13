cmake_minimum_required(VERSION 3.10)
project(Projet_SUPER_SUPER_SecreT)

include_directories(include)

file(GLOB_RECURSE SOURCES "src/*.cpp")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

add_executable(Test ${SOURCES})