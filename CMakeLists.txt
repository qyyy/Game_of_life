cmake_minimum_required(VERSION 3.7)
project(Game_of_life)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Cell_automata.h Cell_automat.cpp Cell_automat.h)
add_executable(Game_of_life ${SOURCE_FILES})