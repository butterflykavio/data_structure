# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.13.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.13.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/yuzilin/data_structure

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yuzilin/data_structure/cmake-build-debug

# Include any dependencies generated for this target.
include STL/CMakeFiles/STL.dir/depend.make

# Include the progress variables for this target.
include STL/CMakeFiles/STL.dir/progress.make

# Include the compile flags for this target's objects.
include STL/CMakeFiles/STL.dir/flags.make

STL/CMakeFiles/STL.dir/link_list.cpp.o: STL/CMakeFiles/STL.dir/flags.make
STL/CMakeFiles/STL.dir/link_list.cpp.o: ../STL/link_list.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yuzilin/data_structure/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object STL/CMakeFiles/STL.dir/link_list.cpp.o"
	cd /Users/yuzilin/data_structure/cmake-build-debug/STL && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/STL.dir/link_list.cpp.o -c /Users/yuzilin/data_structure/STL/link_list.cpp

STL/CMakeFiles/STL.dir/link_list.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/STL.dir/link_list.cpp.i"
	cd /Users/yuzilin/data_structure/cmake-build-debug/STL && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yuzilin/data_structure/STL/link_list.cpp > CMakeFiles/STL.dir/link_list.cpp.i

STL/CMakeFiles/STL.dir/link_list.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/STL.dir/link_list.cpp.s"
	cd /Users/yuzilin/data_structure/cmake-build-debug/STL && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yuzilin/data_structure/STL/link_list.cpp -o CMakeFiles/STL.dir/link_list.cpp.s

STL/CMakeFiles/STL.dir/sequence.cpp.o: STL/CMakeFiles/STL.dir/flags.make
STL/CMakeFiles/STL.dir/sequence.cpp.o: ../STL/sequence.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yuzilin/data_structure/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object STL/CMakeFiles/STL.dir/sequence.cpp.o"
	cd /Users/yuzilin/data_structure/cmake-build-debug/STL && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/STL.dir/sequence.cpp.o -c /Users/yuzilin/data_structure/STL/sequence.cpp

STL/CMakeFiles/STL.dir/sequence.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/STL.dir/sequence.cpp.i"
	cd /Users/yuzilin/data_structure/cmake-build-debug/STL && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yuzilin/data_structure/STL/sequence.cpp > CMakeFiles/STL.dir/sequence.cpp.i

STL/CMakeFiles/STL.dir/sequence.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/STL.dir/sequence.cpp.s"
	cd /Users/yuzilin/data_structure/cmake-build-debug/STL && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yuzilin/data_structure/STL/sequence.cpp -o CMakeFiles/STL.dir/sequence.cpp.s

# Object files for target STL
STL_OBJECTS = \
"CMakeFiles/STL.dir/link_list.cpp.o" \
"CMakeFiles/STL.dir/sequence.cpp.o"

# External object files for target STL
STL_EXTERNAL_OBJECTS =

STL/libSTL.a: STL/CMakeFiles/STL.dir/link_list.cpp.o
STL/libSTL.a: STL/CMakeFiles/STL.dir/sequence.cpp.o
STL/libSTL.a: STL/CMakeFiles/STL.dir/build.make
STL/libSTL.a: STL/CMakeFiles/STL.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/yuzilin/data_structure/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libSTL.a"
	cd /Users/yuzilin/data_structure/cmake-build-debug/STL && $(CMAKE_COMMAND) -P CMakeFiles/STL.dir/cmake_clean_target.cmake
	cd /Users/yuzilin/data_structure/cmake-build-debug/STL && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/STL.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
STL/CMakeFiles/STL.dir/build: STL/libSTL.a

.PHONY : STL/CMakeFiles/STL.dir/build

STL/CMakeFiles/STL.dir/clean:
	cd /Users/yuzilin/data_structure/cmake-build-debug/STL && $(CMAKE_COMMAND) -P CMakeFiles/STL.dir/cmake_clean.cmake
.PHONY : STL/CMakeFiles/STL.dir/clean

STL/CMakeFiles/STL.dir/depend:
	cd /Users/yuzilin/data_structure/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yuzilin/data_structure /Users/yuzilin/data_structure/STL /Users/yuzilin/data_structure/cmake-build-debug /Users/yuzilin/data_structure/cmake-build-debug/STL /Users/yuzilin/data_structure/cmake-build-debug/STL/CMakeFiles/STL.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : STL/CMakeFiles/STL.dir/depend

