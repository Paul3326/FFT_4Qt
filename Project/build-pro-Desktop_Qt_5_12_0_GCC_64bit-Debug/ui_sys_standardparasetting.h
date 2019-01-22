/********************************************************************************
** Form generated from reading UI file 'sys_standardparasetting.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYS_STANDARDPARASETTING_H
#define UI_SYS_STANDARDPARASETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_sys_standardparasetting
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton_default;
    QPushButton *pushButton_save;
    QPushButton *pushButton_cancel;
    QTextEdit *textEdit_productname;
    QTextEdit *textEdit_producttype;
    QTextEdit *textEdit_productnum;
    QTextEdit *textEdit_grade;
    QTextEdit *textEdit_limittime;
    QTextEdit *textEdit_producer;
    QTextEdit *textEdit_num;

    void setupUi(QDialog *sys_standardparasetting)
    {
        if (sys_standardparasetting->objectName().isEmpty())
            sys_standardparasetting->setObjectName(QString::fromUtf8("sys_standardparasetting"));
        sys_standardparasetting->resize(640, 502);
        label = new QLabel(sys_standardparasetting);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 61, 16));
        label_2 = new QLabel(sys_standardparasetting);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 80, 67, 17));
        label_3 = new QLabel(sys_standardparasetting);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(44, 141, 67, 17));
        label_4 = new QLabel(sys_standardparasetting);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 200, 101, 17));
        label_5 = new QLabel(sys_standardparasetting);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(45, 255, 101, 17));
        label_6 = new QLabel(sys_standardparasetting);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(45, 316, 101, 17));
        label_7 = new QLabel(sys_standardparasetting);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(46, 376, 101, 17));
        pushButton_default = new QPushButton(sys_standardparasetting);
        pushButton_default->setObjectName(QString::fromUtf8("pushButton_default"));
        pushButton_default->setGeometry(QRect(30, 440, 89, 35));
        pushButton_save = new QPushButton(sys_standardparasetting);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(340, 440, 89, 35));
        pushButton_cancel = new QPushButton(sys_standardparasetting);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(490, 440, 89, 35));
        textEdit_productname = new QTextEdit(sys_standardparasetting);
        textEdit_productname->setObjectName(QString::fromUtf8("textEdit_productname"));
        textEdit_productname->setGeometry(QRect(130, 12, 411, 35));
        textEdit_producttype = new QTextEdit(sys_standardparasetting);
        textEdit_producttype->setObjectName(QString::fromUtf8("textEdit_producttype"));
        textEdit_producttype->setGeometry(QRect(130, 70, 411, 35));
        textEdit_productnum = new QTextEdit(sys_standardparasetting);
        textEdit_productnum->setObjectName(QString::fromUtf8("textEdit_productnum"));
        textEdit_productnum->setGeometry(QRect(130, 130, 411, 35));
        textEdit_grade = new QTextEdit(sys_standardparasetting);
        textEdit_grade->setObjectName(QString::fromUtf8("textEdit_grade"));
        textEdit_grade->setGeometry(QRect(130, 190, 411, 35));
        textEdit_limittime = new QTextEdit(sys_standardparasetting);
        textEdit_limittime->setObjectName(QString::fromUtf8("textEdit_limittime"));
        textEdit_limittime->setGeometry(QRect(130, 250, 411, 35));
        textEdit_producer = new QTextEdit(sys_standardparasetting);
        textEdit_producer->setObjectName(QString::fromUtf8("textEdit_producer"));
        textEdit_producer->setGeometry(QRect(130, 310, 411, 35));
        textEdit_num = new QTextEdit(sys_standardparasetting);
        textEdit_num->setObjectName(QString::fromUtf8("textEdit_num"));
        textEdit_num->setGeometry(QRect(130, 370, 411, 35));

        retranslateUi(sys_standardparasetting);

        QMetaObject::connectSlotsByName(sys_standardparasetting);
    } // setupUi

    void retranslateUi(QDialog *sys_standardparasetting)
    {
        sys_standardparasetting->setWindowTitle(QApplication::translate("sys_standardparasetting", "Dialog", nullptr));
        label->setText(QApplication::translate("sys_standardparasetting", "\345\220\215       \347\247\260:", nullptr));
        label_2->setText(QApplication::translate("sys_standardparasetting", "\345\236\213       \345\217\267:", nullptr));
        label_3->setText(QApplication::translate("sys_standardparasetting", "\345\207\272\345\216\202\347\274\226\345\217\267:", nullptr));
        label_4->setText(QApplication::translate("sys_standardparasetting", "\345\207\206\347\241\256\345\272\246\347\255\211\347\272\247:", nullptr));
        label_5->setText(QApplication::translate("sys_standardparasetting", "\346\234\211\346\225\210\346\234\237\351\231\220:", nullptr));
        label_6->setText(QApplication::translate("sys_standardparasetting", "\345\210\266\351\200\240\345\216\202\345\256\266:", nullptr));
        label_7->setText(QApplication::translate("sys_standardparasetting", "\350\257\201\344\271\246\347\274\226\345\217\267:", nullptr));
        pushButton_default->setText(QApplication::translate("sys_standardparasetting", "\347\274\272\347\234\201\345\200\274", nullptr));
        pushButton_save->setText(QApplication::translate("sys_standardparasetting", "\344\277\235\345\255\230", nullptr));
        pushButton_cancel->setText(QApplication::translate("sys_standardparasetting", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sys_standardparasetting: public Ui_sys_standardparasetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYS_STANDARDPARASETTING_H
