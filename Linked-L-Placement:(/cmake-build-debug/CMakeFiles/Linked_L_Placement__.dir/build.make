# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/mayankbajaj/Desktop/C-Codes/Linked-L-Placement:("

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/mayankbajaj/Desktop/C-Codes/Linked-L-Placement:(/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Linked_L_Placement__.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Linked_L_Placement__.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Linked_L_Placement__.dir/flags.make

CMakeFiles/Linked_L_Placement__.dir/main.cpp.o: CMakeFiles/Linked_L_Placement__.dir/flags.make
CMakeFiles/Linked_L_Placement__.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/mayankbajaj/Desktop/C-Codes/Linked-L-Placement:(/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Linked_L_Placement__.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Linked_L_Placement__.dir/main.cpp.o -c "/Users/mayankbajaj/Desktop/C-Codes/Linked-L-Placement:(/main.cpp"

CMakeFiles/Linked_L_Placement__.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Linked_L_Placement__.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/mayankbajaj/Desktop/C-Codes/Linked-L-Placement:(/main.cpp" > CMakeFiles/Linked_L_Placement__.dir/main.cpp.i

CMakeFiles/Linked_L_Placement__.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Linked_L_Placement__.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/mayankbajaj/Desktop/C-Codes/Linked-L-Placement:(/main.cpp" -o CMakeFiles/Linked_L_Placement__.dir/main.cpp.s

# Object files for target Linked_L_Placement__
Linked_L_Placement___OBJECTS = \
"CMakeFiles/Linked_L_Placement__.dir/main.cpp.o"

# External object files for target Linked_L_Placement__
Linked_L_Placement___EXTERNAL_OBJECTS =

Linked_L_Placement__: CMakeFiles/Linked_L_Placement__.dir/main.cpp.o
Linked_L_Placement__: CMakeFiles/Linked_L_Placement__.dir/build.make
Linked_L_Placement__: CMakeFiles/Linked_L_Placement__.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/mayankbajaj/Desktop/C-Codes/Linked-L-Placement:(/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Linked_L_Placement__"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Linked_L_Placement__.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Linked_L_Placement__.dir/build: Linked_L_Placement__

.PHONY : CMakeFiles/Linked_L_Placement__.dir/build

CMakeFiles/Linked_L_Placement__.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Linked_L_Placement__.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Linked_L_Placement__.dir/clean

CMakeFiles/Linked_L_Placement__.dir/depend:
	cd "/Users/mayankbajaj/Desktop/C-Codes/Linked-L-Placement:(/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/mayankbajaj/Desktop/C-Codes/Linked-L-Placement:(" "/Users/mayankbajaj/Desktop/C-Codes/Linked-L-Placement:(" "/Users/mayankbajaj/Desktop/C-Codes/Linked-L-Placement:(/cmake-build-debug" "/Users/mayankbajaj/Desktop/C-Codes/Linked-L-Placement:(/cmake-build-debug" "/Users/mayankbajaj/Desktop/C-Codes/Linked-L-Placement:(/cmake-build-debug/CMakeFiles/Linked_L_Placement__.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Linked_L_Placement__.dir/depend

