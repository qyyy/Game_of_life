# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.1.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.1.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Game_of_life

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Game_of_life\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Game_of_life.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Game_of_life.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Game_of_life.dir/flags.make

CMakeFiles/Game_of_life.dir/main.cpp.obj: CMakeFiles/Game_of_life.dir/flags.make
CMakeFiles/Game_of_life.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Game_of_life\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Game_of_life.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Game_of_life.dir\main.cpp.obj -c D:\Game_of_life\main.cpp

CMakeFiles/Game_of_life.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game_of_life.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Game_of_life\main.cpp > CMakeFiles\Game_of_life.dir\main.cpp.i

CMakeFiles/Game_of_life.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game_of_life.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Game_of_life\main.cpp -o CMakeFiles\Game_of_life.dir\main.cpp.s

CMakeFiles/Game_of_life.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/Game_of_life.dir/main.cpp.obj.requires

CMakeFiles/Game_of_life.dir/main.cpp.obj.provides: CMakeFiles/Game_of_life.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\Game_of_life.dir\build.make CMakeFiles/Game_of_life.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/Game_of_life.dir/main.cpp.obj.provides

CMakeFiles/Game_of_life.dir/main.cpp.obj.provides.build: CMakeFiles/Game_of_life.dir/main.cpp.obj


CMakeFiles/Game_of_life.dir/main/Cell_automat.cpp.obj: CMakeFiles/Game_of_life.dir/flags.make
CMakeFiles/Game_of_life.dir/main/Cell_automat.cpp.obj: ../main/Cell_automat.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Game_of_life\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Game_of_life.dir/main/Cell_automat.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Game_of_life.dir\main\Cell_automat.cpp.obj -c D:\Game_of_life\main\Cell_automat.cpp

CMakeFiles/Game_of_life.dir/main/Cell_automat.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game_of_life.dir/main/Cell_automat.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Game_of_life\main\Cell_automat.cpp > CMakeFiles\Game_of_life.dir\main\Cell_automat.cpp.i

CMakeFiles/Game_of_life.dir/main/Cell_automat.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game_of_life.dir/main/Cell_automat.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Game_of_life\main\Cell_automat.cpp -o CMakeFiles\Game_of_life.dir\main\Cell_automat.cpp.s

CMakeFiles/Game_of_life.dir/main/Cell_automat.cpp.obj.requires:

.PHONY : CMakeFiles/Game_of_life.dir/main/Cell_automat.cpp.obj.requires

CMakeFiles/Game_of_life.dir/main/Cell_automat.cpp.obj.provides: CMakeFiles/Game_of_life.dir/main/Cell_automat.cpp.obj.requires
	$(MAKE) -f CMakeFiles\Game_of_life.dir\build.make CMakeFiles/Game_of_life.dir/main/Cell_automat.cpp.obj.provides.build
.PHONY : CMakeFiles/Game_of_life.dir/main/Cell_automat.cpp.obj.provides

CMakeFiles/Game_of_life.dir/main/Cell_automat.cpp.obj.provides.build: CMakeFiles/Game_of_life.dir/main/Cell_automat.cpp.obj


# Object files for target Game_of_life
Game_of_life_OBJECTS = \
"CMakeFiles/Game_of_life.dir/main.cpp.obj" \
"CMakeFiles/Game_of_life.dir/main/Cell_automat.cpp.obj"

# External object files for target Game_of_life
Game_of_life_EXTERNAL_OBJECTS =

Game_of_life.exe: CMakeFiles/Game_of_life.dir/main.cpp.obj
Game_of_life.exe: CMakeFiles/Game_of_life.dir/main/Cell_automat.cpp.obj
Game_of_life.exe: CMakeFiles/Game_of_life.dir/build.make
Game_of_life.exe: CMakeFiles/Game_of_life.dir/linklibs.rsp
Game_of_life.exe: CMakeFiles/Game_of_life.dir/objects1.rsp
Game_of_life.exe: CMakeFiles/Game_of_life.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Game_of_life\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Game_of_life.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Game_of_life.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Game_of_life.dir/build: Game_of_life.exe

.PHONY : CMakeFiles/Game_of_life.dir/build

CMakeFiles/Game_of_life.dir/requires: CMakeFiles/Game_of_life.dir/main.cpp.obj.requires
CMakeFiles/Game_of_life.dir/requires: CMakeFiles/Game_of_life.dir/main/Cell_automat.cpp.obj.requires

.PHONY : CMakeFiles/Game_of_life.dir/requires

CMakeFiles/Game_of_life.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Game_of_life.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Game_of_life.dir/clean

CMakeFiles/Game_of_life.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Game_of_life D:\Game_of_life D:\Game_of_life\cmake-build-debug D:\Game_of_life\cmake-build-debug D:\Game_of_life\cmake-build-debug\CMakeFiles\Game_of_life.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Game_of_life.dir/depend

