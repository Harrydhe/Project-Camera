/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_stop_camera;
    QPushButton *pushButton_start_camera;
    QWidget *widget_camera;
    QPushButton *pushButton_capture_image;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(916, 671);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        pushButton_stop_camera = new QPushButton(centralwidget);
        pushButton_stop_camera->setObjectName("pushButton_stop_camera");

        gridLayout->addWidget(pushButton_stop_camera, 0, 1, 1, 1);

        pushButton_start_camera = new QPushButton(centralwidget);
        pushButton_start_camera->setObjectName("pushButton_start_camera");

        gridLayout->addWidget(pushButton_start_camera, 0, 0, 1, 1);

        widget_camera = new QWidget(centralwidget);
        widget_camera->setObjectName("widget_camera");

        gridLayout->addWidget(widget_camera, 2, 0, 1, 2);

        pushButton_capture_image = new QPushButton(centralwidget);
        pushButton_capture_image->setObjectName("pushButton_capture_image");

        gridLayout->addWidget(pushButton_capture_image, 1, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 916, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_stop_camera->setText(QCoreApplication::translate("MainWindow", "Stop Camera", nullptr));
        pushButton_start_camera->setText(QCoreApplication::translate("MainWindow", "Start Camera", nullptr));
        pushButton_capture_image->setText(QCoreApplication::translate("MainWindow", "Capture Image", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
