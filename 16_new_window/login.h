#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "dashboard.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushButton_exit_released();

    void on_pushButton_login_clicked();

private:
    Ui::Login *ui;
    const QString NAME = "MCLEANS";
    const QString PASSWORD = "12345";
    Dashboard *dash;


};
#endif // LOGIN_H
