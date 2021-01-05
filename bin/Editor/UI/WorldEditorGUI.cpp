
#include <gtk/gtk.h>
#include <iostream>

#include "GUIBase.h"
//#include "WorldEditorGUI.h"

int main(int argc, char *argv[]) {
    std::cout << "Running UI.exe" << std::endl;
    GUIBase program(argc, argv, "glade\\TestWidget.glade", "main_widget");
    program.showWidget();
    return 0;
}