#include "recitewords.h"
#include "ui_recitewords.h"

recitewords::recitewords(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::recitewords)
{
    ui->setupUi(this);
}

recitewords::~recitewords()
{
    delete ui;
}
