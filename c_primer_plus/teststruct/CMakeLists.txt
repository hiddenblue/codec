cmake_minimum_required(VERSION 3.10)

project(TestStruct)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O2 -Wall")

include_directories(include)

add_executable(my_cmake_exe main.c ./src/structdef.c)