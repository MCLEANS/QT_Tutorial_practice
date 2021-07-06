#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("/home/mcleans/Desktop/Alphsense_documentation/logo_transparent.png");
    int pix_width = ui->label_logo->width();
    int pix_height = ui->label_logo->height();
    ui->label_logo->setPixmap(pix.scaled(800,200,Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_login_clicked()
{
    /*
     * Check whether there are any empty fields that are required
     */
    if((ui->lineEdit_username->text().isEmpty()) || (ui->lineEdit_password->text().isEmpty())){
        /*
         * Give warning that all fields are required
         */
        QMessageBox::warning(this,
                             tr("Required Field"),
                             tr("Required fields cannot be left empty"),
                             QMessageBox::Ok,
                             QMessageBox::Ok);
    }
    else {
        /*
         * Check whether Login creentials are okay
         */
        if((ui->lineEdit_username->text() == "MCLEANS") && (ui->lineEdit_password->text() == "12345")){
            /*
             * Allow user into the system
             */
        }
        else{
            /*
             * Alert user of invalid login credentials
             */
            QMessageBox::warning(this,
                                 tr("Invalid Login"),
                                 tr("Either the username or password is incorrect. Kindly try again"),
                                 QMessageBox::Ok,
                                 QMessageBox::Ok);
            ui->lineEdit_username->clear();
            ui->lineEdit_password->clear();
        }
    }
}
