cmake_minimum_required(VERSION 3.7)
project(Game_of_life)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp main/Cell_automat.cpp main/Cell_automat.h)
add_executable(Game_of_life ${SOURCE_FILES})
add_subdirectory(gtest)
add_subdirectory(main)
enable_testing()
add_test(NAME my_test COMMAND cell_automat)