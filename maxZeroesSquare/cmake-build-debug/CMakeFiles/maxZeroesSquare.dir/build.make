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
CMAKE_SOURCE_DIR = /Users/apurv/Desktop/C++code/maxZeroesSquare

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/apurv/Desktop/C++code/maxZeroesSquare/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/maxZeroesSquare.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/maxZeroesSquare.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/maxZeroesSquare.dir/flags.make

CMakeFiles/maxZeroesSquare.dir/main.cpp.o: CMakeFiles/maxZeroesSquare.dir/flags.make
CMakeFiles/maxZeroesSquare.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/apurv/Desktop/C++code/maxZeroesSquare/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/maxZeroesSquare.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/maxZeroesSquare.dir/main.cpp.o -c /Users/apurv/Desktop/C++code/maxZeroesSquare/main.cpp

CMakeFiles/maxZeroesSquare.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/maxZeroesSquare.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/apurv/Desktop/C++code/maxZeroesSquare/main.cpp > CMakeFiles/maxZeroesSquare.dir/main.cpp.i

CMakeFiles/maxZeroesSquare.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/maxZeroesSquare.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/apurv/Desktop/C++code/maxZeroesSquare/main.cpp -o CMakeFiles/maxZeroesSquare.dir/main.cpp.s

CMakeFiles/maxZeroesSquare.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/maxZeroesSquare.dir/main.cpp.o.requires

CMakeFiles/maxZeroesSquare.dir/main.cpp.o.provides: CMakeFiles/maxZeroesSquare.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/maxZeroesSquare.dir/build.make CMakeFiles/maxZeroesSquare.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/maxZeroesSquare.dir/main.cpp.o.provides

CMakeFiles/maxZeroesSquare.dir/main.cpp.o.provides.build: CMakeFiles/maxZeroesSquare.dir/main.cpp.o


# Object files for target maxZeroesSquare
maxZeroesSquare_OBJECTS = \
"CMakeFiles/maxZeroesSquare.dir/main.cpp.o"

# External object files for target maxZeroesSquare
maxZeroesSquare_EXTERNAL_OBJECTS =

maxZeroesSquare: CMakeFiles/maxZeroesSquare.dir/main.cpp.o
maxZeroesSquare: CMakeFiles/maxZeroesSquare.dir/build.make
maxZeroesSquare: CMakeFiles/maxZeroesSquare.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/apurv/Desktop/C++code/maxZeroesSquare/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable maxZeroesSquare"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/maxZeroesSquare.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/maxZeroesSquare.dir/build: maxZeroesSquare

.PHONY : CMakeFiles/maxZeroesSquare.dir/build

CMakeFiles/maxZeroesSquare.dir/requires: CMakeFiles/maxZeroesSquare.dir/main.cpp.o.requires

.PHONY : CMakeFiles/maxZeroesSquare.dir/requires

CMakeFiles/maxZeroesSquare.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/maxZeroesSquare.dir/cmake_clean.cmake
.PHONY : CMakeFiles/maxZeroesSquare.dir/clean

CMakeFiles/maxZeroesSquare.dir/depend:
	cd /Users/apurv/Desktop/C++code/maxZeroesSquare/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/apurv/Desktop/C++code/maxZeroesSquare /Users/apurv/Desktop/C++code/maxZeroesSquare /Users/apurv/Desktop/C++code/maxZeroesSquare/cmake-build-debug /Users/apurv/Desktop/C++code/maxZeroesSquare/cmake-build-debug /Users/apurv/Desktop/C++code/maxZeroesSquare/cmake-build-debug/CMakeFiles/maxZeroesSquare.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/maxZeroesSquare.dir/depend
