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
CMAKE_SOURCE_DIR = /Users/apurv/Desktop/C++code/sortStack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/apurv/Desktop/C++code/sortStack/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sortStack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sortStack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sortStack.dir/flags.make

CMakeFiles/sortStack.dir/main.cpp.o: CMakeFiles/sortStack.dir/flags.make
CMakeFiles/sortStack.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/apurv/Desktop/C++code/sortStack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sortStack.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sortStack.dir/main.cpp.o -c /Users/apurv/Desktop/C++code/sortStack/main.cpp

CMakeFiles/sortStack.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sortStack.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/apurv/Desktop/C++code/sortStack/main.cpp > CMakeFiles/sortStack.dir/main.cpp.i

CMakeFiles/sortStack.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sortStack.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/apurv/Desktop/C++code/sortStack/main.cpp -o CMakeFiles/sortStack.dir/main.cpp.s

CMakeFiles/sortStack.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/sortStack.dir/main.cpp.o.requires

CMakeFiles/sortStack.dir/main.cpp.o.provides: CMakeFiles/sortStack.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/sortStack.dir/build.make CMakeFiles/sortStack.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/sortStack.dir/main.cpp.o.provides

CMakeFiles/sortStack.dir/main.cpp.o.provides.build: CMakeFiles/sortStack.dir/main.cpp.o


# Object files for target sortStack
sortStack_OBJECTS = \
"CMakeFiles/sortStack.dir/main.cpp.o"

# External object files for target sortStack
sortStack_EXTERNAL_OBJECTS =

sortStack: CMakeFiles/sortStack.dir/main.cpp.o
sortStack: CMakeFiles/sortStack.dir/build.make
sortStack: CMakeFiles/sortStack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/apurv/Desktop/C++code/sortStack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sortStack"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sortStack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sortStack.dir/build: sortStack

.PHONY : CMakeFiles/sortStack.dir/build

CMakeFiles/sortStack.dir/requires: CMakeFiles/sortStack.dir/main.cpp.o.requires

.PHONY : CMakeFiles/sortStack.dir/requires

CMakeFiles/sortStack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sortStack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sortStack.dir/clean

CMakeFiles/sortStack.dir/depend:
	cd /Users/apurv/Desktop/C++code/sortStack/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/apurv/Desktop/C++code/sortStack /Users/apurv/Desktop/C++code/sortStack /Users/apurv/Desktop/C++code/sortStack/cmake-build-debug /Users/apurv/Desktop/C++code/sortStack/cmake-build-debug /Users/apurv/Desktop/C++code/sortStack/cmake-build-debug/CMakeFiles/sortStack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sortStack.dir/depend

