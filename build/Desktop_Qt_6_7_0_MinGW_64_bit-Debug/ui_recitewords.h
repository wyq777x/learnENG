/********************************************************************************
** Form generated from reading UI file 'recitewords.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECITEWORDS_H
#define UI_RECITEWORDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_recitewords
{
public:

    void setupUi(QDialog *recitewords)
    {
        if (recitewords->objectName().isEmpty())
            recitewords->setObjectName("recitewords");
        recitewords->resize(400, 300);

        retranslateUi(recitewords);

        QMetaObject::connectSlotsByName(recitewords);
    } // setupUi

    void retranslateUi(QDialog *recitewords)
    {
        recitewords->setWindowTitle(QCoreApplication::translate("recitewords", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recitewords: public Ui_recitewords {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECITEWORDS_H
