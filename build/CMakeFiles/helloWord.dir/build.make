# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/test_code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/test_code/build

# Include any dependencies generated for this target.
include CMakeFiles/helloWord.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/helloWord.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/helloWord.dir/flags.make

CMakeFiles/helloWord.dir/mainhelloword.cpp.obj: CMakeFiles/helloWord.dir/flags.make
CMakeFiles/helloWord.dir/mainhelloword.cpp.obj: ../mainhelloword.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/test_code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/helloWord.dir/mainhelloword.cpp.obj"
	/home/user/mxe/usr/x86_64-pc-linux-gnu/bin/x86_64-w64-mingw32.static-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/helloWord.dir/mainhelloword.cpp.obj -c /home/user/test_code/mainhelloword.cpp

CMakeFiles/helloWord.dir/mainhelloword.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/helloWord.dir/mainhelloword.cpp.i"
	/home/user/mxe/usr/x86_64-pc-linux-gnu/bin/x86_64-w64-mingw32.static-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/test_code/mainhelloword.cpp > CMakeFiles/helloWord.dir/mainhelloword.cpp.i

CMakeFiles/helloWord.dir/mainhelloword.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/helloWord.dir/mainhelloword.cpp.s"
	/home/user/mxe/usr/x86_64-pc-linux-gnu/bin/x86_64-w64-mingw32.static-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/test_code/mainhelloword.cpp -o CMakeFiles/helloWord.dir/mainhelloword.cpp.s

# Object files for target helloWord
helloWord_OBJECTS = \
"CMakeFiles/helloWord.dir/mainhelloword.cpp.obj"

# External object files for target helloWord
helloWord_EXTERNAL_OBJECTS =

helloWord.exe: CMakeFiles/helloWord.dir/mainhelloword.cpp.obj
helloWord.exe: CMakeFiles/helloWord.dir/build.make
helloWord.exe: CMakeFiles/helloWord.dir/linklibs.rsp
helloWord.exe: CMakeFiles/helloWord.dir/objects1.rsp
helloWord.exe: CMakeFiles/helloWord.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/test_code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable helloWord.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/helloWord.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/helloWord.dir/build: helloWord.exe

.PHONY : CMakeFiles/helloWord.dir/build

CMakeFiles/helloWord.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/helloWord.dir/cmake_clean.cmake
.PHONY : CMakeFiles/helloWord.dir/clean

CMakeFiles/helloWord.dir/depend:
	cd /home/user/test_code/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/test_code /home/user/test_code /home/user/test_code/build /home/user/test_code/build /home/user/test_code/build/CMakeFiles/helloWord.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/helloWord.dir/depend

