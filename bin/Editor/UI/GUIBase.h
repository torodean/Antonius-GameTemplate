//
// Created by d0sag3 on 12/31/2020.
//

#include <gtk/gtk.h>
#include <string>
#include <iostream>
#include "gmodule.h"

#ifndef GAMEENGINE_GUIBASE_H
#define GAMEENGINE_GUIBASE_H

/**
 * This is a base class for all GUI objects.
 */
class GUIBase
{
public:

    /// Main default constructor for a GUIBase object.
    GUIBase() : builder(nullptr), widget(nullptr)
    {
        builder = gtk_builder_new();
    };

    /// Main default constructor for a GUIBase object.
    GUIBase(int& argc,
            char *argv[],
            const gchar *file,
            const gchar *windowName) :
            widget(nullptr)
    {
        initialize(argc, argv);
        builder = gtk_builder_new();
        addGladeFile(file);
        addWidget(windowName);
        connectSignals();
    };

    /// Main destructor for a GUIBase object.
    ~GUIBase()
    {
        shutdown();
    };

    void showWidget()
    {
        gtk_widget_show(widget);
        gtk_main();
    }

protected:

    static void initialize(int& argc, char *argv[])
    {
        gtk_init(&argc, &argv);
    }

    void addGladeFile(const gchar *file)
    {
        gtk_builder_add_from_file (builder, file, nullptr);
    }

    void addWidget(const gchar *windowName)
    {
        widget = GTK_WIDGET(gtk_builder_get_object(builder, windowName));
    }

    void connectSignals()
    {
        gtk_builder_connect_signals(builder, nullptr);
    }

    void shutdown()
    {
        g_object_unref(builder);
    }

    // Called when window is closed.
    G_MODULE_EXPORT void on_window_main_destroy()
    {
        gtk_main_quit();
    }

private:
    GtkBuilder *builder;
    GtkWidget *widget;
};

#endif //GAMEENGINE_GUIBASE_H
