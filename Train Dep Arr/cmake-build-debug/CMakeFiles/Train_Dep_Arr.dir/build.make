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
CMAKE_SOURCE_DIR = "/Users/mayankbajaj/Desktop/C-Codes/Train Dep Arr"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/mayankbajaj/Desktop/C-Codes/Train Dep Arr/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Train_Dep_Arr.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Train_Dep_Arr.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Train_Dep_Arr.dir/flags.make

CMakeFiles/Train_Dep_Arr.dir/main.cpp.o: CMakeFiles/Train_Dep_Arr.dir/flags.make
CMakeFiles/Train_Dep_Arr.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/mayankbajaj/Desktop/C-Codes/Train Dep Arr/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Train_Dep_Arr.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Train_Dep_Arr.dir/main.cpp.o -c "/Users/mayankbajaj/Desktop/C-Codes/Train Dep Arr/main.cpp"

CMakeFiles/Train_Dep_Arr.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Train_Dep_Arr.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/mayankbajaj/Desktop/C-Codes/Train Dep Arr/main.cpp" > CMakeFiles/Train_Dep_Arr.dir/main.cpp.i

CMakeFiles/Train_Dep_Arr.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Train_Dep_Arr.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/mayankbajaj/Desktop/C-Codes/Train Dep Arr/main.cpp" -o CMakeFiles/Train_Dep_Arr.dir/main.cpp.s

# Object files for target Train_Dep_Arr
Train_Dep_Arr_OBJECTS = \
"CMakeFiles/Train_Dep_Arr.dir/main.cpp.o"

# External object files for target Train_Dep_Arr
Train_Dep_Arr_EXTERNAL_OBJECTS =

Train_Dep_Arr: CMakeFiles/Train_Dep_Arr.dir/main.cpp.o
Train_Dep_Arr: CMakeFiles/Train_Dep_Arr.dir/build.make
Train_Dep_Arr: CMakeFiles/Train_Dep_Arr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/mayankbajaj/Desktop/C-Codes/Train Dep Arr/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Train_Dep_Arr"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Train_Dep_Arr.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Train_Dep_Arr.dir/build: Train_Dep_Arr

.PHONY : CMakeFiles/Train_Dep_Arr.dir/build

CMakeFiles/Train_Dep_Arr.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Train_Dep_Arr.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Train_Dep_Arr.dir/clean

CMakeFiles/Train_Dep_Arr.dir/depend:
	cd "/Users/mayankbajaj/Desktop/C-Codes/Train Dep Arr/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/mayankbajaj/Desktop/C-Codes/Train Dep Arr" "/Users/mayankbajaj/Desktop/C-Codes/Train Dep Arr" "/Users/mayankbajaj/Desktop/C-Codes/Train Dep Arr/cmake-build-debug" "/Users/mayankbajaj/Desktop/C-Codes/Train Dep Arr/cmake-build-debug" "/Users/mayankbajaj/Desktop/C-Codes/Train Dep Arr/cmake-build-debug/CMakeFiles/Train_Dep_Arr.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Train_Dep_Arr.dir/depend

