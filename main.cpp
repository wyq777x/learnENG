#include "mainwindow.h"
#include "logindialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    logindialog loginpage;
    if(loginpage.exec()==QDialog::Accepted)
    {
    w.show();
    return a.exec();
}
    else return 1;
}
