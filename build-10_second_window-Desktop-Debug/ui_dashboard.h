/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dashboard
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *dashboard)
    {
        if (dashboard->objectName().isEmpty())
            dashboard->setObjectName(QString::fromUtf8("dashboard"));
        dashboard->resize(800, 600);
        menubar = new QMenuBar(dashboard);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        dashboard->setMenuBar(menubar);
        centralwidget = new QWidget(dashboard);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        dashboard->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(dashboard);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        dashboard->setStatusBar(statusbar);

        retranslateUi(dashboard);

        QMetaObject::connectSlotsByName(dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *dashboard)
    {
        dashboard->setWindowTitle(QApplication::translate("dashboard", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboard: public Ui_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
