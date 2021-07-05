#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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


void MainWindow::on_pushButton_clicked()
{
    int ret = QMessageBox::question(this,
                                         tr("Aditional Info"),
                                         tr("Clicking Yes means that you have read the terms and conditions of engagements"),
                                         QMessageBox::Yes | QMessageBox::No,
                                         QMessageBox::Yes);

    switch(ret){
    case QMessageBox::Yes:
        /* Do Something */
        ui->textEdit->setText("You have chosen Yes");
        ui->checkBox_Yes->setChecked(true);
        ui->checkBox_No->setChecked(false);

        break;
    case QMessageBox::No:
        /* Do something */
        ui->textEdit->setText("You have chosen No");
        ui->checkBox_No->setChecked(true);
        ui->checkBox_Yes->setChecked(false);
        break;
    default:
        /* Should never be reached */
        break;
    };
}
