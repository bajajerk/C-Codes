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
CMAKE_SOURCE_DIR = /Users/apurv/Desktop/C++code/printPatterns

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/apurv/Desktop/C++code/printPatterns/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/printPatterns.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/printPatterns.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/printPatterns.dir/flags.make

CMakeFiles/printPatterns.dir/main.cpp.o: CMakeFiles/printPatterns.dir/flags.make
CMakeFiles/printPatterns.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/apurv/Desktop/C++code/printPatterns/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/printPatterns.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/printPatterns.dir/main.cpp.o -c /Users/apurv/Desktop/C++code/printPatterns/main.cpp

CMakeFiles/printPatterns.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/printPatterns.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/apurv/Desktop/C++code/printPatterns/main.cpp > CMakeFiles/printPatterns.dir/main.cpp.i

CMakeFiles/printPatterns.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/printPatterns.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/apurv/Desktop/C++code/printPatterns/main.cpp -o CMakeFiles/printPatterns.dir/main.cpp.s

CMakeFiles/printPatterns.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/printPatterns.dir/main.cpp.o.requires

CMakeFiles/printPatterns.dir/main.cpp.o.provides: CMakeFiles/printPatterns.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/printPatterns.dir/build.make CMakeFiles/printPatterns.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/printPatterns.dir/main.cpp.o.provides

CMakeFiles/printPatterns.dir/main.cpp.o.provides.build: CMakeFiles/printPatterns.dir/main.cpp.o


# Object files for target printPatterns
printPatterns_OBJECTS = \
"CMakeFiles/printPatterns.dir/main.cpp.o"

# External object files for target printPatterns
printPatterns_EXTERNAL_OBJECTS =

printPatterns: CMakeFiles/printPatterns.dir/main.cpp.o
printPatterns: CMakeFiles/printPatterns.dir/build.make
printPatterns: CMakeFiles/printPatterns.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/apurv/Desktop/C++code/printPatterns/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable printPatterns"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/printPatterns.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/printPatterns.dir/build: printPatterns

.PHONY : CMakeFiles/printPatterns.dir/build

CMakeFiles/printPatterns.dir/requires: CMakeFiles/printPatterns.dir/main.cpp.o.requires

.PHONY : CMakeFiles/printPatterns.dir/requires

CMakeFiles/printPatterns.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/printPatterns.dir/cmake_clean.cmake
.PHONY : CMakeFiles/printPatterns.dir/clean

CMakeFiles/printPatterns.dir/depend:
	cd /Users/apurv/Desktop/C++code/printPatterns/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/apurv/Desktop/C++code/printPatterns /Users/apurv/Desktop/C++code/printPatterns /Users/apurv/Desktop/C++code/printPatterns/cmake-build-debug /Users/apurv/Desktop/C++code/printPatterns/cmake-build-debug /Users/apurv/Desktop/C++code/printPatterns/cmake-build-debug/CMakeFiles/printPatterns.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/printPatterns.dir/depend

