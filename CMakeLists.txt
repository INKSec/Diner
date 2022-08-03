cmake_minimum_required(VERSION 3.22)
project(Diner)

set(CMAKE_CXX_STANDARD 20)

add_executable(Diner main.cpp Dishes/Kitchen.cpp Dishes/Kitchen.h Dishes/Pizza.cpp Dishes/Pizza.h Dishes/Dishes.cpp Dishes/Dishes.h Dishes/Burger.cpp Dishes/Burger.h)
