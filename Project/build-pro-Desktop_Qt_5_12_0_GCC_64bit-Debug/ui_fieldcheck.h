/********************************************************************************
** Form generated from reading UI file 'fieldcheck.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIELDCHECK_H
#define UI_FIELDCHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_fieldcheck
{
public:

    void setupUi(QDialog *fieldcheck)
    {
        if (fieldcheck->objectName().isEmpty())
            fieldcheck->setObjectName(QString::fromUtf8("fieldcheck"));
        fieldcheck->resize(640, 480);

        retranslateUi(fieldcheck);

        QMetaObject::connectSlotsByName(fieldcheck);
    } // setupUi

    void retranslateUi(QDialog *fieldcheck)
    {
        fieldcheck->setWindowTitle(QApplication::translate("fieldcheck", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fieldcheck: public Ui_fieldcheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIELDCHECK_H
