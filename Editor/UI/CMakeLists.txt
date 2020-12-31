
set(UI_SRC WorldEditorGUI.cpp)
set(UI_HDR WorldEditorGUI.h)

add_executable(UI "${UI_SRC};${UI_HDR}")

target_link_libraries(UI ${GTK3_LIBRARIES})