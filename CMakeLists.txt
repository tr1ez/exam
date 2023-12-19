cmake_minimum_required(VERSION 3.27)
project(exam)

set(CMAKE_CXX_STANDARD 17)

add_executable(exam main.cpp menu.hpp menu_functions.cpp menu_functions.cpp menu_items.cpp menu_items.hpp)
