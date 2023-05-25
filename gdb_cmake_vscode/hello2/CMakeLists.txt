cmake_minimum_required(VERSION 3.0)

project(SWAP)

include_directories(include)

set(CMAKE_BUILD_TYPE Debug)

add_executable(main_cmake main.c src/swap.c)