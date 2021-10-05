cmake_minimum_required(VERSION 3.0.0)
project(task_d VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wpedantic")
# -Werror -pedantic-errors 

add_executable(task_d main.cpp)

