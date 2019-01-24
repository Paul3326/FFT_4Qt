/********************************************************************************
** Form generated from reading UI file 'sys_timesync.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYS_TIMESYNC_H
#define UI_SYS_TIMESYNC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_sys_timesync
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_read;
    QPushButton *pushButton_write;
    QPushButton *pushButton_quit;
    QTextEdit *textEdit_sys;
    QLineEdit *lineEdit_input;

    void setupUi(QDialog *sys_timesync)
    {
        if (sys_timesync->objectName().isEmpty())
            sys_timesync->setObjectName(QString::fromUtf8("sys_timesync"));
        sys_timesync->resize(397, 203);
        label = new QLabel(sys_timesync);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 67, 17));
        label_2 = new QLabel(sys_timesync);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 80, 67, 17));
        pushButton_read = new QPushButton(sys_timesync);
        pushButton_read->setObjectName(QString::fromUtf8("pushButton_read"));
        pushButton_read->setGeometry(QRect(20, 140, 89, 30));
        pushButton_write = new QPushButton(sys_timesync);
        pushButton_write->setObjectName(QString::fromUtf8("pushButton_write"));
        pushButton_write->setGeometry(QRect(150, 140, 89, 30));
        pushButton_quit = new QPushButton(sys_timesync);
        pushButton_quit->setObjectName(QString::fromUtf8("pushButton_quit"));
        pushButton_quit->setGeometry(QRect(290, 140, 89, 30));
        textEdit_sys = new QTextEdit(sys_timesync);
        textEdit_sys->setObjectName(QString::fromUtf8("textEdit_sys"));
        textEdit_sys->setGeometry(QRect(110, 25, 211, 31));
        lineEdit_input = new QLineEdit(sys_timesync);
        lineEdit_input->setObjectName(QString::fromUtf8("lineEdit_input"));
        lineEdit_input->setGeometry(QRect(110, 70, 211, 31));

        retranslateUi(sys_timesync);

        QMetaObject::connectSlotsByName(sys_timesync);
    } // setupUi

    void retranslateUi(QDialog *sys_timesync)
    {
        sys_timesync->setWindowTitle(QApplication::translate("sys_timesync", "Dialog", nullptr));
        label->setText(QApplication::translate("sys_timesync", "\345\275\223\345\211\215\346\227\266\351\227\264:", nullptr));
        label_2->setText(QApplication::translate("sys_timesync", "\350\276\223\345\205\245\346\227\266\351\227\264:", nullptr));
        pushButton_read->setText(QApplication::translate("sys_timesync", "\350\257\273\345\217\226\346\227\266\351\222\237", nullptr));
        pushButton_write->setText(QApplication::translate("sys_timesync", "\345\206\231\345\205\245\346\227\266\351\222\237", nullptr));
        pushButton_quit->setText(QApplication::translate("sys_timesync", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sys_timesync: public Ui_sys_timesync {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYS_TIMESYNC_H
