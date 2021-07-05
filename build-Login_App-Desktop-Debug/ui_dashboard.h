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
#include <QtWidgets/QDial>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;
    QHBoxLayout *horizontalLayout;
    QDial *dial;
    QDial *dial_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName(QString::fromUtf8("Dashboard"));
        Dashboard->resize(733, 467);
        centralwidget = new QWidget(Dashboard);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 10, 461, 81));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 110, 621, 301));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        progressBar = new QProgressBar(widget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);

        progressBar_2 = new QProgressBar(widget);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setValue(24);

        verticalLayout->addWidget(progressBar_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        dial = new QDial(widget);
        dial->setObjectName(QString::fromUtf8("dial"));

        horizontalLayout->addWidget(dial);

        dial_2 = new QDial(widget);
        dial_2->setObjectName(QString::fromUtf8("dial_2"));

        horizontalLayout->addWidget(dial_2);


        verticalLayout_2->addLayout(horizontalLayout);

        Dashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Dashboard);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 733, 22));
        Dashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(Dashboard);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Dashboard->setStatusBar(statusbar);

        retranslateUi(Dashboard);
        QObject::connect(dial_2, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));
        QObject::connect(dial, SIGNAL(valueChanged(int)), progressBar_2, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *Dashboard)
    {
        Dashboard->setWindowTitle(QApplication::translate("Dashboard", "MainWindow", nullptr));
        label->setText(QApplication::translate("Dashboard", "McTech Engineerng Solutions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
