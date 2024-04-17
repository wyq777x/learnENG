#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("learnENG");
    QString iconpath=":/image/learneng.ico";
    QIcon icon(iconpath);
    this->setWindowIcon(icon);
    int signtime=0;


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnsign_clicked()
{

}


void MainWindow::on_btnexit_clicked()
{

    exit(0);
}


void MainWindow::on_btnlastmark_clicked()
{

}


void MainWindow::on_btnwrongword_clicked()
{
    wrongwords.show();
    wrongwords.raise();

}


void MainWindow::on_btntowordslib_clicked()
{
    wordslib.show();
    wordslib.raise();

}


void MainWindow::on_btnrecite_clicked()
{
    recitewords.show();
    recitewords.raise();
}

