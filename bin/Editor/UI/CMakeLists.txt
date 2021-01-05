
set(GLADE_FILES glade/TestWidget.glade)

set(UI_SRC GUIBase.cpp WorldEditorGUI.cpp)
set(UI_HDR GUIBase.h WorldEditorGUI.h)

add_executable(UI "${UI_SRC};${UI_HDR};${GLADE_FILES}")

target_link_libraries(UI ${GTK3_LIBRARIES})