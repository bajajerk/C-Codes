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
CMAKE_SOURCE_DIR = /Users/apurv/Desktop/C++code/PairSumToZero

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/apurv/Desktop/C++code/PairSumToZero/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PairSumToZero.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PairSumToZero.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PairSumToZero.dir/flags.make

CMakeFiles/PairSumToZero.dir/main.cpp.o: CMakeFiles/PairSumToZero.dir/flags.make
CMakeFiles/PairSumToZero.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/apurv/Desktop/C++code/PairSumToZero/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PairSumToZero.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PairSumToZero.dir/main.cpp.o -c /Users/apurv/Desktop/C++code/PairSumToZero/main.cpp

CMakeFiles/PairSumToZero.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PairSumToZero.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/apurv/Desktop/C++code/PairSumToZero/main.cpp > CMakeFiles/PairSumToZero.dir/main.cpp.i

CMakeFiles/PairSumToZero.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PairSumToZero.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/apurv/Desktop/C++code/PairSumToZero/main.cpp -o CMakeFiles/PairSumToZero.dir/main.cpp.s

CMakeFiles/PairSumToZero.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/PairSumToZero.dir/main.cpp.o.requires

CMakeFiles/PairSumToZero.dir/main.cpp.o.provides: CMakeFiles/PairSumToZero.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/PairSumToZero.dir/build.make CMakeFiles/PairSumToZero.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/PairSumToZero.dir/main.cpp.o.provides

CMakeFiles/PairSumToZero.dir/main.cpp.o.provides.build: CMakeFiles/PairSumToZero.dir/main.cpp.o


# Object files for target PairSumToZero
PairSumToZero_OBJECTS = \
"CMakeFiles/PairSumToZero.dir/main.cpp.o"

# External object files for target PairSumToZero
PairSumToZero_EXTERNAL_OBJECTS =

PairSumToZero: CMakeFiles/PairSumToZero.dir/main.cpp.o
PairSumToZero: CMakeFiles/PairSumToZero.dir/build.make
PairSumToZero: CMakeFiles/PairSumToZero.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/apurv/Desktop/C++code/PairSumToZero/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PairSumToZero"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PairSumToZero.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PairSumToZero.dir/build: PairSumToZero

.PHONY : CMakeFiles/PairSumToZero.dir/build

CMakeFiles/PairSumToZero.dir/requires: CMakeFiles/PairSumToZero.dir/main.cpp.o.requires

.PHONY : CMakeFiles/PairSumToZero.dir/requires

CMakeFiles/PairSumToZero.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PairSumToZero.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PairSumToZero.dir/clean

CMakeFiles/PairSumToZero.dir/depend:
	cd /Users/apurv/Desktop/C++code/PairSumToZero/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/apurv/Desktop/C++code/PairSumToZero /Users/apurv/Desktop/C++code/PairSumToZero /Users/apurv/Desktop/C++code/PairSumToZero/cmake-build-debug /Users/apurv/Desktop/C++code/PairSumToZero/cmake-build-debug /Users/apurv/Desktop/C++code/PairSumToZero/cmake-build-debug/CMakeFiles/PairSumToZero.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PairSumToZero.dir/depend

