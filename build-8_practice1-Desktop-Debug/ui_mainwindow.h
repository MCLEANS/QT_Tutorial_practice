/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QTextEdit *textEdit_details;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit_first_name;
    QLabel *label_2;
    QLineEdit *lineEdit_second_name;
    QLabel *label_3;
    QLineEdit *lineEdit_email;
    QLabel *label_4;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_save;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_quit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(852, 261);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_5 = new QHBoxLayout(centralwidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        textEdit_details = new QTextEdit(centralwidget);
        textEdit_details->setObjectName(QString::fromUtf8("textEdit_details"));
        textEdit_details->setEnabled(true);

        verticalLayout->addWidget(textEdit_details);


        horizontalLayout_5->addLayout(verticalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit_first_name = new QLineEdit(centralwidget);
        lineEdit_first_name->setObjectName(QString::fromUtf8("lineEdit_first_name"));
        lineEdit_first_name->setCursor(QCursor(Qt::ArrowCursor));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_first_name);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_second_name = new QLineEdit(centralwidget);
        lineEdit_second_name->setObjectName(QString::fromUtf8("lineEdit_second_name"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_second_name);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_email = new QLineEdit(centralwidget);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_email);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_password);

        pushButton_save = new QPushButton(centralwidget);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));

        formLayout->setWidget(4, QFormLayout::FieldRole, pushButton_save);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));

        formLayout->setLayout(5, QFormLayout::LabelRole, horizontalLayout_4);

        pushButton_quit = new QPushButton(centralwidget);
        pushButton_quit->setObjectName(QString::fromUtf8("pushButton_quit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, pushButton_quit);


        horizontalLayout_5->addLayout(formLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 852, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "McTech Engineering Soln", nullptr));
        label->setText(QApplication::translate("MainWindow", "First Name", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Second Name", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Email", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Password", nullptr));
        pushButton_save->setText(QApplication::translate("MainWindow", "Save", nullptr));
        pushButton_quit->setText(QApplication::translate("MainWindow", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
