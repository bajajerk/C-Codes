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
CMAKE_SOURCE_DIR = /Users/apurv/Desktop/C++code/StringToNumber

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/apurv/Desktop/C++code/StringToNumber/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/StringToNumber.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/StringToNumber.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StringToNumber.dir/flags.make

CMakeFiles/StringToNumber.dir/main.cpp.o: CMakeFiles/StringToNumber.dir/flags.make
CMakeFiles/StringToNumber.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/apurv/Desktop/C++code/StringToNumber/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/StringToNumber.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/StringToNumber.dir/main.cpp.o -c /Users/apurv/Desktop/C++code/StringToNumber/main.cpp

CMakeFiles/StringToNumber.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StringToNumber.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/apurv/Desktop/C++code/StringToNumber/main.cpp > CMakeFiles/StringToNumber.dir/main.cpp.i

CMakeFiles/StringToNumber.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StringToNumber.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/apurv/Desktop/C++code/StringToNumber/main.cpp -o CMakeFiles/StringToNumber.dir/main.cpp.s

CMakeFiles/StringToNumber.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/StringToNumber.dir/main.cpp.o.requires

CMakeFiles/StringToNumber.dir/main.cpp.o.provides: CMakeFiles/StringToNumber.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/StringToNumber.dir/build.make CMakeFiles/StringToNumber.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/StringToNumber.dir/main.cpp.o.provides

CMakeFiles/StringToNumber.dir/main.cpp.o.provides.build: CMakeFiles/StringToNumber.dir/main.cpp.o


# Object files for target StringToNumber
StringToNumber_OBJECTS = \
"CMakeFiles/StringToNumber.dir/main.cpp.o"

# External object files for target StringToNumber
StringToNumber_EXTERNAL_OBJECTS =

StringToNumber: CMakeFiles/StringToNumber.dir/main.cpp.o
StringToNumber: CMakeFiles/StringToNumber.dir/build.make
StringToNumber: CMakeFiles/StringToNumber.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/apurv/Desktop/C++code/StringToNumber/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable StringToNumber"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/StringToNumber.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StringToNumber.dir/build: StringToNumber

.PHONY : CMakeFiles/StringToNumber.dir/build

CMakeFiles/StringToNumber.dir/requires: CMakeFiles/StringToNumber.dir/main.cpp.o.requires

.PHONY : CMakeFiles/StringToNumber.dir/requires

CMakeFiles/StringToNumber.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/StringToNumber.dir/cmake_clean.cmake
.PHONY : CMakeFiles/StringToNumber.dir/clean

CMakeFiles/StringToNumber.dir/depend:
	cd /Users/apurv/Desktop/C++code/StringToNumber/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/apurv/Desktop/C++code/StringToNumber /Users/apurv/Desktop/C++code/StringToNumber /Users/apurv/Desktop/C++code/StringToNumber/cmake-build-debug /Users/apurv/Desktop/C++code/StringToNumber/cmake-build-debug /Users/apurv/Desktop/C++code/StringToNumber/cmake-build-debug/CMakeFiles/StringToNumber.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/StringToNumber.dir/depend

