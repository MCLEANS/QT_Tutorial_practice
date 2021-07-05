#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>

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

