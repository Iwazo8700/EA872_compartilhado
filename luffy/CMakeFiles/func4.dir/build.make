# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy

# Include any dependencies generated for this target.
include CMakeFiles/func4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/func4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/func4.dir/flags.make

CMakeFiles/func4.dir/src/Model/Images.cpp.o: CMakeFiles/func4.dir/flags.make
CMakeFiles/func4.dir/src/Model/Images.cpp.o: src/Model/Images.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/func4.dir/src/Model/Images.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/func4.dir/src/Model/Images.cpp.o -c /home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy/src/Model/Images.cpp

CMakeFiles/func4.dir/src/Model/Images.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/func4.dir/src/Model/Images.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy/src/Model/Images.cpp > CMakeFiles/func4.dir/src/Model/Images.cpp.i

CMakeFiles/func4.dir/src/Model/Images.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/func4.dir/src/Model/Images.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy/src/Model/Images.cpp -o CMakeFiles/func4.dir/src/Model/Images.cpp.s

# Object files for target func4
func4_OBJECTS = \
"CMakeFiles/func4.dir/src/Model/Images.cpp.o"

# External object files for target func4
func4_EXTERNAL_OBJECTS =

libfunc4.a: CMakeFiles/func4.dir/src/Model/Images.cpp.o
libfunc4.a: CMakeFiles/func4.dir/build.make
libfunc4.a: CMakeFiles/func4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libfunc4.a"
	$(CMAKE_COMMAND) -P CMakeFiles/func4.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/func4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/func4.dir/build: libfunc4.a

.PHONY : CMakeFiles/func4.dir/build

CMakeFiles/func4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/func4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/func4.dir/clean

CMakeFiles/func4.dir/depend:
	cd /home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy /home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy /home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy /home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy /home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy/CMakeFiles/func4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/func4.dir/depend

