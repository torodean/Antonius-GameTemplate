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
include Characters/CMakeFiles/CHARACTER_LIB.dir/depend.make

# Include the progress variables for this target.
include Characters/CMakeFiles/CHARACTER_LIB.dir/progress.make

# Include the compile flags for this target's objects.
include Characters/CMakeFiles/CHARACTER_LIB.dir/flags.make

Characters/CMakeFiles/CHARACTER_LIB.dir/CharacterBase.cpp.obj: Characters/CMakeFiles/CHARACTER_LIB.dir/flags.make
Characters/CMakeFiles/CHARACTER_LIB.dir/CharacterBase.cpp.obj: ../Characters/CharacterBase.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Characters/CMakeFiles/CHARACTER_LIB.dir/CharacterBase.cpp.obj"
	cd /d C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\Characters && C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CHARACTER_LIB.dir\CharacterBase.cpp.obj -c C:\cygwin64\home\d0sag3\Antonius-GameTemplate\Characters\CharacterBase.cpp

Characters/CMakeFiles/CHARACTER_LIB.dir/CharacterBase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CHARACTER_LIB.dir/CharacterBase.cpp.i"
	cd /d C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\Characters && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\cygwin64\home\d0sag3\Antonius-GameTemplate\Characters\CharacterBase.cpp > CMakeFiles\CHARACTER_LIB.dir\CharacterBase.cpp.i

Characters/CMakeFiles/CHARACTER_LIB.dir/CharacterBase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CHARACTER_LIB.dir/CharacterBase.cpp.s"
	cd /d C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\Characters && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\cygwin64\home\d0sag3\Antonius-GameTemplate\Characters\CharacterBase.cpp -o CMakeFiles\CHARACTER_LIB.dir\CharacterBase.cpp.s

Characters/CMakeFiles/CHARACTER_LIB.dir/CharacterNPC.cpp.obj: Characters/CMakeFiles/CHARACTER_LIB.dir/flags.make
Characters/CMakeFiles/CHARACTER_LIB.dir/CharacterNPC.cpp.obj: ../Characters/CharacterNPC.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Characters/CMakeFiles/CHARACTER_LIB.dir/CharacterNPC.cpp.obj"
	cd /d C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\Characters && C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CHARACTER_LIB.dir\CharacterNPC.cpp.obj -c C:\cygwin64\home\d0sag3\Antonius-GameTemplate\Characters\CharacterNPC.cpp

Characters/CMakeFiles/CHARACTER_LIB.dir/CharacterNPC.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CHARACTER_LIB.dir/CharacterNPC.cpp.i"
	cd /d C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\Characters && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\cygwin64\home\d0sag3\Antonius-GameTemplate\Characters\CharacterNPC.cpp > CMakeFiles\CHARACTER_LIB.dir\CharacterNPC.cpp.i

Characters/CMakeFiles/CHARACTER_LIB.dir/CharacterNPC.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CHARACTER_LIB.dir/CharacterNPC.cpp.s"
	cd /d C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\Characters && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\cygwin64\home\d0sag3\Antonius-GameTemplate\Characters\CharacterNPC.cpp -o CMakeFiles\CHARACTER_LIB.dir\CharacterNPC.cpp.s

Characters/CMakeFiles/CHARACTER_LIB.dir/CharacterPlayer.cpp.obj: Characters/CMakeFiles/CHARACTER_LIB.dir/flags.make
Characters/CMakeFiles/CHARACTER_LIB.dir/CharacterPlayer.cpp.obj: ../Characters/CharacterPlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Characters/CMakeFiles/CHARACTER_LIB.dir/CharacterPlayer.cpp.obj"
	cd /d C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\Characters && C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CHARACTER_LIB.dir\CharacterPlayer.cpp.obj -c C:\cygwin64\home\d0sag3\Antonius-GameTemplate\Characters\CharacterPlayer.cpp

Characters/CMakeFiles/CHARACTER_LIB.dir/CharacterPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CHARACTER_LIB.dir/CharacterPlayer.cpp.i"
	cd /d C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\Characters && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\cygwin64\home\d0sag3\Antonius-GameTemplate\Characters\CharacterPlayer.cpp > CMakeFiles\CHARACTER_LIB.dir\CharacterPlayer.cpp.i

Characters/CMakeFiles/CHARACTER_LIB.dir/CharacterPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CHARACTER_LIB.dir/CharacterPlayer.cpp.s"
	cd /d C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\Characters && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\cygwin64\home\d0sag3\Antonius-GameTemplate\Characters\CharacterPlayer.cpp -o CMakeFiles\CHARACTER_LIB.dir\CharacterPlayer.cpp.s

# Object files for target CHARACTER_LIB
CHARACTER_LIB_OBJECTS = \
"CMakeFiles/CHARACTER_LIB.dir/CharacterBase.cpp.obj" \
"CMakeFiles/CHARACTER_LIB.dir/CharacterNPC.cpp.obj" \
"CMakeFiles/CHARACTER_LIB.dir/CharacterPlayer.cpp.obj"

# External object files for target CHARACTER_LIB
CHARACTER_LIB_EXTERNAL_OBJECTS =

Characters/libCHARACTER_LIB.a: Characters/CMakeFiles/CHARACTER_LIB.dir/CharacterBase.cpp.obj
Characters/libCHARACTER_LIB.a: Characters/CMakeFiles/CHARACTER_LIB.dir/CharacterNPC.cpp.obj
Characters/libCHARACTER_LIB.a: Characters/CMakeFiles/CHARACTER_LIB.dir/CharacterPlayer.cpp.obj
Characters/libCHARACTER_LIB.a: Characters/CMakeFiles/CHARACTER_LIB.dir/build.make
Characters/libCHARACTER_LIB.a: Characters/CMakeFiles/CHARACTER_LIB.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libCHARACTER_LIB.a"
	cd /d C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\Characters && $(CMAKE_COMMAND) -P CMakeFiles\CHARACTER_LIB.dir\cmake_clean_target.cmake
	cd /d C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\Characters && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CHARACTER_LIB.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Characters/CMakeFiles/CHARACTER_LIB.dir/build: Characters/libCHARACTER_LIB.a

.PHONY : Characters/CMakeFiles/CHARACTER_LIB.dir/build

Characters/CMakeFiles/CHARACTER_LIB.dir/clean:
	cd /d C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\Characters && $(CMAKE_COMMAND) -P CMakeFiles\CHARACTER_LIB.dir\cmake_clean.cmake
.PHONY : Characters/CMakeFiles/CHARACTER_LIB.dir/clean

Characters/CMakeFiles/CHARACTER_LIB.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\cygwin64\home\d0sag3\Antonius-GameTemplate C:\cygwin64\home\d0sag3\Antonius-GameTemplate\Characters C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\Characters C:\cygwin64\home\d0sag3\Antonius-GameTemplate\cmake-build-release\Characters\CMakeFiles\CHARACTER_LIB.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Characters/CMakeFiles/CHARACTER_LIB.dir/depend

