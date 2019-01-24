/********************************************************************************
** Form generated from reading UI file 'uart_com.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UART_COM_H
#define UI_UART_COM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_uart_com
{
public:

    void setupUi(QDialog *uart_com)
    {
        if (uart_com->objectName().isEmpty())
            uart_com->setObjectName(QString::fromUtf8("uart_com"));
        uart_com->setWindowModality(Qt::NonModal);
        uart_com->setEnabled(false);
        uart_com->resize(640, 480);

        retranslateUi(uart_com);

        QMetaObject::connectSlotsByName(uart_com);
    } // setupUi

    void retranslateUi(QDialog *uart_com)
    {
        uart_com->setWindowTitle(QApplication::translate("uart_com", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uart_com: public Ui_uart_com {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UART_COM_H
