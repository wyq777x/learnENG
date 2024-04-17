#include "mainwindow.h"
#include "ui_mainwindow.h"



int n=0;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);  //创建窗口UI
    setWindowTitle("learnENG");//设置标题
    QString iconpath=":/image/learneng.ico";
    QIcon icon(iconpath);//将上方的图标路径传给QIcon变量以设置图标
    this->setWindowIcon(icon);


}

MainWindow::~MainWindow()
{
    delete ui;
}
//以下是信号槽部分，均为几个QPushButton的槽函数
void MainWindow::on_btnsign_clicked()
{
    //打卡按钮的槽函数
    n++;
//下面是一个LCD计数器
    ui->lcdsigntime->display(n);
    QMessageBox::information(this, tr("Success"), tr("打卡成功"));
}


void MainWindow::on_btnexit_clicked()
{//退出程序

    exit(0);
}


void MainWindow::on_btnlastmark_clicked()
{
    //提示上次背单词的成绩

}


void MainWindow::on_btnwrongword_clicked()
{
    //进入错题本
    wrongwords.show();
    wrongwords.raise();

}


void MainWindow::on_btntowordslib_clicked()
{
    //进入词库
    wordslib.show();
    wordslib.raise();

}


void MainWindow::on_btnrecite_clicked()
{
    //进入背单词界面
    recitewords.show();
    recitewords.raise();
}

