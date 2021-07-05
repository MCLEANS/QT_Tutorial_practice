#include "mywindow.h"
#include "ui_mywindow.h"

MyWindow::MyWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyWindow)
{
    ui->setupUi(this);
}

MyWindow::~MyWindow()
{
    delete ui;
}


void MyWindow::on_pushButtonClosed_clicked()
{
    ui->label->setText("You clicked me");
    ui->label->setToolTip("Im here because you clicked the button");
}
