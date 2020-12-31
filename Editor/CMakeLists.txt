
# Include support for GTK Packages.
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)
include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})

# Include subdirectories.
add_subdirectory(FileHandling)
add_subdirectory(UI)

set(WORLDEDITOR_SRC WorldEditor.cpp)
set(WORLDEDITOR_HDR WorldEditor.h)

add_executable(WorldEditor "${WORLDEDITOR_SRC};${WORLDEDITOR_HDR}")