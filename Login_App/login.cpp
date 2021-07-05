#include "login.h"
#include "ui_login.h"

#include <QMessageBox>

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}


void Login::on_pushButton_clicked()
{
    if((ui->lineEdit_email->text().isEmpty()) || (ui->lineEdit_password->text().isEmpty())){
        QMessageBox::warning(this,
                             "Required Field",
                             "All fields are requied",
                             QMessageBox::Ok,
                             QMessageBox::Ok);
    }
    else{
        if((ui->lineEdit_email->text() == EMAIL) && (ui->lineEdit_password->text() == PASSWORD)){
            hide();
            dashboard = new Dashboard(this);
            dashboard->show();
        }
        else{
            QMessageBox::warning(this,
                                 "Invalid Login",
                                 "Either Email or Passowrd is invalid, Kindly try again",
                                 QMessageBox::Ok,
                                 QMessageBox::Ok);
            ui->lineEdit_email->clear();
            ui->lineEdit_password->clear();
        }
    }
}
