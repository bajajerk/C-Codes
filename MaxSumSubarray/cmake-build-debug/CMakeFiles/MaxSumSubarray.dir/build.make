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
CMAKE_SOURCE_DIR = /Users/apurv/Desktop/C++code/MaxSumSubarray

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/apurv/Desktop/C++code/MaxSumSubarray/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MaxSumSubarray.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MaxSumSubarray.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MaxSumSubarray.dir/flags.make

CMakeFiles/MaxSumSubarray.dir/main.cpp.o: CMakeFiles/MaxSumSubarray.dir/flags.make
CMakeFiles/MaxSumSubarray.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/apurv/Desktop/C++code/MaxSumSubarray/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MaxSumSubarray.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MaxSumSubarray.dir/main.cpp.o -c /Users/apurv/Desktop/C++code/MaxSumSubarray/main.cpp

CMakeFiles/MaxSumSubarray.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MaxSumSubarray.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/apurv/Desktop/C++code/MaxSumSubarray/main.cpp > CMakeFiles/MaxSumSubarray.dir/main.cpp.i

CMakeFiles/MaxSumSubarray.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MaxSumSubarray.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/apurv/Desktop/C++code/MaxSumSubarray/main.cpp -o CMakeFiles/MaxSumSubarray.dir/main.cpp.s

CMakeFiles/MaxSumSubarray.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/MaxSumSubarray.dir/main.cpp.o.requires

CMakeFiles/MaxSumSubarray.dir/main.cpp.o.provides: CMakeFiles/MaxSumSubarray.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/MaxSumSubarray.dir/build.make CMakeFiles/MaxSumSubarray.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/MaxSumSubarray.dir/main.cpp.o.provides

CMakeFiles/MaxSumSubarray.dir/main.cpp.o.provides.build: CMakeFiles/MaxSumSubarray.dir/main.cpp.o


# Object files for target MaxSumSubarray
MaxSumSubarray_OBJECTS = \
"CMakeFiles/MaxSumSubarray.dir/main.cpp.o"

# External object files for target MaxSumSubarray
MaxSumSubarray_EXTERNAL_OBJECTS =

MaxSumSubarray: CMakeFiles/MaxSumSubarray.dir/main.cpp.o
MaxSumSubarray: CMakeFiles/MaxSumSubarray.dir/build.make
MaxSumSubarray: CMakeFiles/MaxSumSubarray.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/apurv/Desktop/C++code/MaxSumSubarray/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MaxSumSubarray"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MaxSumSubarray.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MaxSumSubarray.dir/build: MaxSumSubarray

.PHONY : CMakeFiles/MaxSumSubarray.dir/build

CMakeFiles/MaxSumSubarray.dir/requires: CMakeFiles/MaxSumSubarray.dir/main.cpp.o.requires

.PHONY : CMakeFiles/MaxSumSubarray.dir/requires

CMakeFiles/MaxSumSubarray.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MaxSumSubarray.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MaxSumSubarray.dir/clean

CMakeFiles/MaxSumSubarray.dir/depend:
	cd /Users/apurv/Desktop/C++code/MaxSumSubarray/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/apurv/Desktop/C++code/MaxSumSubarray /Users/apurv/Desktop/C++code/MaxSumSubarray /Users/apurv/Desktop/C++code/MaxSumSubarray/cmake-build-debug /Users/apurv/Desktop/C++code/MaxSumSubarray/cmake-build-debug /Users/apurv/Desktop/C++code/MaxSumSubarray/cmake-build-debug/CMakeFiles/MaxSumSubarray.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MaxSumSubarray.dir/depend
