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
CMAKE_SOURCE_DIR = /Users/apurv/Desktop/C++code/smallToBig

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/apurv/Desktop/C++code/smallToBig/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/smallToBig.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/smallToBig.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/smallToBig.dir/flags.make

CMakeFiles/smallToBig.dir/main.cpp.o: CMakeFiles/smallToBig.dir/flags.make
CMakeFiles/smallToBig.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/apurv/Desktop/C++code/smallToBig/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/smallToBig.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/smallToBig.dir/main.cpp.o -c /Users/apurv/Desktop/C++code/smallToBig/main.cpp

CMakeFiles/smallToBig.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/smallToBig.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/apurv/Desktop/C++code/smallToBig/main.cpp > CMakeFiles/smallToBig.dir/main.cpp.i

CMakeFiles/smallToBig.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/smallToBig.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/apurv/Desktop/C++code/smallToBig/main.cpp -o CMakeFiles/smallToBig.dir/main.cpp.s

CMakeFiles/smallToBig.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/smallToBig.dir/main.cpp.o.requires

CMakeFiles/smallToBig.dir/main.cpp.o.provides: CMakeFiles/smallToBig.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/smallToBig.dir/build.make CMakeFiles/smallToBig.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/smallToBig.dir/main.cpp.o.provides

CMakeFiles/smallToBig.dir/main.cpp.o.provides.build: CMakeFiles/smallToBig.dir/main.cpp.o


# Object files for target smallToBig
smallToBig_OBJECTS = \
"CMakeFiles/smallToBig.dir/main.cpp.o"

# External object files for target smallToBig
smallToBig_EXTERNAL_OBJECTS =

smallToBig: CMakeFiles/smallToBig.dir/main.cpp.o
smallToBig: CMakeFiles/smallToBig.dir/build.make
smallToBig: CMakeFiles/smallToBig.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/apurv/Desktop/C++code/smallToBig/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable smallToBig"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/smallToBig.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/smallToBig.dir/build: smallToBig

.PHONY : CMakeFiles/smallToBig.dir/build

CMakeFiles/smallToBig.dir/requires: CMakeFiles/smallToBig.dir/main.cpp.o.requires

.PHONY : CMakeFiles/smallToBig.dir/requires

CMakeFiles/smallToBig.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/smallToBig.dir/cmake_clean.cmake
.PHONY : CMakeFiles/smallToBig.dir/clean

CMakeFiles/smallToBig.dir/depend:
	cd /Users/apurv/Desktop/C++code/smallToBig/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/apurv/Desktop/C++code/smallToBig /Users/apurv/Desktop/C++code/smallToBig /Users/apurv/Desktop/C++code/smallToBig/cmake-build-debug /Users/apurv/Desktop/C++code/smallToBig/cmake-build-debug /Users/apurv/Desktop/C++code/smallToBig/cmake-build-debug/CMakeFiles/smallToBig.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/smallToBig.dir/depend

