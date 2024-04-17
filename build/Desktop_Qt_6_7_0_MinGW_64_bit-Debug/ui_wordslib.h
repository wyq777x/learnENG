/********************************************************************************
** Form generated from reading UI file 'wordslib.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORDSLIB_H
#define UI_WORDSLIB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_wordslib
{
public:

    void setupUi(QDialog *wordslib)
    {
        if (wordslib->objectName().isEmpty())
            wordslib->setObjectName("wordslib");
        wordslib->resize(518, 385);

        retranslateUi(wordslib);

        QMetaObject::connectSlotsByName(wordslib);
    } // setupUi

    void retranslateUi(QDialog *wordslib)
    {
        wordslib->setWindowTitle(QCoreApplication::translate("wordslib", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wordslib: public Ui_wordslib {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORDSLIB_H
