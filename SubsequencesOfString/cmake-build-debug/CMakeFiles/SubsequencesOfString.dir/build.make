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
CMAKE_SOURCE_DIR = /Users/apurv/Desktop/C++code/SubsequencesOfString

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/apurv/Desktop/C++code/SubsequencesOfString/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SubsequencesOfString.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SubsequencesOfString.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SubsequencesOfString.dir/flags.make

CMakeFiles/SubsequencesOfString.dir/main.cpp.o: CMakeFiles/SubsequencesOfString.dir/flags.make
CMakeFiles/SubsequencesOfString.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/apurv/Desktop/C++code/SubsequencesOfString/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SubsequencesOfString.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SubsequencesOfString.dir/main.cpp.o -c /Users/apurv/Desktop/C++code/SubsequencesOfString/main.cpp

CMakeFiles/SubsequencesOfString.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SubsequencesOfString.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/apurv/Desktop/C++code/SubsequencesOfString/main.cpp > CMakeFiles/SubsequencesOfString.dir/main.cpp.i

CMakeFiles/SubsequencesOfString.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SubsequencesOfString.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/apurv/Desktop/C++code/SubsequencesOfString/main.cpp -o CMakeFiles/SubsequencesOfString.dir/main.cpp.s

CMakeFiles/SubsequencesOfString.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/SubsequencesOfString.dir/main.cpp.o.requires

CMakeFiles/SubsequencesOfString.dir/main.cpp.o.provides: CMakeFiles/SubsequencesOfString.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/SubsequencesOfString.dir/build.make CMakeFiles/SubsequencesOfString.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/SubsequencesOfString.dir/main.cpp.o.provides

CMakeFiles/SubsequencesOfString.dir/main.cpp.o.provides.build: CMakeFiles/SubsequencesOfString.dir/main.cpp.o


# Object files for target SubsequencesOfString
SubsequencesOfString_OBJECTS = \
"CMakeFiles/SubsequencesOfString.dir/main.cpp.o"

# External object files for target SubsequencesOfString
SubsequencesOfString_EXTERNAL_OBJECTS =

SubsequencesOfString: CMakeFiles/SubsequencesOfString.dir/main.cpp.o
SubsequencesOfString: CMakeFiles/SubsequencesOfString.dir/build.make
SubsequencesOfString: CMakeFiles/SubsequencesOfString.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/apurv/Desktop/C++code/SubsequencesOfString/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SubsequencesOfString"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SubsequencesOfString.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SubsequencesOfString.dir/build: SubsequencesOfString

.PHONY : CMakeFiles/SubsequencesOfString.dir/build

CMakeFiles/SubsequencesOfString.dir/requires: CMakeFiles/SubsequencesOfString.dir/main.cpp.o.requires

.PHONY : CMakeFiles/SubsequencesOfString.dir/requires

CMakeFiles/SubsequencesOfString.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SubsequencesOfString.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SubsequencesOfString.dir/clean

CMakeFiles/SubsequencesOfString.dir/depend:
	cd /Users/apurv/Desktop/C++code/SubsequencesOfString/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/apurv/Desktop/C++code/SubsequencesOfString /Users/apurv/Desktop/C++code/SubsequencesOfString /Users/apurv/Desktop/C++code/SubsequencesOfString/cmake-build-debug /Users/apurv/Desktop/C++code/SubsequencesOfString/cmake-build-debug /Users/apurv/Desktop/C++code/SubsequencesOfString/cmake-build-debug/CMakeFiles/SubsequencesOfString.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SubsequencesOfString.dir/depend

