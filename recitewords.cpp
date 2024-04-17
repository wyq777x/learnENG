#include "recitewords.h"
#include "ui_recitewords.h"

recitewords::recitewords(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::recitewords)
{
    ui->setupUi(this);
    this->setWindowTitle("背单词");
    QString iconpath=":/image/learneng.ico";
    QIcon icon(iconpath);
    this->setWindowIcon(icon);
}

recitewords::~recitewords()
{
    delete ui;
}
