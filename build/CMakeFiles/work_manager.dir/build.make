# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.24.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.24.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/bob/workspace/CPPProjects/cpp_study

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bob/workspace/CPPProjects/cpp_study/build

# Include any dependencies generated for this target.
include CMakeFiles/work_manager.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/work_manager.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/work_manager.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/work_manager.dir/flags.make

CMakeFiles/work_manager.dir/main.cpp.o: CMakeFiles/work_manager.dir/flags.make
CMakeFiles/work_manager.dir/main.cpp.o: /Users/bob/workspace/CPPProjects/cpp_study/main.cpp
CMakeFiles/work_manager.dir/main.cpp.o: CMakeFiles/work_manager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bob/workspace/CPPProjects/cpp_study/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/work_manager.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/work_manager.dir/main.cpp.o -MF CMakeFiles/work_manager.dir/main.cpp.o.d -o CMakeFiles/work_manager.dir/main.cpp.o -c /Users/bob/workspace/CPPProjects/cpp_study/main.cpp

CMakeFiles/work_manager.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/work_manager.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bob/workspace/CPPProjects/cpp_study/main.cpp > CMakeFiles/work_manager.dir/main.cpp.i

CMakeFiles/work_manager.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/work_manager.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bob/workspace/CPPProjects/cpp_study/main.cpp -o CMakeFiles/work_manager.dir/main.cpp.s

CMakeFiles/work_manager.dir/workManager.cpp.o: CMakeFiles/work_manager.dir/flags.make
CMakeFiles/work_manager.dir/workManager.cpp.o: /Users/bob/workspace/CPPProjects/cpp_study/workManager.cpp
CMakeFiles/work_manager.dir/workManager.cpp.o: CMakeFiles/work_manager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bob/workspace/CPPProjects/cpp_study/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/work_manager.dir/workManager.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/work_manager.dir/workManager.cpp.o -MF CMakeFiles/work_manager.dir/workManager.cpp.o.d -o CMakeFiles/work_manager.dir/workManager.cpp.o -c /Users/bob/workspace/CPPProjects/cpp_study/workManager.cpp

CMakeFiles/work_manager.dir/workManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/work_manager.dir/workManager.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bob/workspace/CPPProjects/cpp_study/workManager.cpp > CMakeFiles/work_manager.dir/workManager.cpp.i

CMakeFiles/work_manager.dir/workManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/work_manager.dir/workManager.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bob/workspace/CPPProjects/cpp_study/workManager.cpp -o CMakeFiles/work_manager.dir/workManager.cpp.s

CMakeFiles/work_manager.dir/Employee.cpp.o: CMakeFiles/work_manager.dir/flags.make
CMakeFiles/work_manager.dir/Employee.cpp.o: /Users/bob/workspace/CPPProjects/cpp_study/Employee.cpp
CMakeFiles/work_manager.dir/Employee.cpp.o: CMakeFiles/work_manager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bob/workspace/CPPProjects/cpp_study/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/work_manager.dir/Employee.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/work_manager.dir/Employee.cpp.o -MF CMakeFiles/work_manager.dir/Employee.cpp.o.d -o CMakeFiles/work_manager.dir/Employee.cpp.o -c /Users/bob/workspace/CPPProjects/cpp_study/Employee.cpp

CMakeFiles/work_manager.dir/Employee.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/work_manager.dir/Employee.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bob/workspace/CPPProjects/cpp_study/Employee.cpp > CMakeFiles/work_manager.dir/Employee.cpp.i

CMakeFiles/work_manager.dir/Employee.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/work_manager.dir/Employee.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bob/workspace/CPPProjects/cpp_study/Employee.cpp -o CMakeFiles/work_manager.dir/Employee.cpp.s

CMakeFiles/work_manager.dir/Boss.cpp.o: CMakeFiles/work_manager.dir/flags.make
CMakeFiles/work_manager.dir/Boss.cpp.o: /Users/bob/workspace/CPPProjects/cpp_study/Boss.cpp
CMakeFiles/work_manager.dir/Boss.cpp.o: CMakeFiles/work_manager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bob/workspace/CPPProjects/cpp_study/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/work_manager.dir/Boss.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/work_manager.dir/Boss.cpp.o -MF CMakeFiles/work_manager.dir/Boss.cpp.o.d -o CMakeFiles/work_manager.dir/Boss.cpp.o -c /Users/bob/workspace/CPPProjects/cpp_study/Boss.cpp

CMakeFiles/work_manager.dir/Boss.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/work_manager.dir/Boss.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bob/workspace/CPPProjects/cpp_study/Boss.cpp > CMakeFiles/work_manager.dir/Boss.cpp.i

CMakeFiles/work_manager.dir/Boss.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/work_manager.dir/Boss.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bob/workspace/CPPProjects/cpp_study/Boss.cpp -o CMakeFiles/work_manager.dir/Boss.cpp.s

CMakeFiles/work_manager.dir/Manager.cpp.o: CMakeFiles/work_manager.dir/flags.make
CMakeFiles/work_manager.dir/Manager.cpp.o: /Users/bob/workspace/CPPProjects/cpp_study/Manager.cpp
CMakeFiles/work_manager.dir/Manager.cpp.o: CMakeFiles/work_manager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bob/workspace/CPPProjects/cpp_study/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/work_manager.dir/Manager.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/work_manager.dir/Manager.cpp.o -MF CMakeFiles/work_manager.dir/Manager.cpp.o.d -o CMakeFiles/work_manager.dir/Manager.cpp.o -c /Users/bob/workspace/CPPProjects/cpp_study/Manager.cpp

CMakeFiles/work_manager.dir/Manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/work_manager.dir/Manager.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bob/workspace/CPPProjects/cpp_study/Manager.cpp > CMakeFiles/work_manager.dir/Manager.cpp.i

CMakeFiles/work_manager.dir/Manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/work_manager.dir/Manager.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bob/workspace/CPPProjects/cpp_study/Manager.cpp -o CMakeFiles/work_manager.dir/Manager.cpp.s

# Object files for target work_manager
work_manager_OBJECTS = \
"CMakeFiles/work_manager.dir/main.cpp.o" \
"CMakeFiles/work_manager.dir/workManager.cpp.o" \
"CMakeFiles/work_manager.dir/Employee.cpp.o" \
"CMakeFiles/work_manager.dir/Boss.cpp.o" \
"CMakeFiles/work_manager.dir/Manager.cpp.o"

# External object files for target work_manager
work_manager_EXTERNAL_OBJECTS =

work_manager: CMakeFiles/work_manager.dir/main.cpp.o
work_manager: CMakeFiles/work_manager.dir/workManager.cpp.o
work_manager: CMakeFiles/work_manager.dir/Employee.cpp.o
work_manager: CMakeFiles/work_manager.dir/Boss.cpp.o
work_manager: CMakeFiles/work_manager.dir/Manager.cpp.o
work_manager: CMakeFiles/work_manager.dir/build.make
work_manager: CMakeFiles/work_manager.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bob/workspace/CPPProjects/cpp_study/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable work_manager"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/work_manager.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/work_manager.dir/build: work_manager
.PHONY : CMakeFiles/work_manager.dir/build

CMakeFiles/work_manager.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/work_manager.dir/cmake_clean.cmake
.PHONY : CMakeFiles/work_manager.dir/clean

CMakeFiles/work_manager.dir/depend:
	cd /Users/bob/workspace/CPPProjects/cpp_study/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bob/workspace/CPPProjects/cpp_study /Users/bob/workspace/CPPProjects/cpp_study /Users/bob/workspace/CPPProjects/cpp_study/build /Users/bob/workspace/CPPProjects/cpp_study/build /Users/bob/workspace/CPPProjects/cpp_study/build/CMakeFiles/work_manager.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/work_manager.dir/depend
