# CMake generated Testfile for 
# Source directory: D:/Game_of_life
# Build directory: D:/Game_of_life/cmake-build-debug
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(my_test "D:/Game_of_life/cmake-build-debug/gtest/cell_automat.exe")
subdirs("gtest")
subdirs("main")
