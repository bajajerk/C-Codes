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
CMAKE_SOURCE_DIR = "/Users/apurv/Desktop/C++code/Buy Tickets"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/apurv/Desktop/C++code/Buy Tickets/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Buy_Tickets.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Buy_Tickets.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Buy_Tickets.dir/flags.make

CMakeFiles/Buy_Tickets.dir/main.cpp.o: CMakeFiles/Buy_Tickets.dir/flags.make
CMakeFiles/Buy_Tickets.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/apurv/Desktop/C++code/Buy Tickets/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Buy_Tickets.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Buy_Tickets.dir/main.cpp.o -c "/Users/apurv/Desktop/C++code/Buy Tickets/main.cpp"

CMakeFiles/Buy_Tickets.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Buy_Tickets.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/apurv/Desktop/C++code/Buy Tickets/main.cpp" > CMakeFiles/Buy_Tickets.dir/main.cpp.i

CMakeFiles/Buy_Tickets.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Buy_Tickets.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/apurv/Desktop/C++code/Buy Tickets/main.cpp" -o CMakeFiles/Buy_Tickets.dir/main.cpp.s

CMakeFiles/Buy_Tickets.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Buy_Tickets.dir/main.cpp.o.requires

CMakeFiles/Buy_Tickets.dir/main.cpp.o.provides: CMakeFiles/Buy_Tickets.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Buy_Tickets.dir/build.make CMakeFiles/Buy_Tickets.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Buy_Tickets.dir/main.cpp.o.provides

CMakeFiles/Buy_Tickets.dir/main.cpp.o.provides.build: CMakeFiles/Buy_Tickets.dir/main.cpp.o


# Object files for target Buy_Tickets
Buy_Tickets_OBJECTS = \
"CMakeFiles/Buy_Tickets.dir/main.cpp.o"

# External object files for target Buy_Tickets
Buy_Tickets_EXTERNAL_OBJECTS =

Buy_Tickets: CMakeFiles/Buy_Tickets.dir/main.cpp.o
Buy_Tickets: CMakeFiles/Buy_Tickets.dir/build.make
Buy_Tickets: CMakeFiles/Buy_Tickets.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/apurv/Desktop/C++code/Buy Tickets/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Buy_Tickets"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Buy_Tickets.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Buy_Tickets.dir/build: Buy_Tickets

.PHONY : CMakeFiles/Buy_Tickets.dir/build

CMakeFiles/Buy_Tickets.dir/requires: CMakeFiles/Buy_Tickets.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Buy_Tickets.dir/requires

CMakeFiles/Buy_Tickets.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Buy_Tickets.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Buy_Tickets.dir/clean

CMakeFiles/Buy_Tickets.dir/depend:
	cd "/Users/apurv/Desktop/C++code/Buy Tickets/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/apurv/Desktop/C++code/Buy Tickets" "/Users/apurv/Desktop/C++code/Buy Tickets" "/Users/apurv/Desktop/C++code/Buy Tickets/cmake-build-debug" "/Users/apurv/Desktop/C++code/Buy Tickets/cmake-build-debug" "/Users/apurv/Desktop/C++code/Buy Tickets/cmake-build-debug/CMakeFiles/Buy_Tickets.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Buy_Tickets.dir/depend

