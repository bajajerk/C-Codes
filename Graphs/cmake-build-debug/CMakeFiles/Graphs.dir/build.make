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
CMAKE_SOURCE_DIR = /Users/apurv/Desktop/C++code/Graphs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/apurv/Desktop/C++code/Graphs/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Graphs.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Graphs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Graphs.dir/flags.make

CMakeFiles/Graphs.dir/main.cpp.o: CMakeFiles/Graphs.dir/flags.make
CMakeFiles/Graphs.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/apurv/Desktop/C++code/Graphs/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Graphs.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Graphs.dir/main.cpp.o -c /Users/apurv/Desktop/C++code/Graphs/main.cpp

CMakeFiles/Graphs.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Graphs.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/apurv/Desktop/C++code/Graphs/main.cpp > CMakeFiles/Graphs.dir/main.cpp.i

CMakeFiles/Graphs.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Graphs.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/apurv/Desktop/C++code/Graphs/main.cpp -o CMakeFiles/Graphs.dir/main.cpp.s

CMakeFiles/Graphs.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Graphs.dir/main.cpp.o.requires

CMakeFiles/Graphs.dir/main.cpp.o.provides: CMakeFiles/Graphs.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Graphs.dir/build.make CMakeFiles/Graphs.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Graphs.dir/main.cpp.o.provides

CMakeFiles/Graphs.dir/main.cpp.o.provides.build: CMakeFiles/Graphs.dir/main.cpp.o


# Object files for target Graphs
Graphs_OBJECTS = \
"CMakeFiles/Graphs.dir/main.cpp.o"

# External object files for target Graphs
Graphs_EXTERNAL_OBJECTS =

Graphs: CMakeFiles/Graphs.dir/main.cpp.o
Graphs: CMakeFiles/Graphs.dir/build.make
Graphs: CMakeFiles/Graphs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/apurv/Desktop/C++code/Graphs/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Graphs"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Graphs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Graphs.dir/build: Graphs

.PHONY : CMakeFiles/Graphs.dir/build

CMakeFiles/Graphs.dir/requires: CMakeFiles/Graphs.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Graphs.dir/requires

CMakeFiles/Graphs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Graphs.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Graphs.dir/clean

CMakeFiles/Graphs.dir/depend:
	cd /Users/apurv/Desktop/C++code/Graphs/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/apurv/Desktop/C++code/Graphs /Users/apurv/Desktop/C++code/Graphs /Users/apurv/Desktop/C++code/Graphs/cmake-build-debug /Users/apurv/Desktop/C++code/Graphs/cmake-build-debug /Users/apurv/Desktop/C++code/Graphs/cmake-build-debug/CMakeFiles/Graphs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Graphs.dir/depend

