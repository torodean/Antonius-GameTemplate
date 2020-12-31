/********************************************************************************
** Form generated from reading UI file 'WorldEditorGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORLDEDITORGUI_H
#define UI_WORLDEDITORGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WorldEditorGUI
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WorldEditorGUI)
    {
        if (WorldEditorGUI->objectName().isEmpty())
            WorldEditorGUI->setObjectName(QString::fromUtf8("WorldEditorGUI"));
        WorldEditorGUI->resize(800, 600);
        centralwidget = new QWidget(WorldEditorGUI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        WorldEditorGUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WorldEditorGUI);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        WorldEditorGUI->setMenuBar(menubar);
        statusbar = new QStatusBar(WorldEditorGUI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WorldEditorGUI->setStatusBar(statusbar);

        retranslateUi(WorldEditorGUI);

        QMetaObject::connectSlotsByName(WorldEditorGUI);
    } // setupUi

    void retranslateUi(QMainWindow *WorldEditorGUI)
    {
        WorldEditorGUI->setWindowTitle(QCoreApplication::translate("WorldEditorGUI", "WorldEditorGUI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WorldEditorGUI: public Ui_WorldEditorGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORLDEDITORGUI_H
