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
CMAKE_SOURCE_DIR = /Users/apurv/Desktop/C++code/AlllCodes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/apurv/Desktop/C++code/AlllCodes/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/AlllCodes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AlllCodes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AlllCodes.dir/flags.make

CMakeFiles/AlllCodes.dir/main.cpp.o: CMakeFiles/AlllCodes.dir/flags.make
CMakeFiles/AlllCodes.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/apurv/Desktop/C++code/AlllCodes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AlllCodes.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AlllCodes.dir/main.cpp.o -c /Users/apurv/Desktop/C++code/AlllCodes/main.cpp

CMakeFiles/AlllCodes.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlllCodes.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/apurv/Desktop/C++code/AlllCodes/main.cpp > CMakeFiles/AlllCodes.dir/main.cpp.i

CMakeFiles/AlllCodes.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlllCodes.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/apurv/Desktop/C++code/AlllCodes/main.cpp -o CMakeFiles/AlllCodes.dir/main.cpp.s

CMakeFiles/AlllCodes.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/AlllCodes.dir/main.cpp.o.requires

CMakeFiles/AlllCodes.dir/main.cpp.o.provides: CMakeFiles/AlllCodes.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/AlllCodes.dir/build.make CMakeFiles/AlllCodes.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/AlllCodes.dir/main.cpp.o.provides

CMakeFiles/AlllCodes.dir/main.cpp.o.provides.build: CMakeFiles/AlllCodes.dir/main.cpp.o


# Object files for target AlllCodes
AlllCodes_OBJECTS = \
"CMakeFiles/AlllCodes.dir/main.cpp.o"

# External object files for target AlllCodes
AlllCodes_EXTERNAL_OBJECTS =

AlllCodes: CMakeFiles/AlllCodes.dir/main.cpp.o
AlllCodes: CMakeFiles/AlllCodes.dir/build.make
AlllCodes: CMakeFiles/AlllCodes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/apurv/Desktop/C++code/AlllCodes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AlllCodes"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AlllCodes.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AlllCodes.dir/build: AlllCodes

.PHONY : CMakeFiles/AlllCodes.dir/build

CMakeFiles/AlllCodes.dir/requires: CMakeFiles/AlllCodes.dir/main.cpp.o.requires

.PHONY : CMakeFiles/AlllCodes.dir/requires

CMakeFiles/AlllCodes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AlllCodes.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AlllCodes.dir/clean

CMakeFiles/AlllCodes.dir/depend:
	cd /Users/apurv/Desktop/C++code/AlllCodes/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/apurv/Desktop/C++code/AlllCodes /Users/apurv/Desktop/C++code/AlllCodes /Users/apurv/Desktop/C++code/AlllCodes/cmake-build-debug /Users/apurv/Desktop/C++code/AlllCodes/cmake-build-debug /Users/apurv/Desktop/C++code/AlllCodes/cmake-build-debug/CMakeFiles/AlllCodes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AlllCodes.dir/depend
