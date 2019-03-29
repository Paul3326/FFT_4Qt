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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_uart_com
{
public:
    QComboBox *serial_port;
    QTextEdit *serial_read;
    QLabel *label;
    QTextEdit *serial_send;
    QLabel *label_send;
    QLabel *label_read;

    void setupUi(QDialog *uart_com)
    {
        if (uart_com->objectName().isEmpty())
            uart_com->setObjectName(QString::fromUtf8("uart_com"));
        uart_com->setWindowModality(Qt::NonModal);
        uart_com->setEnabled(true);
        uart_com->resize(640, 480);
        serial_port = new QComboBox(uart_com);
        serial_port->setObjectName(QString::fromUtf8("serial_port"));
        serial_port->setGeometry(QRect(350, 20, 101, 25));
        serial_read = new QTextEdit(uart_com);
        serial_read->setObjectName(QString::fromUtf8("serial_read"));
        serial_read->setGeometry(QRect(150, 220, 461, 241));
        serial_read->setUndoRedoEnabled(false);
        serial_read->setTextInteractionFlags(Qt::NoTextInteraction);
        label = new QLabel(uart_com);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 20, 41, 17));
        serial_send = new QTextEdit(uart_com);
        serial_send->setObjectName(QString::fromUtf8("serial_send"));
        serial_send->setGeometry(QRect(150, 60, 461, 131));
        serial_send->setUndoRedoEnabled(false);
        serial_send->setTextInteractionFlags(Qt::NoTextInteraction);
        label_send = new QLabel(uart_com);
        label_send->setObjectName(QString::fromUtf8("label_send"));
        label_send->setGeometry(QRect(70, 120, 67, 17));
        label_read = new QLabel(uart_com);
        label_read->setObjectName(QString::fromUtf8("label_read"));
        label_read->setGeometry(QRect(70, 330, 67, 17));

        retranslateUi(uart_com);

        QMetaObject::connectSlotsByName(uart_com);
    } // setupUi

    void retranslateUi(QDialog *uart_com)
    {
        uart_com->setWindowTitle(QApplication::translate("uart_com", "Dialog", nullptr));
        label->setText(QApplication::translate("uart_com", "\344\270\262\345\217\243", nullptr));
        label_send->setText(QApplication::translate("uart_com", "\345\217\221\351\200\201\345\214\272:", nullptr));
        label_read->setText(QApplication::translate("uart_com", "\346\216\245\346\224\266\345\214\272:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uart_com: public Ui_uart_com {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UART_COM_H
