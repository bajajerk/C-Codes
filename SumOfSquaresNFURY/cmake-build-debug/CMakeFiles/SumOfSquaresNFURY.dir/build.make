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
CMAKE_SOURCE_DIR = /Users/apurv/Desktop/C++code/SumOfSquaresNFURY

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/apurv/Desktop/C++code/SumOfSquaresNFURY/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SumOfSquaresNFURY.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SumOfSquaresNFURY.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SumOfSquaresNFURY.dir/flags.make

CMakeFiles/SumOfSquaresNFURY.dir/main.cpp.o: CMakeFiles/SumOfSquaresNFURY.dir/flags.make
CMakeFiles/SumOfSquaresNFURY.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/apurv/Desktop/C++code/SumOfSquaresNFURY/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SumOfSquaresNFURY.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SumOfSquaresNFURY.dir/main.cpp.o -c /Users/apurv/Desktop/C++code/SumOfSquaresNFURY/main.cpp

CMakeFiles/SumOfSquaresNFURY.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SumOfSquaresNFURY.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/apurv/Desktop/C++code/SumOfSquaresNFURY/main.cpp > CMakeFiles/SumOfSquaresNFURY.dir/main.cpp.i

CMakeFiles/SumOfSquaresNFURY.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SumOfSquaresNFURY.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/apurv/Desktop/C++code/SumOfSquaresNFURY/main.cpp -o CMakeFiles/SumOfSquaresNFURY.dir/main.cpp.s

CMakeFiles/SumOfSquaresNFURY.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/SumOfSquaresNFURY.dir/main.cpp.o.requires

CMakeFiles/SumOfSquaresNFURY.dir/main.cpp.o.provides: CMakeFiles/SumOfSquaresNFURY.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/SumOfSquaresNFURY.dir/build.make CMakeFiles/SumOfSquaresNFURY.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/SumOfSquaresNFURY.dir/main.cpp.o.provides

CMakeFiles/SumOfSquaresNFURY.dir/main.cpp.o.provides.build: CMakeFiles/SumOfSquaresNFURY.dir/main.cpp.o


# Object files for target SumOfSquaresNFURY
SumOfSquaresNFURY_OBJECTS = \
"CMakeFiles/SumOfSquaresNFURY.dir/main.cpp.o"

# External object files for target SumOfSquaresNFURY
SumOfSquaresNFURY_EXTERNAL_OBJECTS =

SumOfSquaresNFURY: CMakeFiles/SumOfSquaresNFURY.dir/main.cpp.o
SumOfSquaresNFURY: CMakeFiles/SumOfSquaresNFURY.dir/build.make
SumOfSquaresNFURY: CMakeFiles/SumOfSquaresNFURY.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/apurv/Desktop/C++code/SumOfSquaresNFURY/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SumOfSquaresNFURY"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SumOfSquaresNFURY.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SumOfSquaresNFURY.dir/build: SumOfSquaresNFURY

.PHONY : CMakeFiles/SumOfSquaresNFURY.dir/build

CMakeFiles/SumOfSquaresNFURY.dir/requires: CMakeFiles/SumOfSquaresNFURY.dir/main.cpp.o.requires

.PHONY : CMakeFiles/SumOfSquaresNFURY.dir/requires

CMakeFiles/SumOfSquaresNFURY.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SumOfSquaresNFURY.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SumOfSquaresNFURY.dir/clean

CMakeFiles/SumOfSquaresNFURY.dir/depend:
	cd /Users/apurv/Desktop/C++code/SumOfSquaresNFURY/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/apurv/Desktop/C++code/SumOfSquaresNFURY /Users/apurv/Desktop/C++code/SumOfSquaresNFURY /Users/apurv/Desktop/C++code/SumOfSquaresNFURY/cmake-build-debug /Users/apurv/Desktop/C++code/SumOfSquaresNFURY/cmake-build-debug /Users/apurv/Desktop/C++code/SumOfSquaresNFURY/cmake-build-debug/CMakeFiles/SumOfSquaresNFURY.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SumOfSquaresNFURY.dir/depend
