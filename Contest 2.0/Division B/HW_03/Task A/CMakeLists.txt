cmake_minimum_required(VERSION 3.0.0)
project(task_a VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "-Werror -pedantic-errors -Wall -Wextra -Wpedantic")

add_executable(task_a main.cpp)

