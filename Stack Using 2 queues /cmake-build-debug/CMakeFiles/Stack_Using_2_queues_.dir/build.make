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
CMAKE_SOURCE_DIR = "/Users/apurv/Desktop/C++code/Stack Using 2 queues "

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/apurv/Desktop/C++code/Stack Using 2 queues /cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Stack_Using_2_queues_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Stack_Using_2_queues_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Stack_Using_2_queues_.dir/flags.make

CMakeFiles/Stack_Using_2_queues_.dir/main.cpp.o: CMakeFiles/Stack_Using_2_queues_.dir/flags.make
CMakeFiles/Stack_Using_2_queues_.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/apurv/Desktop/C++code/Stack Using 2 queues /cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Stack_Using_2_queues_.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Stack_Using_2_queues_.dir/main.cpp.o -c "/Users/apurv/Desktop/C++code/Stack Using 2 queues /main.cpp"

CMakeFiles/Stack_Using_2_queues_.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Stack_Using_2_queues_.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/apurv/Desktop/C++code/Stack Using 2 queues /main.cpp" > CMakeFiles/Stack_Using_2_queues_.dir/main.cpp.i

CMakeFiles/Stack_Using_2_queues_.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Stack_Using_2_queues_.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/apurv/Desktop/C++code/Stack Using 2 queues /main.cpp" -o CMakeFiles/Stack_Using_2_queues_.dir/main.cpp.s

CMakeFiles/Stack_Using_2_queues_.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Stack_Using_2_queues_.dir/main.cpp.o.requires

CMakeFiles/Stack_Using_2_queues_.dir/main.cpp.o.provides: CMakeFiles/Stack_Using_2_queues_.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Stack_Using_2_queues_.dir/build.make CMakeFiles/Stack_Using_2_queues_.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Stack_Using_2_queues_.dir/main.cpp.o.provides

CMakeFiles/Stack_Using_2_queues_.dir/main.cpp.o.provides.build: CMakeFiles/Stack_Using_2_queues_.dir/main.cpp.o


# Object files for target Stack_Using_2_queues_
Stack_Using_2_queues__OBJECTS = \
"CMakeFiles/Stack_Using_2_queues_.dir/main.cpp.o"

# External object files for target Stack_Using_2_queues_
Stack_Using_2_queues__EXTERNAL_OBJECTS =

Stack_Using_2_queues_: CMakeFiles/Stack_Using_2_queues_.dir/main.cpp.o
Stack_Using_2_queues_: CMakeFiles/Stack_Using_2_queues_.dir/build.make
Stack_Using_2_queues_: CMakeFiles/Stack_Using_2_queues_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/apurv/Desktop/C++code/Stack Using 2 queues /cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Stack_Using_2_queues_"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Stack_Using_2_queues_.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Stack_Using_2_queues_.dir/build: Stack_Using_2_queues_

.PHONY : CMakeFiles/Stack_Using_2_queues_.dir/build

CMakeFiles/Stack_Using_2_queues_.dir/requires: CMakeFiles/Stack_Using_2_queues_.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Stack_Using_2_queues_.dir/requires

CMakeFiles/Stack_Using_2_queues_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Stack_Using_2_queues_.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Stack_Using_2_queues_.dir/clean

CMakeFiles/Stack_Using_2_queues_.dir/depend:
	cd "/Users/apurv/Desktop/C++code/Stack Using 2 queues /cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/apurv/Desktop/C++code/Stack Using 2 queues " "/Users/apurv/Desktop/C++code/Stack Using 2 queues " "/Users/apurv/Desktop/C++code/Stack Using 2 queues /cmake-build-debug" "/Users/apurv/Desktop/C++code/Stack Using 2 queues /cmake-build-debug" "/Users/apurv/Desktop/C++code/Stack Using 2 queues /cmake-build-debug/CMakeFiles/Stack_Using_2_queues_.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Stack_Using_2_queues_.dir/depend

