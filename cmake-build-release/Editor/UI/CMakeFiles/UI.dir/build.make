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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\cygwin64\home\d0sag3\Antonius-GameTemplate

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release

# Include any dependencies generated for this target.
include Editor/UI/CMakeFiles/UI.dir/depend.make

# Include the progress variables for this target.
include Editor/UI/CMakeFiles/UI.dir/progress.make

# Include the compile flags for this target's objects.
include Editor/UI/CMakeFiles/UI.dir/flags.make

Editor/UI/CMakeFiles/UI.dir/WorldEditorGUI.cpp.obj: Editor/UI/CMakeFiles/UI.dir/flags.make
Editor/UI/CMakeFiles/UI.dir/WorldEditorGUI.cpp.obj: Editor/UI/CMakeFiles/UI.dir/includes_CXX.rsp
Editor/UI/CMakeFiles/UI.dir/WorldEditorGUI.cpp.obj: ../Editor/UI/WorldEditorGUI.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Editor/UI/CMakeFiles/UI.dir/WorldEditorGUI.cpp.obj"
	cd /d C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\Editor\UI && C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\UI.dir\WorldEditorGUI.cpp.obj -c C:\cygwin64\home\d0sag3\Antonius-GameTemplate\Editor\UI\WorldEditorGUI.cpp

Editor/UI/CMakeFiles/UI.dir/WorldEditorGUI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UI.dir/WorldEditorGUI.cpp.i"
	cd /d C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\Editor\UI && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\cygwin64\home\d0sag3\Antonius-GameTemplate\Editor\UI\WorldEditorGUI.cpp > CMakeFiles\UI.dir\WorldEditorGUI.cpp.i

Editor/UI/CMakeFiles/UI.dir/WorldEditorGUI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UI.dir/WorldEditorGUI.cpp.s"
	cd /d C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\Editor\UI && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\cygwin64\home\d0sag3\Antonius-GameTemplate\Editor\UI\WorldEditorGUI.cpp -o CMakeFiles\UI.dir\WorldEditorGUI.cpp.s

# Object files for target UI
UI_OBJECTS = \
"CMakeFiles/UI.dir/WorldEditorGUI.cpp.obj"

# External object files for target UI
UI_EXTERNAL_OBJECTS =

Editor/UI/UI.exe: Editor/UI/CMakeFiles/UI.dir/WorldEditorGUI.cpp.obj
Editor/UI/UI.exe: Editor/UI/CMakeFiles/UI.dir/build.make
Editor/UI/UI.exe: Editor/UI/CMakeFiles/UI.dir/linklibs.rsp
Editor/UI/UI.exe: Editor/UI/CMakeFiles/UI.dir/objects1.rsp
Editor/UI/UI.exe: Editor/UI/CMakeFiles/UI.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable UI.exe"
	cd /d C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\Editor\UI && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\UI.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Editor/UI/CMakeFiles/UI.dir/build: Editor/UI/UI.exe

.PHONY : Editor/UI/CMakeFiles/UI.dir/build

Editor/UI/CMakeFiles/UI.dir/clean:
	cd /d C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\Editor\UI && $(CMAKE_COMMAND) -P CMakeFiles\UI.dir\cmake_clean.cmake
.PHONY : Editor/UI/CMakeFiles/UI.dir/clean

Editor/UI/CMakeFiles/UI.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\cygwin64\home\d0sag3\Antonius-GameTemplate C:\cygwin64\home\d0sag3\Antonius-GameTemplate\Editor\UI C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\Editor\UI C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\Editor\UI\CMakeFiles\UI.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Editor/UI/CMakeFiles/UI.dir/depend

