/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnsign;
    QPushButton *btntowordslib;
    QPushButton *btnrecite;
    QPushButton *btnwrongword;
    QPushButton *btnexit;
    QPushButton *btnlastmark;
    QTextEdit *signtext;
    QTextEdit *title;
    QLCDNumber *lcdsigntime;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(622, 433);
        MainWindow->setFocusPolicy(Qt::StrongFocus);
        MainWindow->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btnsign = new QPushButton(centralwidget);
        btnsign->setObjectName("btnsign");
        btnsign->setGeometry(QRect(480, 20, 101, 51));
        QFont font;
        font.setPointSize(12);
        btnsign->setFont(font);
        btntowordslib = new QPushButton(centralwidget);
        btntowordslib->setObjectName("btntowordslib");
        btntowordslib->setGeometry(QRect(480, 90, 101, 51));
        btntowordslib->setFont(font);
        btnrecite = new QPushButton(centralwidget);
        btnrecite->setObjectName("btnrecite");
        btnrecite->setGeometry(QRect(210, 310, 191, 61));
        btnrecite->setFont(font);
        btnwrongword = new QPushButton(centralwidget);
        btnwrongword->setObjectName("btnwrongword");
        btnwrongword->setGeometry(QRect(480, 160, 101, 51));
        btnwrongword->setFont(font);
        btnexit = new QPushButton(centralwidget);
        btnexit->setObjectName("btnexit");
        btnexit->setGeometry(QRect(490, 320, 101, 51));
        btnexit->setFont(font);
        btnlastmark = new QPushButton(centralwidget);
        btnlastmark->setObjectName("btnlastmark");
        btnlastmark->setGeometry(QRect(480, 230, 101, 51));
        btnlastmark->setFont(font);
        signtext = new QTextEdit(centralwidget);
        signtext->setObjectName("signtext");
        signtext->setGeometry(QRect(10, 130, 271, 61));
        title = new QTextEdit(centralwidget);
        title->setObjectName("title");
        title->setGeometry(QRect(180, 10, 291, 64));
        lcdsigntime = new QLCDNumber(centralwidget);
        lcdsigntime->setObjectName("lcdsigntime");
        lcdsigntime->setGeometry(QRect(10, 130, 271, 61));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 622, 19));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnsign->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\241", nullptr));
        btntowordslib->setText(QCoreApplication::translate("MainWindow", "\350\256\277\351\227\256\350\257\215\345\272\223", nullptr));
        btnrecite->setText(QCoreApplication::translate("MainWindow", "\350\203\214\350\257\265\345\215\225\350\257\215", nullptr));
        btnwrongword->setText(QCoreApplication::translate("MainWindow", "\351\224\231\350\257\215\346\234\254", nullptr));
        btnexit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
        btnlastmark->setText(QCoreApplication::translate("MainWindow", "\344\270\212\346\254\241\350\203\214\350\257\265\346\210\220\347\273\251", nullptr));
        signtext->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:22pt;\">\345\267\262\347\273\217\346\211\223\345\215\241\345\244\251\346\225\260\357\274\232</span></p></body></html>", nullptr));
        title->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">\350\203\214\345\215\225\350\257\215\350\275\257\344\273\266Ver1.0</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
