/********************************************************************************
** Form generated from reading UI file 'sys_userprotocsetting.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYS_USERPROTOCSETTING_H
#define UI_SYS_USERPROTOCSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sys_userprotocsetting
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;
    QLabel *label_2;
    QPushButton *pushButton_insert;
    QPushButton *pushButton_add;
    QPushButton *pushButton_save;
    QPushButton *pushButton_delete;
    QComboBox *comboBox_lib;
    QTextEdit *textEdit;
    QComboBox *comboBox_name;
    QLabel *label_3;
    QComboBox *comboBox_number;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboBox_para;
    QComboBox *comboBox_com;
    QLabel *label_6;
    QCheckBox *checkBox_upload;
    QComboBox *comboBox_baud;
    QLabel *label_7;
    QLabel *label_8;
    QComboBox *comboBox_parit;
    QLabel *label_9;
    QComboBox *comboBox_port;
    QLabel *label_10;
    QLineEdit *lineEdit_ip;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;

    void setupUi(QDialog *sys_userprotocsetting)
    {
        if (sys_userprotocsetting->objectName().isEmpty())
            sys_userprotocsetting->setObjectName(QString::fromUtf8("sys_userprotocsetting"));
        sys_userprotocsetting->resize(640, 509);
        label = new QLabel(sys_userprotocsetting);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 30, 91, 17));
        textBrowser = new QTextBrowser(sys_userprotocsetting);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 251, 491));
        label_2 = new QLabel(sys_userprotocsetting);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 70, 91, 17));
        pushButton_insert = new QPushButton(sys_userprotocsetting);
        pushButton_insert->setObjectName(QString::fromUtf8("pushButton_insert"));
        pushButton_insert->setGeometry(QRect(300, 110, 89, 25));
        pushButton_add = new QPushButton(sys_userprotocsetting);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setGeometry(QRect(400, 110, 89, 25));
        pushButton_save = new QPushButton(sys_userprotocsetting);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(520, 110, 51, 25));
        pushButton_delete = new QPushButton(sys_userprotocsetting);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(580, 110, 51, 25));
        comboBox_lib = new QComboBox(sys_userprotocsetting);
        comboBox_lib->addItem(QString());
        comboBox_lib->setObjectName(QString::fromUtf8("comboBox_lib"));
        comboBox_lib->setGeometry(QRect(390, 25, 241, 28));
        comboBox_lib->setEditable(true);
        textEdit = new QTextEdit(sys_userprotocsetting);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(390, 64, 241, 28));
        comboBox_name = new QComboBox(sys_userprotocsetting);
        comboBox_name->setObjectName(QString::fromUtf8("comboBox_name"));
        comboBox_name->setGeometry(QRect(400, 165, 231, 28));
        comboBox_name->setEditable(false);
        comboBox_name->setMaxVisibleItems(3);
        label_3 = new QLabel(sys_userprotocsetting);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(300, 170, 91, 17));
        comboBox_number = new QComboBox(sys_userprotocsetting);
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->addItem(QString());
        comboBox_number->setObjectName(QString::fromUtf8("comboBox_number"));
        comboBox_number->setGeometry(QRect(400, 205, 231, 28));
        comboBox_number->setEditable(false);
        comboBox_number->setMaxVisibleItems(5);
        label_4 = new QLabel(sys_userprotocsetting);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(300, 210, 101, 17));
        label_5 = new QLabel(sys_userprotocsetting);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(300, 250, 101, 17));
        comboBox_para = new QComboBox(sys_userprotocsetting);
        comboBox_para->addItem(QString());
        comboBox_para->setObjectName(QString::fromUtf8("comboBox_para"));
        comboBox_para->setGeometry(QRect(400, 246, 231, 28));
        comboBox_para->setEditable(false);
        comboBox_para->setMaxVisibleItems(5);
        comboBox_com = new QComboBox(sys_userprotocsetting);
        comboBox_com->addItem(QString());
        comboBox_com->addItem(QString());
        comboBox_com->addItem(QString());
        comboBox_com->addItem(QString());
        comboBox_com->addItem(QString());
        comboBox_com->addItem(QString());
        comboBox_com->addItem(QString());
        comboBox_com->addItem(QString());
        comboBox_com->addItem(QString());
        comboBox_com->addItem(QString());
        comboBox_com->addItem(QString());
        comboBox_com->addItem(QString());
        comboBox_com->addItem(QString());
        comboBox_com->addItem(QString());
        comboBox_com->setObjectName(QString::fromUtf8("comboBox_com"));
        comboBox_com->setGeometry(QRect(400, 288, 81, 28));
        comboBox_com->setEditable(false);
        comboBox_com->setMaxVisibleItems(5);
        label_6 = new QLabel(sys_userprotocsetting);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(300, 293, 101, 17));
        checkBox_upload = new QCheckBox(sys_userprotocsetting);
        checkBox_upload->setObjectName(QString::fromUtf8("checkBox_upload"));
        checkBox_upload->setGeometry(QRect(520, 290, 121, 23));
        comboBox_baud = new QComboBox(sys_userprotocsetting);
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->setObjectName(QString::fromUtf8("comboBox_baud"));
        comboBox_baud->setGeometry(QRect(360, 330, 81, 28));
        comboBox_baud->setEditable(false);
        comboBox_baud->setMaxVisibleItems(5);
        label_7 = new QLabel(sys_userprotocsetting);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(300, 335, 101, 17));
        label_8 = new QLabel(sys_userprotocsetting);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(480, 335, 101, 17));
        comboBox_parit = new QComboBox(sys_userprotocsetting);
        comboBox_parit->addItem(QString());
        comboBox_parit->addItem(QString());
        comboBox_parit->addItem(QString());
        comboBox_parit->setObjectName(QString::fromUtf8("comboBox_parit"));
        comboBox_parit->setGeometry(QRect(550, 330, 81, 28));
        comboBox_parit->setEditable(false);
        comboBox_parit->setMaxVisibleItems(5);
        label_9 = new QLabel(sys_userprotocsetting);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(300, 375, 101, 17));
        comboBox_port = new QComboBox(sys_userprotocsetting);
        comboBox_port->addItem(QString());
        comboBox_port->addItem(QString());
        comboBox_port->addItem(QString());
        comboBox_port->setObjectName(QString::fromUtf8("comboBox_port"));
        comboBox_port->setGeometry(QRect(360, 370, 81, 28));
        comboBox_port->setEditable(false);
        comboBox_port->setMaxVisibleItems(5);
        label_10 = new QLabel(sys_userprotocsetting);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(300, 415, 101, 17));
        lineEdit_ip = new QLineEdit(sys_userprotocsetting);
        lineEdit_ip->setObjectName(QString::fromUtf8("lineEdit_ip"));
        lineEdit_ip->setGeometry(QRect(360, 410, 271, 28));
        pushButton = new QPushButton(sys_userprotocsetting);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 460, 70, 35));
        pushButton_2 = new QPushButton(sys_userprotocsetting);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(380, 460, 70, 35));
        pushButton_3 = new QPushButton(sys_userprotocsetting);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(476, 460, 70, 35));
        pushButton_4 = new QPushButton(sys_userprotocsetting);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(567, 460, 70, 35));
        scrollArea = new QScrollArea(sys_userprotocsetting);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(290, 160, 347, 291));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 345, 289));
        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea_2 = new QScrollArea(sys_userprotocsetting);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(290, 10, 347, 131));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 345, 129));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        scrollArea_2->raise();
        scrollArea->raise();
        label->raise();
        textBrowser->raise();
        label_2->raise();
        pushButton_insert->raise();
        pushButton_add->raise();
        pushButton_save->raise();
        pushButton_delete->raise();
        comboBox_lib->raise();
        textEdit->raise();
        comboBox_name->raise();
        label_3->raise();
        comboBox_number->raise();
        label_4->raise();
        label_5->raise();
        comboBox_para->raise();
        comboBox_com->raise();
        label_6->raise();
        checkBox_upload->raise();
        comboBox_baud->raise();
        label_7->raise();
        label_8->raise();
        comboBox_parit->raise();
        label_9->raise();
        comboBox_port->raise();
        label_10->raise();
        lineEdit_ip->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();

        retranslateUi(sys_userprotocsetting);

        QMetaObject::connectSlotsByName(sys_userprotocsetting);
    } // setupUi

    void retranslateUi(QDialog *sys_userprotocsetting)
    {
        sys_userprotocsetting->setWindowTitle(QApplication::translate("sys_userprotocsetting", "Dialog", nullptr));
        label->setText(QApplication::translate("sys_userprotocsetting", "\345\212\250\346\200\201\345\272\223\345\220\215\347\247\260:", nullptr));
        label_2->setText(QApplication::translate("sys_userprotocsetting", "\345\212\250\346\200\201\345\272\223\346\226\207\344\273\266:", nullptr));
        pushButton_insert->setText(QApplication::translate("sys_userprotocsetting", "\345\257\274\345\205\245\345\272\223\346\226\207\344\273\266", nullptr));
        pushButton_add->setText(QApplication::translate("sys_userprotocsetting", "\345\242\236\345\212\240\345\272\223\346\226\207\344\273\266", nullptr));
        pushButton_save->setText(QApplication::translate("sys_userprotocsetting", "\344\277\235\345\255\230", nullptr));
        pushButton_delete->setText(QApplication::translate("sys_userprotocsetting", "\345\210\240\351\231\244", nullptr));
        comboBox_lib->setItemText(0, QApplication::translate("sys_userprotocsetting", "\350\207\252\345\256\232\344\271\2111", nullptr));

        label_3->setText(QApplication::translate("sys_userprotocsetting", "\345\215\217\350\256\256\345\220\215\347\247\260:", nullptr));
        comboBox_number->setItemText(0, QApplication::translate("sys_userprotocsetting", "19", nullptr));
        comboBox_number->setItemText(1, QApplication::translate("sys_userprotocsetting", "20", nullptr));
        comboBox_number->setItemText(2, QApplication::translate("sys_userprotocsetting", "21", nullptr));
        comboBox_number->setItemText(3, QApplication::translate("sys_userprotocsetting", "22", nullptr));
        comboBox_number->setItemText(4, QApplication::translate("sys_userprotocsetting", "23", nullptr));
        comboBox_number->setItemText(5, QApplication::translate("sys_userprotocsetting", "24", nullptr));
        comboBox_number->setItemText(6, QApplication::translate("sys_userprotocsetting", "25", nullptr));
        comboBox_number->setItemText(7, QApplication::translate("sys_userprotocsetting", "26", nullptr));
        comboBox_number->setItemText(8, QApplication::translate("sys_userprotocsetting", "27", nullptr));
        comboBox_number->setItemText(9, QApplication::translate("sys_userprotocsetting", "28", nullptr));
        comboBox_number->setItemText(10, QApplication::translate("sys_userprotocsetting", "29", nullptr));
        comboBox_number->setItemText(11, QApplication::translate("sys_userprotocsetting", "30", nullptr));
        comboBox_number->setItemText(12, QApplication::translate("sys_userprotocsetting", "31", nullptr));
        comboBox_number->setItemText(13, QApplication::translate("sys_userprotocsetting", "32", nullptr));
        comboBox_number->setItemText(14, QApplication::translate("sys_userprotocsetting", "33", nullptr));
        comboBox_number->setItemText(15, QApplication::translate("sys_userprotocsetting", "34", nullptr));
        comboBox_number->setItemText(16, QApplication::translate("sys_userprotocsetting", "35", nullptr));
        comboBox_number->setItemText(17, QApplication::translate("sys_userprotocsetting", "36", nullptr));

        comboBox_number->setCurrentText(QApplication::translate("sys_userprotocsetting", "19", nullptr));
        label_4->setText(QApplication::translate("sys_userprotocsetting", "\351\200\232\350\256\257\345\215\217\350\256\256\345\272\217\345\217\267:", nullptr));
        label_5->setText(QApplication::translate("sys_userprotocsetting", "\351\200\232\350\256\257\345\215\217\350\256\256\345\217\202\346\225\260:", nullptr));
        comboBox_para->setItemText(0, QApplication::translate("sys_userprotocsetting", "\346\227\240", nullptr));

        comboBox_para->setCurrentText(QApplication::translate("sys_userprotocsetting", "\346\227\240", nullptr));
        comboBox_com->setItemText(0, QApplication::translate("sys_userprotocsetting", "\347\275\221\347\273\234\345\217\243", nullptr));
        comboBox_com->setItemText(1, QApplication::translate("sys_userprotocsetting", "COM1", nullptr));
        comboBox_com->setItemText(2, QApplication::translate("sys_userprotocsetting", "COM2", nullptr));
        comboBox_com->setItemText(3, QApplication::translate("sys_userprotocsetting", "COM3", nullptr));
        comboBox_com->setItemText(4, QApplication::translate("sys_userprotocsetting", "COM4", nullptr));
        comboBox_com->setItemText(5, QApplication::translate("sys_userprotocsetting", "COM5", nullptr));
        comboBox_com->setItemText(6, QApplication::translate("sys_userprotocsetting", "COM6", nullptr));
        comboBox_com->setItemText(7, QApplication::translate("sys_userprotocsetting", "COM7", nullptr));
        comboBox_com->setItemText(8, QApplication::translate("sys_userprotocsetting", "COM8", nullptr));
        comboBox_com->setItemText(9, QApplication::translate("sys_userprotocsetting", "COM9", nullptr));
        comboBox_com->setItemText(10, QApplication::translate("sys_userprotocsetting", "COM10", nullptr));
        comboBox_com->setItemText(11, QApplication::translate("sys_userprotocsetting", "COM11", nullptr));
        comboBox_com->setItemText(12, QApplication::translate("sys_userprotocsetting", "COM12", nullptr));
        comboBox_com->setItemText(13, QApplication::translate("sys_userprotocsetting", "COM13", nullptr));

        comboBox_com->setCurrentText(QApplication::translate("sys_userprotocsetting", "\347\275\221\347\273\234\345\217\243", nullptr));
        label_6->setText(QApplication::translate("sys_userprotocsetting", "\351\200\211\347\224\250\351\200\232\344\277\241\345\217\243:", nullptr));
        checkBox_upload->setText(QApplication::translate("sys_userprotocsetting", "\344\270\273\345\212\250\344\270\212\346\212\245\346\225\260\346\215\256", nullptr));
        comboBox_baud->setItemText(0, QApplication::translate("sys_userprotocsetting", "110", nullptr));
        comboBox_baud->setItemText(1, QApplication::translate("sys_userprotocsetting", "300", nullptr));
        comboBox_baud->setItemText(2, QApplication::translate("sys_userprotocsetting", "600", nullptr));
        comboBox_baud->setItemText(3, QApplication::translate("sys_userprotocsetting", "1200", nullptr));
        comboBox_baud->setItemText(4, QApplication::translate("sys_userprotocsetting", "2400", nullptr));
        comboBox_baud->setItemText(5, QApplication::translate("sys_userprotocsetting", "4800", nullptr));
        comboBox_baud->setItemText(6, QApplication::translate("sys_userprotocsetting", "9600", nullptr));
        comboBox_baud->setItemText(7, QApplication::translate("sys_userprotocsetting", "14400", nullptr));
        comboBox_baud->setItemText(8, QApplication::translate("sys_userprotocsetting", "19200", nullptr));
        comboBox_baud->setItemText(9, QApplication::translate("sys_userprotocsetting", "38400", nullptr));
        comboBox_baud->setItemText(10, QApplication::translate("sys_userprotocsetting", "57600", nullptr));
        comboBox_baud->setItemText(11, QApplication::translate("sys_userprotocsetting", "115200", nullptr));

        comboBox_baud->setCurrentText(QApplication::translate("sys_userprotocsetting", "110", nullptr));
        label_7->setText(QApplication::translate("sys_userprotocsetting", "\346\263\242\347\211\271\347\216\207:", nullptr));
        label_8->setText(QApplication::translate("sys_userprotocsetting", "\346\240\241\351\252\214\344\275\215:", nullptr));
        comboBox_parit->setItemText(0, QApplication::translate("sys_userprotocsetting", "\346\227\240\346\240\241\351\252\214", nullptr));
        comboBox_parit->setItemText(1, QApplication::translate("sys_userprotocsetting", "\345\245\207\346\240\241\351\252\214", nullptr));
        comboBox_parit->setItemText(2, QApplication::translate("sys_userprotocsetting", "\345\201\266\346\240\241\351\252\214", nullptr));

        comboBox_parit->setCurrentText(QApplication::translate("sys_userprotocsetting", "\346\227\240\346\240\241\351\252\214", nullptr));
        label_9->setText(QApplication::translate("sys_userprotocsetting", "\347\253\257\345\217\243\345\217\267:", nullptr));
        comboBox_port->setItemText(0, QApplication::translate("sys_userprotocsetting", "0", nullptr));
        comboBox_port->setItemText(1, QApplication::translate("sys_userprotocsetting", "2404", nullptr));
        comboBox_port->setItemText(2, QApplication::translate("sys_userprotocsetting", "2882", nullptr));

        comboBox_port->setCurrentText(QApplication::translate("sys_userprotocsetting", "0", nullptr));
        label_10->setText(QApplication::translate("sys_userprotocsetting", "IP\345\234\260\345\235\200:", nullptr));
        pushButton->setText(QApplication::translate("sys_userprotocsetting", "\345\242\236\345\212\240\345\215\217\350\256\256", nullptr));
        pushButton_2->setText(QApplication::translate("sys_userprotocsetting", "\345\210\240\351\231\244", nullptr));
        pushButton_3->setText(QApplication::translate("sys_userprotocsetting", "\344\277\235\345\255\230", nullptr));
        pushButton_4->setText(QApplication::translate("sys_userprotocsetting", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sys_userprotocsetting: public Ui_sys_userprotocsetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYS_USERPROTOCSETTING_H
