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
CMAKE_SOURCE_DIR = /Users/apurv/Desktop/C++code/longestSubstr

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/apurv/Desktop/C++code/longestSubstr/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/longestSubstr.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/longestSubstr.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/longestSubstr.dir/flags.make

CMakeFiles/longestSubstr.dir/main.cpp.o: CMakeFiles/longestSubstr.dir/flags.make
CMakeFiles/longestSubstr.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/apurv/Desktop/C++code/longestSubstr/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/longestSubstr.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/longestSubstr.dir/main.cpp.o -c /Users/apurv/Desktop/C++code/longestSubstr/main.cpp

CMakeFiles/longestSubstr.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/longestSubstr.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/apurv/Desktop/C++code/longestSubstr/main.cpp > CMakeFiles/longestSubstr.dir/main.cpp.i

CMakeFiles/longestSubstr.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/longestSubstr.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/apurv/Desktop/C++code/longestSubstr/main.cpp -o CMakeFiles/longestSubstr.dir/main.cpp.s

CMakeFiles/longestSubstr.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/longestSubstr.dir/main.cpp.o.requires

CMakeFiles/longestSubstr.dir/main.cpp.o.provides: CMakeFiles/longestSubstr.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/longestSubstr.dir/build.make CMakeFiles/longestSubstr.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/longestSubstr.dir/main.cpp.o.provides

CMakeFiles/longestSubstr.dir/main.cpp.o.provides.build: CMakeFiles/longestSubstr.dir/main.cpp.o


# Object files for target longestSubstr
longestSubstr_OBJECTS = \
"CMakeFiles/longestSubstr.dir/main.cpp.o"

# External object files for target longestSubstr
longestSubstr_EXTERNAL_OBJECTS =

longestSubstr: CMakeFiles/longestSubstr.dir/main.cpp.o
longestSubstr: CMakeFiles/longestSubstr.dir/build.make
longestSubstr: CMakeFiles/longestSubstr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/apurv/Desktop/C++code/longestSubstr/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable longestSubstr"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/longestSubstr.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/longestSubstr.dir/build: longestSubstr

.PHONY : CMakeFiles/longestSubstr.dir/build

CMakeFiles/longestSubstr.dir/requires: CMakeFiles/longestSubstr.dir/main.cpp.o.requires

.PHONY : CMakeFiles/longestSubstr.dir/requires

CMakeFiles/longestSubstr.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/longestSubstr.dir/cmake_clean.cmake
.PHONY : CMakeFiles/longestSubstr.dir/clean

CMakeFiles/longestSubstr.dir/depend:
	cd /Users/apurv/Desktop/C++code/longestSubstr/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/apurv/Desktop/C++code/longestSubstr /Users/apurv/Desktop/C++code/longestSubstr /Users/apurv/Desktop/C++code/longestSubstr/cmake-build-debug /Users/apurv/Desktop/C++code/longestSubstr/cmake-build-debug /Users/apurv/Desktop/C++code/longestSubstr/cmake-build-debug/CMakeFiles/longestSubstr.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/longestSubstr.dir/depend

