# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rong/codec/chapter16/inventory2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rong/codec/chapter16/inventory2/build

# Include any dependencies generated for this target.
include CMakeFiles/inventory.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/inventory.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/inventory.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/inventory.dir/flags.make

CMakeFiles/inventory.dir/main.c.o: CMakeFiles/inventory.dir/flags.make
CMakeFiles/inventory.dir/main.c.o: ../main.c
CMakeFiles/inventory.dir/main.c.o: CMakeFiles/inventory.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rong/codec/chapter16/inventory2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/inventory.dir/main.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/inventory.dir/main.c.o -MF CMakeFiles/inventory.dir/main.c.o.d -o CMakeFiles/inventory.dir/main.c.o -c /home/rong/codec/chapter16/inventory2/main.c

CMakeFiles/inventory.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/inventory.dir/main.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rong/codec/chapter16/inventory2/main.c > CMakeFiles/inventory.dir/main.c.i

CMakeFiles/inventory.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/inventory.dir/main.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rong/codec/chapter16/inventory2/main.c -o CMakeFiles/inventory.dir/main.c.s

CMakeFiles/inventory.dir/src/inventory.c.o: CMakeFiles/inventory.dir/flags.make
CMakeFiles/inventory.dir/src/inventory.c.o: ../src/inventory.c
CMakeFiles/inventory.dir/src/inventory.c.o: CMakeFiles/inventory.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rong/codec/chapter16/inventory2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/inventory.dir/src/inventory.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/inventory.dir/src/inventory.c.o -MF CMakeFiles/inventory.dir/src/inventory.c.o.d -o CMakeFiles/inventory.dir/src/inventory.c.o -c /home/rong/codec/chapter16/inventory2/src/inventory.c

CMakeFiles/inventory.dir/src/inventory.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/inventory.dir/src/inventory.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rong/codec/chapter16/inventory2/src/inventory.c > CMakeFiles/inventory.dir/src/inventory.c.i

CMakeFiles/inventory.dir/src/inventory.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/inventory.dir/src/inventory.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rong/codec/chapter16/inventory2/src/inventory.c -o CMakeFiles/inventory.dir/src/inventory.c.s

CMakeFiles/inventory.dir/src/read_line.c.o: CMakeFiles/inventory.dir/flags.make
CMakeFiles/inventory.dir/src/read_line.c.o: ../src/read_line.c
CMakeFiles/inventory.dir/src/read_line.c.o: CMakeFiles/inventory.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rong/codec/chapter16/inventory2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/inventory.dir/src/read_line.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/inventory.dir/src/read_line.c.o -MF CMakeFiles/inventory.dir/src/read_line.c.o.d -o CMakeFiles/inventory.dir/src/read_line.c.o -c /home/rong/codec/chapter16/inventory2/src/read_line.c

CMakeFiles/inventory.dir/src/read_line.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/inventory.dir/src/read_line.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rong/codec/chapter16/inventory2/src/read_line.c > CMakeFiles/inventory.dir/src/read_line.c.i

CMakeFiles/inventory.dir/src/read_line.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/inventory.dir/src/read_line.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rong/codec/chapter16/inventory2/src/read_line.c -o CMakeFiles/inventory.dir/src/read_line.c.s

# Object files for target inventory
inventory_OBJECTS = \
"CMakeFiles/inventory.dir/main.c.o" \
"CMakeFiles/inventory.dir/src/inventory.c.o" \
"CMakeFiles/inventory.dir/src/read_line.c.o"

# External object files for target inventory
inventory_EXTERNAL_OBJECTS =

inventory: CMakeFiles/inventory.dir/main.c.o
inventory: CMakeFiles/inventory.dir/src/inventory.c.o
inventory: CMakeFiles/inventory.dir/src/read_line.c.o
inventory: CMakeFiles/inventory.dir/build.make
inventory: CMakeFiles/inventory.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rong/codec/chapter16/inventory2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable inventory"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/inventory.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/inventory.dir/build: inventory
.PHONY : CMakeFiles/inventory.dir/build

CMakeFiles/inventory.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/inventory.dir/cmake_clean.cmake
.PHONY : CMakeFiles/inventory.dir/clean

CMakeFiles/inventory.dir/depend:
	cd /home/rong/codec/chapter16/inventory2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rong/codec/chapter16/inventory2 /home/rong/codec/chapter16/inventory2 /home/rong/codec/chapter16/inventory2/build /home/rong/codec/chapter16/inventory2/build /home/rong/codec/chapter16/inventory2/build/CMakeFiles/inventory.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/inventory.dir/depend

