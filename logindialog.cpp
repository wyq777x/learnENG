#include "logindialog.h"

logindialog::logindialog(QWidget *parent):
    QDialog(parent),ui(new Ui::logindialog)
{
    ui->setupUi(this);
    setWindowTitle("用户注册登录");
}

logindialog::~logindialog()
{
    delete ui;
}
