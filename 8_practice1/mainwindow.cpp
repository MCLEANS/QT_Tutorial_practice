#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_quit_released()
{
    QApplication::quit();
}

void MainWindow::on_pushButton_save_clicked()
{
    if(ui->lineEdit_password->text().isEmpty()){
        int ret = QMessageBox::warning(this,
                                       tr("Error"),
                                       tr("Password field cannot be empty"),
                                       QMessageBox::Ok,
                                       QMessageBox::Ok);
    }
    else if(ui->lineEdit_first_name->text().isEmpty()){
        int ret = QMessageBox::warning(this,
                                       tr("Error"),
                                       tr("Name field cannot be empty"),
                                       QMessageBox::Ok,
                                       QMessageBox::Ok);
    }
    else if(ui->lineEdit_second_name->text().isEmpty()){
        int ret = QMessageBox::warning(this,
                                       tr("Error"),
                                       tr("Name field cannot be empty"),
                                       QMessageBox::Ok,
                                       QMessageBox::Ok);
    }
    else if(ui->lineEdit_email->text().isEmpty()){
        int ret = QMessageBox::warning(this,
                                       tr("Error"),
                                       tr("Email field cannot be empty"),
                                       QMessageBox::Ok,
                                       QMessageBox::Ok);
    }
    else{
        QMessageBox::StandardButton ret = QMessageBox::information(this,
                                                                   tr("Verify"),
                                                                   tr("Saving is confirmation that your details can be used publicly for open-source purposes"),
                                                                   QMessageBox::Save | QMessageBox::Discard,
                                                                   QMessageBox::Save);
        QString first_name;
        QString second_name;
        QString email;
        QString password;
        QString content;

        switch(ret){
            case QMessageBox::Discard:
                ui->textEdit_details->setPlainText("Information not saved");
                break;
            case QMessageBox::Save:
                first_name = ui->lineEdit_first_name->text();
                ui->lineEdit_first_name->clear();
                second_name = ui->lineEdit_second_name->text();
                ui->lineEdit_second_name->clear();
                email = ui->lineEdit_email->text();
                ui->lineEdit_email->clear();
                password = ui->lineEdit_password->text();
                ui->lineEdit_password->clear();
                content = "Hi "+first_name+" "+second_name+",\n\n  Your delails have been saved successfully, we will contact you using the email "+email+" once your data is ready. \n\n  Kind Regards";
                ui->textEdit_details->setText(content);
            default:
                break;
        };
    }
}
