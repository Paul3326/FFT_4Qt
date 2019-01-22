/********************************************************************************
** Form generated from reading UI file 'sys_protocsetting.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYS_PROTOCSETTING_H
#define UI_SYS_PROTOCSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_sys_protocsetting
{
public:
    QTextEdit *textEdit_101slave;
    QLabel *label;
    QTextEdit *textEdit_101pub;
    QLabel *label_2;
    QRadioButton *radioButton_16bit;
    QRadioButton *radioButton_12bit;
    QRadioButton *radioButton_singel;
    QRadioButton *radioButton_double;
    QRadioButton *radioButton_inorder;
    QRadioButton *radioButton_unorder;
    QRadioButton *radioButton_balance;
    QRadioButton *radioButton_unbalance;
    QTextEdit *textEdit_cdt;
    QLabel *label_3;
    QTextEdit *textEdit_cdt92;
    QLabel *label_4;
    QTextEdit *textEdit_1801;
    QLabel *label_5;
    QTextEdit *textEdit_dnp30slave;
    QLabel *label_6;
    QRadioButton *radioButton_eb90;
    QRadioButton *radioButton_d709;
    QTextEdit *textEdit_104;
    QLabel *label_7;
    QLabel *label_8;
    QTextEdit *textEdit_dnp30master;
    QLabel *label_9;
    QTextEdit *textEdit_modbus;
    QRadioButton *radioButton_104;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QPushButton *pushButton_read;
    QPushButton *pushButton_save;
    QPushButton *pushButton_default;
    QPushButton *pushButton_empty;
    QPushButton *pushButton_upload;
    QPushButton *pushButton_download;
    QPushButton *pushButton_quit;

    void setupUi(QDialog *sys_protocsetting)
    {
        if (sys_protocsetting->objectName().isEmpty())
            sys_protocsetting->setObjectName(QString::fromUtf8("sys_protocsetting"));
        sys_protocsetting->resize(640, 583);
        textEdit_101slave = new QTextEdit(sys_protocsetting);
        textEdit_101slave->setObjectName(QString::fromUtf8("textEdit_101slave"));
        textEdit_101slave->setGeometry(QRect(120, 24, 81, 33));
        label = new QLabel(sys_protocsetting);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 101, 17));
        textEdit_101pub = new QTextEdit(sys_protocsetting);
        textEdit_101pub->setObjectName(QString::fromUtf8("textEdit_101pub"));
        textEdit_101pub->setGeometry(QRect(440, 24, 81, 33));
        label_2 = new QLabel(sys_protocsetting);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(340, 30, 101, 17));
        radioButton_16bit = new QRadioButton(sys_protocsetting);
        radioButton_16bit->setObjectName(QString::fromUtf8("radioButton_16bit"));
        radioButton_16bit->setGeometry(QRect(20, 70, 112, 23));
        radioButton_12bit = new QRadioButton(sys_protocsetting);
        radioButton_12bit->setObjectName(QString::fromUtf8("radioButton_12bit"));
        radioButton_12bit->setGeometry(QRect(20, 100, 112, 23));
        radioButton_singel = new QRadioButton(sys_protocsetting);
        radioButton_singel->setObjectName(QString::fromUtf8("radioButton_singel"));
        radioButton_singel->setGeometry(QRect(190, 70, 112, 23));
        radioButton_double = new QRadioButton(sys_protocsetting);
        radioButton_double->setObjectName(QString::fromUtf8("radioButton_double"));
        radioButton_double->setGeometry(QRect(190, 100, 112, 23));
        radioButton_inorder = new QRadioButton(sys_protocsetting);
        radioButton_inorder->setObjectName(QString::fromUtf8("radioButton_inorder"));
        radioButton_inorder->setGeometry(QRect(330, 70, 112, 23));
        radioButton_unorder = new QRadioButton(sys_protocsetting);
        radioButton_unorder->setObjectName(QString::fromUtf8("radioButton_unorder"));
        radioButton_unorder->setGeometry(QRect(330, 100, 112, 23));
        radioButton_balance = new QRadioButton(sys_protocsetting);
        radioButton_balance->setObjectName(QString::fromUtf8("radioButton_balance"));
        radioButton_balance->setGeometry(QRect(490, 70, 112, 23));
        radioButton_unbalance = new QRadioButton(sys_protocsetting);
        radioButton_unbalance->setObjectName(QString::fromUtf8("radioButton_unbalance"));
        radioButton_unbalance->setGeometry(QRect(490, 100, 112, 23));
        textEdit_cdt = new QTextEdit(sys_protocsetting);
        textEdit_cdt->setObjectName(QString::fromUtf8("textEdit_cdt"));
        textEdit_cdt->setGeometry(QRect(120, 144, 81, 33));
        label_3 = new QLabel(sys_protocsetting);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 150, 101, 17));
        textEdit_cdt92 = new QTextEdit(sys_protocsetting);
        textEdit_cdt92->setObjectName(QString::fromUtf8("textEdit_cdt92"));
        textEdit_cdt92->setGeometry(QRect(440, 144, 81, 33));
        label_4 = new QLabel(sys_protocsetting);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(320, 150, 117, 17));
        textEdit_1801 = new QTextEdit(sys_protocsetting);
        textEdit_1801->setObjectName(QString::fromUtf8("textEdit_1801"));
        textEdit_1801->setGeometry(QRect(120, 224, 81, 33));
        label_5 = new QLabel(sys_protocsetting);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(14, 230, 101, 17));
        textEdit_dnp30slave = new QTextEdit(sys_protocsetting);
        textEdit_dnp30slave->setObjectName(QString::fromUtf8("textEdit_dnp30slave"));
        textEdit_dnp30slave->setGeometry(QRect(440, 224, 81, 33));
        label_6 = new QLabel(sys_protocsetting);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(320, 230, 118, 17));
        radioButton_eb90 = new QRadioButton(sys_protocsetting);
        radioButton_eb90->setObjectName(QString::fromUtf8("radioButton_eb90"));
        radioButton_eb90->setGeometry(QRect(20, 190, 112, 23));
        radioButton_d709 = new QRadioButton(sys_protocsetting);
        radioButton_d709->setObjectName(QString::fromUtf8("radioButton_d709"));
        radioButton_d709->setGeometry(QRect(330, 190, 112, 23));
        textEdit_104 = new QTextEdit(sys_protocsetting);
        textEdit_104->setObjectName(QString::fromUtf8("textEdit_104"));
        textEdit_104->setGeometry(QRect(120, 270, 81, 33));
        label_7 = new QLabel(sys_protocsetting);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(7, 276, 112, 17));
        label_8 = new QLabel(sys_protocsetting);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(320, 276, 118, 17));
        textEdit_dnp30master = new QTextEdit(sys_protocsetting);
        textEdit_dnp30master->setObjectName(QString::fromUtf8("textEdit_dnp30master"));
        textEdit_dnp30master->setGeometry(QRect(440, 270, 81, 33));
        label_9 = new QLabel(sys_protocsetting);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 326, 112, 17));
        textEdit_modbus = new QTextEdit(sys_protocsetting);
        textEdit_modbus->setObjectName(QString::fromUtf8("textEdit_modbus"));
        textEdit_modbus->setGeometry(QRect(120, 320, 81, 33));
        radioButton_104 = new QRadioButton(sys_protocsetting);
        radioButton_104->setObjectName(QString::fromUtf8("radioButton_104"));
        radioButton_104->setGeometry(QRect(330, 320, 131, 23));
        label_10 = new QLabel(sys_protocsetting);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 380, 112, 17));
        label_11 = new QLabel(sys_protocsetting);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(340, 380, 112, 17));
        label_12 = new QLabel(sys_protocsetting);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 430, 112, 17));
        label_13 = new QLabel(sys_protocsetting);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(340, 430, 112, 17));
        label_14 = new QLabel(sys_protocsetting);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 470, 112, 17));
        label_15 = new QLabel(sys_protocsetting);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(317, 470, 121, 17));
        pushButton_read = new QPushButton(sys_protocsetting);
        pushButton_read->setObjectName(QString::fromUtf8("pushButton_read"));
        pushButton_read->setGeometry(QRect(10, 520, 70, 35));
        pushButton_save = new QPushButton(sys_protocsetting);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(100, 520, 70, 35));
        pushButton_default = new QPushButton(sys_protocsetting);
        pushButton_default->setObjectName(QString::fromUtf8("pushButton_default"));
        pushButton_default->setGeometry(QRect(190, 520, 70, 35));
        pushButton_empty = new QPushButton(sys_protocsetting);
        pushButton_empty->setObjectName(QString::fromUtf8("pushButton_empty"));
        pushButton_empty->setGeometry(QRect(280, 520, 70, 35));
        pushButton_upload = new QPushButton(sys_protocsetting);
        pushButton_upload->setObjectName(QString::fromUtf8("pushButton_upload"));
        pushButton_upload->setGeometry(QRect(370, 520, 70, 35));
        pushButton_download = new QPushButton(sys_protocsetting);
        pushButton_download->setObjectName(QString::fromUtf8("pushButton_download"));
        pushButton_download->setGeometry(QRect(460, 520, 70, 35));
        pushButton_quit = new QPushButton(sys_protocsetting);
        pushButton_quit->setObjectName(QString::fromUtf8("pushButton_quit"));
        pushButton_quit->setGeometry(QRect(550, 520, 70, 35));

        retranslateUi(sys_protocsetting);

        QMetaObject::connectSlotsByName(sys_protocsetting);
    } // setupUi

    void retranslateUi(QDialog *sys_protocsetting)
    {
        sys_protocsetting->setWindowTitle(QApplication::translate("sys_protocsetting", "Dialog", nullptr));
        textEdit_101slave->setHtml(QApplication::translate("sys_protocsetting", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0</p></body></html>", nullptr));
        label->setText(QApplication::translate("sys_protocsetting", "101\345\255\220\347\253\231\345\234\260\345\235\200:", nullptr));
        textEdit_101pub->setHtml(QApplication::translate("sys_protocsetting", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0</p></body></html>", nullptr));
        label_2->setText(QApplication::translate("sys_protocsetting", "101\345\205\254\345\205\261\345\234\260\345\235\200:", nullptr));
        radioButton_16bit->setText(QApplication::translate("sys_protocsetting", "16\344\275\215\351\201\245\346\265\213\345\200\274", nullptr));
        radioButton_12bit->setText(QApplication::translate("sys_protocsetting", "12\344\275\215\351\201\245\346\265\213\345\200\274", nullptr));
        radioButton_singel->setText(QApplication::translate("sys_protocsetting", "\345\215\225\347\202\271\351\201\245\344\277\241", nullptr));
        radioButton_double->setText(QApplication::translate("sys_protocsetting", "\345\217\214\347\202\271\351\201\245\344\277\241", nullptr));
        radioButton_inorder->setText(QApplication::translate("sys_protocsetting", "\350\204\211\345\206\262\345\272\217\345\210\227\346\227\240\346\225\210", nullptr));
        radioButton_unorder->setText(QApplication::translate("sys_protocsetting", "\350\204\211\345\206\262\345\272\217\345\210\227\346\234\211\346\225\210", nullptr));
        radioButton_balance->setText(QApplication::translate("sys_protocsetting", "\345\271\263\350\241\241\345\274\217", nullptr));
        radioButton_unbalance->setText(QApplication::translate("sys_protocsetting", "\351\235\236\345\271\263\350\241\241\345\274\217", nullptr));
        textEdit_cdt->setHtml(QApplication::translate("sys_protocsetting", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0</p></body></html>", nullptr));
        label_3->setText(QApplication::translate("sys_protocsetting", "CDT\345\255\220\347\253\231\345\234\260\345\235\200:", nullptr));
        textEdit_cdt92->setHtml(QApplication::translate("sys_protocsetting", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0</p></body></html>", nullptr));
        label_4->setText(QApplication::translate("sys_protocsetting", "CDT92\345\255\220\347\253\231\345\234\260\345\235\200:", nullptr));
        textEdit_1801->setHtml(QApplication::translate("sys_protocsetting", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0</p></body></html>", nullptr));
        label_5->setText(QApplication::translate("sys_protocsetting", "1801\345\255\220\347\253\231\345\234\260\345\235\200:", nullptr));
        textEdit_dnp30slave->setHtml(QApplication::translate("sys_protocsetting", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0</p></body></html>", nullptr));
        label_6->setText(QApplication::translate("sys_protocsetting", "DNP30\345\255\220\347\253\231\345\234\260\345\235\200:", nullptr));
        radioButton_eb90->setText(QApplication::translate("sys_protocsetting", "EB90\345\220\214\346\255\245\345\255\227", nullptr));
        radioButton_d709->setText(QApplication::translate("sys_protocsetting", "D709\345\220\214\346\255\245\345\255\227", nullptr));
        textEdit_104->setHtml(QApplication::translate("sys_protocsetting", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0</p></body></html>", nullptr));
        label_7->setText(QApplication::translate("sys_protocsetting", "104\345\255\220\347\253\231\347\272\277\350\267\257\345\217\267:", nullptr));
        label_8->setText(QApplication::translate("sys_protocsetting", "DNP30\344\270\273\347\253\231\345\234\260\345\235\200:", nullptr));
        textEdit_dnp30master->setHtml(QApplication::translate("sys_protocsetting", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0</p></body></html>", nullptr));
        label_9->setText(QApplication::translate("sys_protocsetting", "ModBus\344\273\216\347\253\231:", nullptr));
        textEdit_modbus->setHtml(QApplication::translate("sys_protocsetting", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0</p></body></html>", nullptr));
        radioButton_104->setText(QApplication::translate("sys_protocsetting", "\350\256\276\347\275\256\344\270\272104\344\270\273\347\253\231", nullptr));
        label_10->setText(QApplication::translate("sys_protocsetting", "101\345\215\217\350\256\256\347\211\210\346\234\254:", nullptr));
        label_11->setText(QApplication::translate("sys_protocsetting", "\344\277\241\346\201\257\344\275\223\345\255\227\350\212\202\346\225\260:", nullptr));
        label_12->setText(QApplication::translate("sys_protocsetting", "\351\201\245\346\265\213\350\265\267\345\247\213\345\272\217\345\217\267:", nullptr));
        label_13->setText(QApplication::translate("sys_protocsetting", "\351\201\245\350\204\211\350\265\267\345\247\213\345\272\217\345\217\267:", nullptr));
        label_14->setText(QApplication::translate("sys_protocsetting", "\351\200\232\344\277\241\350\265\267\345\247\213\345\272\217\345\217\267:", nullptr));
        label_15->setText(QApplication::translate("sys_protocsetting", "TX9702\345\220\214\347\273\204YC\346\225\260:", nullptr));
        pushButton_read->setText(QApplication::translate("sys_protocsetting", "\350\257\273\345\217\226", nullptr));
        pushButton_save->setText(QApplication::translate("sys_protocsetting", "\344\277\235\345\255\230", nullptr));
        pushButton_default->setText(QApplication::translate("sys_protocsetting", "\347\274\272\347\234\201\345\200\274", nullptr));
        pushButton_empty->setText(QApplication::translate("sys_protocsetting", "\346\270\205\347\251\272", nullptr));
        pushButton_upload->setText(QApplication::translate("sys_protocsetting", "\344\270\212\350\275\275", nullptr));
        pushButton_download->setText(QApplication::translate("sys_protocsetting", "\344\270\213\350\275\275", nullptr));
        pushButton_quit->setText(QApplication::translate("sys_protocsetting", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sys_protocsetting: public Ui_sys_protocsetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYS_PROTOCSETTING_H
