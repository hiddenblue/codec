cmake_minimum_required(VERSION 3.0)

project(INVENTORY2_LINKED_LIST)

set(CMAKE_BUILD_TYPE DEBUG)

include_directories(./include)

add_executable(main main.c ./src/inventory.c ./src/read_line.c)