# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\apps\CLion\ch-0\202.6397.106\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\apps\CLion\ch-0\202.6397.106\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\CS Related\Zhihu-Special-Column\C++\Overloaded_Constructor"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\CS Related\Zhihu-Special-Column\C++\Overloaded_Constructor\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Overloaded_Constructor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Overloaded_Constructor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Overloaded_Constructor.dir/flags.make

CMakeFiles/Overloaded_Constructor.dir/InventoryItem.cpp.obj: CMakeFiles/Overloaded_Constructor.dir/flags.make
CMakeFiles/Overloaded_Constructor.dir/InventoryItem.cpp.obj: ../InventoryItem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\CS Related\Zhihu-Special-Column\C++\Overloaded_Constructor\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Overloaded_Constructor.dir/InventoryItem.cpp.obj"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Overloaded_Constructor.dir\InventoryItem.cpp.obj -c "D:\CS Related\Zhihu-Special-Column\C++\Overloaded_Constructor\InventoryItem.cpp"

CMakeFiles/Overloaded_Constructor.dir/InventoryItem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Overloaded_Constructor.dir/InventoryItem.cpp.i"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\CS Related\Zhihu-Special-Column\C++\Overloaded_Constructor\InventoryItem.cpp" > CMakeFiles\Overloaded_Constructor.dir\InventoryItem.cpp.i

CMakeFiles/Overloaded_Constructor.dir/InventoryItem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Overloaded_Constructor.dir/InventoryItem.cpp.s"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\CS Related\Zhihu-Special-Column\C++\Overloaded_Constructor\InventoryItem.cpp" -o CMakeFiles\Overloaded_Constructor.dir\InventoryItem.cpp.s

# Object files for target Overloaded_Constructor
Overloaded_Constructor_OBJECTS = \
"CMakeFiles/Overloaded_Constructor.dir/InventoryItem.cpp.obj"

# External object files for target Overloaded_Constructor
Overloaded_Constructor_EXTERNAL_OBJECTS =

Overloaded_Constructor.exe: CMakeFiles/Overloaded_Constructor.dir/InventoryItem.cpp.obj
Overloaded_Constructor.exe: CMakeFiles/Overloaded_Constructor.dir/build.make
Overloaded_Constructor.exe: CMakeFiles/Overloaded_Constructor.dir/linklibs.rsp
Overloaded_Constructor.exe: CMakeFiles/Overloaded_Constructor.dir/objects1.rsp
Overloaded_Constructor.exe: CMakeFiles/Overloaded_Constructor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\CS Related\Zhihu-Special-Column\C++\Overloaded_Constructor\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Overloaded_Constructor.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Overloaded_Constructor.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Overloaded_Constructor.dir/build: Overloaded_Constructor.exe

.PHONY : CMakeFiles/Overloaded_Constructor.dir/build

CMakeFiles/Overloaded_Constructor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Overloaded_Constructor.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Overloaded_Constructor.dir/clean

CMakeFiles/Overloaded_Constructor.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\CS Related\Zhihu-Special-Column\C++\Overloaded_Constructor" "D:\CS Related\Zhihu-Special-Column\C++\Overloaded_Constructor" "D:\CS Related\Zhihu-Special-Column\C++\Overloaded_Constructor\cmake-build-debug" "D:\CS Related\Zhihu-Special-Column\C++\Overloaded_Constructor\cmake-build-debug" "D:\CS Related\Zhihu-Special-Column\C++\Overloaded_Constructor\cmake-build-debug\CMakeFiles\Overloaded_Constructor.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Overloaded_Constructor.dir/depend
