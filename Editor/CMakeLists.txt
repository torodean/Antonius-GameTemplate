
add_subdirectory(FileHandling)
add_subdirectory(UI)

set(WORLDEDITOR_SRC WorldEditor.cpp)
set(WORLDEDITOR_HDR WorldEditor.h)

add_executable(WorldEditor "${WORLDEDITOR_SRC};${WORLDEDITOR_HDR}")