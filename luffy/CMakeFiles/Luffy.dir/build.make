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
include CMakeFiles/Luffy.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Luffy.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Luffy.dir/flags.make

CMakeFiles/Luffy.dir/src/main.cpp.o: CMakeFiles/Luffy.dir/flags.make
CMakeFiles/Luffy.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Luffy.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Luffy.dir/src/main.cpp.o -c /home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy/src/main.cpp

CMakeFiles/Luffy.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Luffy.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy/src/main.cpp > CMakeFiles/Luffy.dir/src/main.cpp.i

CMakeFiles/Luffy.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Luffy.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy/src/main.cpp -o CMakeFiles/Luffy.dir/src/main.cpp.s

# Object files for target Luffy
Luffy_OBJECTS = \
"CMakeFiles/Luffy.dir/src/main.cpp.o"

# External object files for target Luffy
Luffy_EXTERNAL_OBJECTS =

Luffy: CMakeFiles/Luffy.dir/src/main.cpp.o
Luffy: CMakeFiles/Luffy.dir/build.make
Luffy: libfunc1.a
Luffy: libfunc2.a
Luffy: libfunc3.a
Luffy: libfunc4.a
Luffy: libfunc5.a
Luffy: libfunc6.a
Luffy: libfunc7.a
Luffy: libfunc8.a
Luffy: libfunc9.a
Luffy: CMakeFiles/Luffy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Luffy"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Luffy.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Luffy.dir/build: Luffy

.PHONY : CMakeFiles/Luffy.dir/build

CMakeFiles/Luffy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Luffy.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Luffy.dir/clean

CMakeFiles/Luffy.dir/depend:
	cd /home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy /home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy /home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy /home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy /home/joao/Documents/EAXXX/EA872/EA872_compartilhado/luffy/CMakeFiles/Luffy.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Luffy.dir/depend

