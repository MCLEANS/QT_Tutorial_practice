#include "login.h"
#include "ui_login.h"

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
   /* Dialog dialog;
    dialog.setModal(true);
    dialog.exec();
    */
    my_dash = new dashboard(this);
    my_dash->show();
}
