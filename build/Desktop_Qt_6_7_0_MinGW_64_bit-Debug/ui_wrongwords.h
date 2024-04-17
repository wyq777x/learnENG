/********************************************************************************
** Form generated from reading UI file 'wrongwords.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRONGWORDS_H
#define UI_WRONGWORDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_wrongwords
{
public:

    void setupUi(QDialog *wrongwords)
    {
        if (wrongwords->objectName().isEmpty())
            wrongwords->setObjectName("wrongwords");
        wrongwords->resize(492, 357);

        retranslateUi(wrongwords);

        QMetaObject::connectSlotsByName(wrongwords);
    } // setupUi

    void retranslateUi(QDialog *wrongwords)
    {
        wrongwords->setWindowTitle(QCoreApplication::translate("wrongwords", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wrongwords: public Ui_wrongwords {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRONGWORDS_H
