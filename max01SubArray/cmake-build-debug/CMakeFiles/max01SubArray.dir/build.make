# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/apurv/Desktop/C++code/max01SubArray

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/apurv/Desktop/C++code/max01SubArray/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/max01SubArray.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/max01SubArray.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/max01SubArray.dir/flags.make

CMakeFiles/max01SubArray.dir/main.cpp.o: CMakeFiles/max01SubArray.dir/flags.make
CMakeFiles/max01SubArray.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/apurv/Desktop/C++code/max01SubArray/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/max01SubArray.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/max01SubArray.dir/main.cpp.o -c /Users/apurv/Desktop/C++code/max01SubArray/main.cpp

CMakeFiles/max01SubArray.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/max01SubArray.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/apurv/Desktop/C++code/max01SubArray/main.cpp > CMakeFiles/max01SubArray.dir/main.cpp.i

CMakeFiles/max01SubArray.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/max01SubArray.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/apurv/Desktop/C++code/max01SubArray/main.cpp -o CMakeFiles/max01SubArray.dir/main.cpp.s

CMakeFiles/max01SubArray.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/max01SubArray.dir/main.cpp.o.requires

CMakeFiles/max01SubArray.dir/main.cpp.o.provides: CMakeFiles/max01SubArray.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/max01SubArray.dir/build.make CMakeFiles/max01SubArray.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/max01SubArray.dir/main.cpp.o.provides

CMakeFiles/max01SubArray.dir/main.cpp.o.provides.build: CMakeFiles/max01SubArray.dir/main.cpp.o


# Object files for target max01SubArray
max01SubArray_OBJECTS = \
"CMakeFiles/max01SubArray.dir/main.cpp.o"

# External object files for target max01SubArray
max01SubArray_EXTERNAL_OBJECTS =

max01SubArray: CMakeFiles/max01SubArray.dir/main.cpp.o
max01SubArray: CMakeFiles/max01SubArray.dir/build.make
max01SubArray: CMakeFiles/max01SubArray.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/apurv/Desktop/C++code/max01SubArray/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable max01SubArray"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/max01SubArray.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/max01SubArray.dir/build: max01SubArray

.PHONY : CMakeFiles/max01SubArray.dir/build

CMakeFiles/max01SubArray.dir/requires: CMakeFiles/max01SubArray.dir/main.cpp.o.requires

.PHONY : CMakeFiles/max01SubArray.dir/requires

CMakeFiles/max01SubArray.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/max01SubArray.dir/cmake_clean.cmake
.PHONY : CMakeFiles/max01SubArray.dir/clean

CMakeFiles/max01SubArray.dir/depend:
	cd /Users/apurv/Desktop/C++code/max01SubArray/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/apurv/Desktop/C++code/max01SubArray /Users/apurv/Desktop/C++code/max01SubArray /Users/apurv/Desktop/C++code/max01SubArray/cmake-build-debug /Users/apurv/Desktop/C++code/max01SubArray/cmake-build-debug /Users/apurv/Desktop/C++code/max01SubArray/cmake-build-debug/CMakeFiles/max01SubArray.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/max01SubArray.dir/depend

