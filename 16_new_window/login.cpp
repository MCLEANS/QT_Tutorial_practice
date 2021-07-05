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


void Login::on_pushButton_exit_released()
{
    QApplication::quit();
}

void Login::on_pushButton_login_clicked()
{
    /*
     * Check if any of the required fields is empty and give warning
     */
    if((ui->lineEdit_name->text().isEmpty()) || (ui->lineEdit_password->text().isEmpty())){
        /*
         * Produce a warning message box
         */
        QMessageBox::warning(this,
                             tr("System Warning"),
                             tr("Required fields cannot be left blank"),
                             QMessageBox::Ok,
                             QMessageBox::Ok);
    }
    else{
        /*
         * Verify user credentials
         */
        if((ui->lineEdit_name->text() == NAME) && ui->lineEdit_password->text() == PASSWORD){
            /*
             * Go to the new page
             */
            hide();
            dash = new Dashboard(this);
            dash->show();
        }
        else{
            /*
             * Give warning for incorrect details
             */
            QMessageBox::warning(this,
                                 tr("System Warning"),
                                 tr("Either username or password is incorrect. Kindly verify and try again"),
                                 QMessageBox::Ok,
                                 QMessageBox::Ok);
            ui->lineEdit_name->clear();
            ui->lineEdit_password->clear();
        }
    }


}
