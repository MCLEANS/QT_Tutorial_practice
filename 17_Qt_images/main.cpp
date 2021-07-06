#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    /*
     * Set window fixed size
     */
    w.setFixedSize(700,200);
    w.show();
    return a.exec();
}
