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
CMAKE_SOURCE_DIR = /home/baralho/Documentos/Github/EA872_compartilhado/luffy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/baralho/Documentos/Github/EA872_compartilhado/luffy/bin

# Include any dependencies generated for this target.
include CMakeFiles/func6.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/func6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/func6.dir/flags.make

CMakeFiles/func6.dir/src/Controller/PixelConverter.cpp.o: CMakeFiles/func6.dir/flags.make
CMakeFiles/func6.dir/src/Controller/PixelConverter.cpp.o: ../src/Controller/PixelConverter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/baralho/Documentos/Github/EA872_compartilhado/luffy/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/func6.dir/src/Controller/PixelConverter.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/func6.dir/src/Controller/PixelConverter.cpp.o -c /home/baralho/Documentos/Github/EA872_compartilhado/luffy/src/Controller/PixelConverter.cpp

CMakeFiles/func6.dir/src/Controller/PixelConverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/func6.dir/src/Controller/PixelConverter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/baralho/Documentos/Github/EA872_compartilhado/luffy/src/Controller/PixelConverter.cpp > CMakeFiles/func6.dir/src/Controller/PixelConverter.cpp.i

CMakeFiles/func6.dir/src/Controller/PixelConverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/func6.dir/src/Controller/PixelConverter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/baralho/Documentos/Github/EA872_compartilhado/luffy/src/Controller/PixelConverter.cpp -o CMakeFiles/func6.dir/src/Controller/PixelConverter.cpp.s

# Object files for target func6
func6_OBJECTS = \
"CMakeFiles/func6.dir/src/Controller/PixelConverter.cpp.o"

# External object files for target func6
func6_EXTERNAL_OBJECTS =

libfunc6.a: CMakeFiles/func6.dir/src/Controller/PixelConverter.cpp.o
libfunc6.a: CMakeFiles/func6.dir/build.make
libfunc6.a: CMakeFiles/func6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/baralho/Documentos/Github/EA872_compartilhado/luffy/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libfunc6.a"
	$(CMAKE_COMMAND) -P CMakeFiles/func6.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/func6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/func6.dir/build: libfunc6.a

.PHONY : CMakeFiles/func6.dir/build

CMakeFiles/func6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/func6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/func6.dir/clean

CMakeFiles/func6.dir/depend:
	cd /home/baralho/Documentos/Github/EA872_compartilhado/luffy/bin && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/baralho/Documentos/Github/EA872_compartilhado/luffy /home/baralho/Documentos/Github/EA872_compartilhado/luffy /home/baralho/Documentos/Github/EA872_compartilhado/luffy/bin /home/baralho/Documentos/Github/EA872_compartilhado/luffy/bin /home/baralho/Documentos/Github/EA872_compartilhado/luffy/bin/CMakeFiles/func6.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/func6.dir/depend

