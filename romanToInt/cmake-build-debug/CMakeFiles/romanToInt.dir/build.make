# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mayankbajaj/Desktop/C-Codes/romanToInt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mayankbajaj/Desktop/C-Codes/romanToInt/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/romanToInt.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/romanToInt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/romanToInt.dir/flags.make

CMakeFiles/romanToInt.dir/main.cpp.o: CMakeFiles/romanToInt.dir/flags.make
CMakeFiles/romanToInt.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mayankbajaj/Desktop/C-Codes/romanToInt/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/romanToInt.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/romanToInt.dir/main.cpp.o -c /Users/mayankbajaj/Desktop/C-Codes/romanToInt/main.cpp

CMakeFiles/romanToInt.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/romanToInt.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mayankbajaj/Desktop/C-Codes/romanToInt/main.cpp > CMakeFiles/romanToInt.dir/main.cpp.i

CMakeFiles/romanToInt.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/romanToInt.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mayankbajaj/Desktop/C-Codes/romanToInt/main.cpp -o CMakeFiles/romanToInt.dir/main.cpp.s

# Object files for target romanToInt
romanToInt_OBJECTS = \
"CMakeFiles/romanToInt.dir/main.cpp.o"

# External object files for target romanToInt
romanToInt_EXTERNAL_OBJECTS =

romanToInt: CMakeFiles/romanToInt.dir/main.cpp.o
romanToInt: CMakeFiles/romanToInt.dir/build.make
romanToInt: CMakeFiles/romanToInt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mayankbajaj/Desktop/C-Codes/romanToInt/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable romanToInt"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/romanToInt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/romanToInt.dir/build: romanToInt

.PHONY : CMakeFiles/romanToInt.dir/build

CMakeFiles/romanToInt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/romanToInt.dir/cmake_clean.cmake
.PHONY : CMakeFiles/romanToInt.dir/clean

CMakeFiles/romanToInt.dir/depend:
	cd /Users/mayankbajaj/Desktop/C-Codes/romanToInt/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mayankbajaj/Desktop/C-Codes/romanToInt /Users/mayankbajaj/Desktop/C-Codes/romanToInt /Users/mayankbajaj/Desktop/C-Codes/romanToInt/cmake-build-debug /Users/mayankbajaj/Desktop/C-Codes/romanToInt/cmake-build-debug /Users/mayankbajaj/Desktop/C-Codes/romanToInt/cmake-build-debug/CMakeFiles/romanToInt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/romanToInt.dir/depend
