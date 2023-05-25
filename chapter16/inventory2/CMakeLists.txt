cmake_minimum_required(VERSION 3.0)

project(INVENTROY2)

set(CMAKE_BUILD_TYPE Debug)

include_directories(include)

add_executable(inventory main.c ./src/inventory.c src/read_line.c)

