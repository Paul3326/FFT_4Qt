/********************************************************************************
** Form generated from reading UI file 'sys_para.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYS_PARA_H
#define UI_SYS_PARA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_sys_para
{
public:
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit_group;
    QTextEdit *textEdit_project;
    QTextEdit *textEdit_company;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox_protectype;
    QLabel *label_5;
    QComboBox *comboBox_stdtype;
    QLabel *label_6;
    QComboBox *comboBox_current;
    QLabel *label_7;
    QComboBox *comboBox_statetime;
    QComboBox *comboBox_staytime;
    QLabel *label_8;
    QLabel *label_9;
    QComboBox *comboBox_protocl;
    QComboBox *comboBox_point;
    QLabel *label_10;
    QLabel *label_11;
    QComboBox *comboBox_precious;
    QPushButton *pushButton_quit;
    QCheckBox *checkBox;
    QPushButton *pushButton_default;
    QPushButton *pushButton_save;
    QPushButton *pushButton_stdpara;
    QComboBox *comboBox_precious_2;
    QLabel *label_12;
    QCheckBox *checkBox_2;

    void setupUi(QDialog *sys_para)
    {
        if (sys_para->objectName().isEmpty())
            sys_para->setObjectName(QString::fromUtf8("sys_para"));
        sys_para->resize(640, 430);
        label = new QLabel(sys_para);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 101, 17));
        label_2 = new QLabel(sys_para);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 67, 101, 16));
        textEdit_group = new QTextEdit(sys_para);
        textEdit_group->setObjectName(QString::fromUtf8("textEdit_group"));
        textEdit_group->setGeometry(QRect(120, 13, 261, 31));
        textEdit_project = new QTextEdit(sys_para);
        textEdit_project->setObjectName(QString::fromUtf8("textEdit_project"));
        textEdit_project->setGeometry(QRect(120, 60, 261, 31));
        textEdit_company = new QTextEdit(sys_para);
        textEdit_company->setObjectName(QString::fromUtf8("textEdit_company"));
        textEdit_company->setGeometry(QRect(490, 15, 131, 31));
        label_3 = new QLabel(sys_para);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(390, 20, 101, 16));
        label_4 = new QLabel(sys_para);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 117, 101, 16));
        comboBox_protectype = new QComboBox(sys_para);
        comboBox_protectype->addItem(QString());
        comboBox_protectype->addItem(QString());
        comboBox_protectype->addItem(QString());
        comboBox_protectype->setObjectName(QString::fromUtf8("comboBox_protectype"));
        comboBox_protectype->setGeometry(QRect(120, 110, 261, 31));
        comboBox_protectype->setMaxVisibleItems(5);
        label_5 = new QLabel(sys_para);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(390, 117, 101, 16));
        comboBox_stdtype = new QComboBox(sys_para);
        comboBox_stdtype->addItem(QString());
        comboBox_stdtype->addItem(QString());
        comboBox_stdtype->addItem(QString());
        comboBox_stdtype->setObjectName(QString::fromUtf8("comboBox_stdtype"));
        comboBox_stdtype->setGeometry(QRect(490, 110, 131, 31));
        comboBox_stdtype->setMaxVisibleItems(5);
        label_6 = new QLabel(sys_para);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 167, 161, 16));
        comboBox_current = new QComboBox(sys_para);
        comboBox_current->addItem(QString());
        comboBox_current->addItem(QString());
        comboBox_current->setObjectName(QString::fromUtf8("comboBox_current"));
        comboBox_current->setGeometry(QRect(240, 160, 141, 31));
        comboBox_current->setMaxVisibleItems(5);
        label_7 = new QLabel(sys_para);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 217, 221, 16));
        comboBox_statetime = new QComboBox(sys_para);
        comboBox_statetime->addItem(QString());
        comboBox_statetime->addItem(QString());
        comboBox_statetime->addItem(QString());
        comboBox_statetime->addItem(QString());
        comboBox_statetime->addItem(QString());
        comboBox_statetime->addItem(QString());
        comboBox_statetime->addItem(QString());
        comboBox_statetime->addItem(QString());
        comboBox_statetime->addItem(QString());
        comboBox_statetime->addItem(QString());
        comboBox_statetime->addItem(QString());
        comboBox_statetime->addItem(QString());
        comboBox_statetime->addItem(QString());
        comboBox_statetime->addItem(QString());
        comboBox_statetime->addItem(QString());
        comboBox_statetime->addItem(QString());
        comboBox_statetime->addItem(QString());
        comboBox_statetime->addItem(QString());
        comboBox_statetime->addItem(QString());
        comboBox_statetime->addItem(QString());
        comboBox_statetime->addItem(QString());
        comboBox_statetime->addItem(QString());
        comboBox_statetime->addItem(QString());
        comboBox_statetime->setObjectName(QString::fromUtf8("comboBox_statetime"));
        comboBox_statetime->setGeometry(QRect(240, 210, 141, 31));
        comboBox_statetime->setMaxVisibleItems(5);
        comboBox_staytime = new QComboBox(sys_para);
        comboBox_staytime->addItem(QString());
        comboBox_staytime->addItem(QString());
        comboBox_staytime->addItem(QString());
        comboBox_staytime->addItem(QString());
        comboBox_staytime->addItem(QString());
        comboBox_staytime->addItem(QString());
        comboBox_staytime->addItem(QString());
        comboBox_staytime->addItem(QString());
        comboBox_staytime->addItem(QString());
        comboBox_staytime->addItem(QString());
        comboBox_staytime->addItem(QString());
        comboBox_staytime->addItem(QString());
        comboBox_staytime->addItem(QString());
        comboBox_staytime->addItem(QString());
        comboBox_staytime->addItem(QString());
        comboBox_staytime->addItem(QString());
        comboBox_staytime->addItem(QString());
        comboBox_staytime->addItem(QString());
        comboBox_staytime->addItem(QString());
        comboBox_staytime->addItem(QString());
        comboBox_staytime->addItem(QString());
        comboBox_staytime->addItem(QString());
        comboBox_staytime->setObjectName(QString::fromUtf8("comboBox_staytime"));
        comboBox_staytime->setGeometry(QRect(240, 263, 141, 31));
        comboBox_staytime->setMaxVisibleItems(5);
        label_8 = new QLabel(sys_para);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 270, 221, 16));
        label_9 = new QLabel(sys_para);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(420, 170, 71, 16));
        comboBox_protocl = new QComboBox(sys_para);
        comboBox_protocl->addItem(QString());
        comboBox_protocl->addItem(QString());
        comboBox_protocl->setObjectName(QString::fromUtf8("comboBox_protocl"));
        comboBox_protocl->setGeometry(QRect(490, 163, 131, 31));
        comboBox_protocl->setMaxVisibleItems(5);
        comboBox_point = new QComboBox(sys_para);
        comboBox_point->addItem(QString());
        comboBox_point->addItem(QString());
        comboBox_point->addItem(QString());
        comboBox_point->addItem(QString());
        comboBox_point->addItem(QString());
        comboBox_point->addItem(QString());
        comboBox_point->addItem(QString());
        comboBox_point->addItem(QString());
        comboBox_point->addItem(QString());
        comboBox_point->addItem(QString());
        comboBox_point->addItem(QString());
        comboBox_point->addItem(QString());
        comboBox_point->addItem(QString());
        comboBox_point->addItem(QString());
        comboBox_point->addItem(QString());
        comboBox_point->addItem(QString());
        comboBox_point->addItem(QString());
        comboBox_point->addItem(QString());
        comboBox_point->addItem(QString());
        comboBox_point->addItem(QString());
        comboBox_point->addItem(QString());
        comboBox_point->addItem(QString());
        comboBox_point->setObjectName(QString::fromUtf8("comboBox_point"));
        comboBox_point->setGeometry(QRect(490, 213, 131, 31));
        comboBox_point->setMaxVisibleItems(5);
        label_10 = new QLabel(sys_para);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(420, 220, 71, 16));
        label_11 = new QLabel(sys_para);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(420, 267, 71, 16));
        comboBox_precious = new QComboBox(sys_para);
        comboBox_precious->addItem(QString());
        comboBox_precious->addItem(QString());
        comboBox_precious->addItem(QString());
        comboBox_precious->addItem(QString());
        comboBox_precious->addItem(QString());
        comboBox_precious->addItem(QString());
        comboBox_precious->addItem(QString());
        comboBox_precious->addItem(QString());
        comboBox_precious->addItem(QString());
        comboBox_precious->addItem(QString());
        comboBox_precious->setObjectName(QString::fromUtf8("comboBox_precious"));
        comboBox_precious->setGeometry(QRect(490, 260, 131, 31));
        comboBox_precious->setMaxVisibleItems(5);
        pushButton_quit = new QPushButton(sys_para);
        pushButton_quit->setObjectName(QString::fromUtf8("pushButton_quit"));
        pushButton_quit->setGeometry(QRect(530, 380, 89, 35));
        checkBox = new QCheckBox(sys_para);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(20, 320, 151, 23));
        pushButton_default = new QPushButton(sys_para);
        pushButton_default->setObjectName(QString::fromUtf8("pushButton_default"));
        pushButton_default->setGeometry(QRect(120, 380, 89, 35));
        pushButton_save = new QPushButton(sys_para);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(250, 380, 89, 35));
        pushButton_stdpara = new QPushButton(sys_para);
        pushButton_stdpara->setObjectName(QString::fromUtf8("pushButton_stdpara"));
        pushButton_stdpara->setGeometry(QRect(380, 380, 111, 35));
        comboBox_precious_2 = new QComboBox(sys_para);
        comboBox_precious_2->addItem(QString());
        comboBox_precious_2->addItem(QString());
        comboBox_precious_2->addItem(QString());
        comboBox_precious_2->addItem(QString());
        comboBox_precious_2->addItem(QString());
        comboBox_precious_2->addItem(QString());
        comboBox_precious_2->addItem(QString());
        comboBox_precious_2->addItem(QString());
        comboBox_precious_2->addItem(QString());
        comboBox_precious_2->addItem(QString());
        comboBox_precious_2->setObjectName(QString::fromUtf8("comboBox_precious_2"));
        comboBox_precious_2->setGeometry(QRect(490, 320, 131, 31));
        comboBox_precious_2->setMaxVisibleItems(5);
        label_12 = new QLabel(sys_para);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(420, 327, 71, 16));
        checkBox_2 = new QCheckBox(sys_para);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(240, 320, 151, 23));

        retranslateUi(sys_para);

        QMetaObject::connectSlotsByName(sys_para);
    } // setupUi

    void retranslateUi(QDialog *sys_para)
    {
        sys_para->setWindowTitle(QApplication::translate("sys_para", "Dialog", nullptr));
        label->setText(QApplication::translate("sys_para", "\346\243\200\345\256\232\346\234\272\346\236\204\345\220\215\347\247\260:", nullptr));
        label_2->setText(QApplication::translate("sys_para", "\345\212\237\350\203\275\350\257\225\351\252\214\351\241\271\347\233\256:", nullptr));
        label_3->setText(QApplication::translate("sys_para", "RTU\351\200\201\346\243\200\345\215\225\344\275\215:", nullptr));
        label_4->setText(QApplication::translate("sys_para", "\344\277\235\346\212\244\350\243\205\347\275\256\347\261\273\345\236\213:", nullptr));
        comboBox_protectype->setItemText(0, QApplication::translate("sys_para", "\350\256\270\347\273\247", nullptr));
        comboBox_protectype->setItemText(1, QApplication::translate("sys_para", "\344\270\234\346\226\271\347\224\265\345\255\220\344\277\235\346\212\244", nullptr));
        comboBox_protectype->setItemText(2, QApplication::translate("sys_para", "\345\214\227\344\272\254\347\224\265\347\247\221\351\231\242CEE300", nullptr));

        label_5->setText(QApplication::translate("sys_para", "\346\240\207\345\207\206\350\243\205\347\275\256\347\261\273\345\236\213:", nullptr));
        comboBox_stdtype->setItemText(0, QApplication::translate("sys_para", "\344\270\215\345\270\246\351\222\263\350\241\250", nullptr));
        comboBox_stdtype->setItemText(1, QApplication::translate("sys_para", "\345\270\246\351\222\263\350\241\250", nullptr));
        comboBox_stdtype->setItemText(2, QApplication::translate("sys_para", "\345\276\252\347\216\257\346\265\213\350\257\225", nullptr));

        label_6->setText(QApplication::translate("sys_para", "\344\272\244\346\265\201\347\224\265\346\265\201\351\207\207\346\240\267\346\240\241\351\252\214\351\200\211\346\213\251:", nullptr));
        comboBox_current->setItemText(0, QApplication::translate("sys_para", "\346\265\213\351\207\217\347\224\265\346\265\201", nullptr));
        comboBox_current->setItemText(1, QApplication::translate("sys_para", "\344\277\235\346\212\244\347\224\265\346\265\201", nullptr));

        label_7->setText(QApplication::translate("sys_para", "\344\272\244\346\265\201\345\212\237\347\216\207\346\272\220\350\276\223\345\207\272\345\220\216\357\274\214\347\250\263\345\256\232\346\227\266\351\227\264(S):", nullptr));
        comboBox_statetime->setItemText(0, QApplication::translate("sys_para", "1", nullptr));
        comboBox_statetime->setItemText(1, QApplication::translate("sys_para", "2", nullptr));
        comboBox_statetime->setItemText(2, QApplication::translate("sys_para", "3", nullptr));
        comboBox_statetime->setItemText(3, QApplication::translate("sys_para", "4", nullptr));
        comboBox_statetime->setItemText(4, QApplication::translate("sys_para", "5", nullptr));
        comboBox_statetime->setItemText(5, QApplication::translate("sys_para", "6", nullptr));
        comboBox_statetime->setItemText(6, QApplication::translate("sys_para", "7", nullptr));
        comboBox_statetime->setItemText(7, QApplication::translate("sys_para", "8", nullptr));
        comboBox_statetime->setItemText(8, QApplication::translate("sys_para", "9", nullptr));
        comboBox_statetime->setItemText(9, QApplication::translate("sys_para", "10", nullptr));
        comboBox_statetime->setItemText(10, QApplication::translate("sys_para", "11", nullptr));
        comboBox_statetime->setItemText(11, QApplication::translate("sys_para", "12", nullptr));
        comboBox_statetime->setItemText(12, QApplication::translate("sys_para", "13", nullptr));
        comboBox_statetime->setItemText(13, QApplication::translate("sys_para", "14", nullptr));
        comboBox_statetime->setItemText(14, QApplication::translate("sys_para", "15", nullptr));
        comboBox_statetime->setItemText(15, QApplication::translate("sys_para", "16", nullptr));
        comboBox_statetime->setItemText(16, QApplication::translate("sys_para", "17", nullptr));
        comboBox_statetime->setItemText(17, QApplication::translate("sys_para", "18", nullptr));
        comboBox_statetime->setItemText(18, QApplication::translate("sys_para", "19", nullptr));
        comboBox_statetime->setItemText(19, QApplication::translate("sys_para", "20", nullptr));
        comboBox_statetime->setItemText(20, QApplication::translate("sys_para", "21", nullptr));
        comboBox_statetime->setItemText(21, QApplication::translate("sys_para", "22", nullptr));
        comboBox_statetime->setItemText(22, QApplication::translate("sys_para", "23", nullptr));

        comboBox_staytime->setItemText(0, QApplication::translate("sys_para", "2", nullptr));
        comboBox_staytime->setItemText(1, QApplication::translate("sys_para", "3", nullptr));
        comboBox_staytime->setItemText(2, QApplication::translate("sys_para", "4", nullptr));
        comboBox_staytime->setItemText(3, QApplication::translate("sys_para", "5", nullptr));
        comboBox_staytime->setItemText(4, QApplication::translate("sys_para", "6", nullptr));
        comboBox_staytime->setItemText(5, QApplication::translate("sys_para", "7", nullptr));
        comboBox_staytime->setItemText(6, QApplication::translate("sys_para", "8", nullptr));
        comboBox_staytime->setItemText(7, QApplication::translate("sys_para", "9", nullptr));
        comboBox_staytime->setItemText(8, QApplication::translate("sys_para", "10", nullptr));
        comboBox_staytime->setItemText(9, QApplication::translate("sys_para", "11", nullptr));
        comboBox_staytime->setItemText(10, QApplication::translate("sys_para", "12", nullptr));
        comboBox_staytime->setItemText(11, QApplication::translate("sys_para", "13", nullptr));
        comboBox_staytime->setItemText(12, QApplication::translate("sys_para", "14", nullptr));
        comboBox_staytime->setItemText(13, QApplication::translate("sys_para", "15", nullptr));
        comboBox_staytime->setItemText(14, QApplication::translate("sys_para", "16", nullptr));
        comboBox_staytime->setItemText(15, QApplication::translate("sys_para", "17", nullptr));
        comboBox_staytime->setItemText(16, QApplication::translate("sys_para", "18", nullptr));
        comboBox_staytime->setItemText(17, QApplication::translate("sys_para", "19", nullptr));
        comboBox_staytime->setItemText(18, QApplication::translate("sys_para", "20", nullptr));
        comboBox_staytime->setItemText(19, QApplication::translate("sys_para", "21", nullptr));
        comboBox_staytime->setItemText(20, QApplication::translate("sys_para", "22", nullptr));
        comboBox_staytime->setItemText(21, QApplication::translate("sys_para", "23", nullptr));

        label_8->setText(QApplication::translate("sys_para", "\344\270\215\345\220\210\346\240\274\347\202\271\345\201\234\347\225\231\346\227\266\351\227\264(S):", nullptr));
        label_9->setText(QApplication::translate("sys_para", "\346\240\241\351\252\214\344\277\241\346\201\257:", nullptr));
        comboBox_protocl->setItemText(0, QApplication::translate("sys_para", "\347\224\250\351\200\232\350\256\257", nullptr));
        comboBox_protocl->setItemText(1, QApplication::translate("sys_para", "\344\270\215\347\224\250\351\200\232\350\256\257", nullptr));

        comboBox_point->setItemText(0, QApplication::translate("sys_para", "2", nullptr));
        comboBox_point->setItemText(1, QApplication::translate("sys_para", "3", nullptr));
        comboBox_point->setItemText(2, QApplication::translate("sys_para", "4", nullptr));
        comboBox_point->setItemText(3, QApplication::translate("sys_para", "5", nullptr));
        comboBox_point->setItemText(4, QApplication::translate("sys_para", "6", nullptr));
        comboBox_point->setItemText(5, QApplication::translate("sys_para", "7", nullptr));
        comboBox_point->setItemText(6, QApplication::translate("sys_para", "8", nullptr));
        comboBox_point->setItemText(7, QApplication::translate("sys_para", "9", nullptr));
        comboBox_point->setItemText(8, QApplication::translate("sys_para", "10", nullptr));
        comboBox_point->setItemText(9, QApplication::translate("sys_para", "11", nullptr));
        comboBox_point->setItemText(10, QApplication::translate("sys_para", "12", nullptr));
        comboBox_point->setItemText(11, QApplication::translate("sys_para", "13", nullptr));
        comboBox_point->setItemText(12, QApplication::translate("sys_para", "14", nullptr));
        comboBox_point->setItemText(13, QApplication::translate("sys_para", "15", nullptr));
        comboBox_point->setItemText(14, QApplication::translate("sys_para", "16", nullptr));
        comboBox_point->setItemText(15, QApplication::translate("sys_para", "17", nullptr));
        comboBox_point->setItemText(16, QApplication::translate("sys_para", "18", nullptr));
        comboBox_point->setItemText(17, QApplication::translate("sys_para", "19", nullptr));
        comboBox_point->setItemText(18, QApplication::translate("sys_para", "20", nullptr));
        comboBox_point->setItemText(19, QApplication::translate("sys_para", "21", nullptr));
        comboBox_point->setItemText(20, QApplication::translate("sys_para", "22", nullptr));
        comboBox_point->setItemText(21, QApplication::translate("sys_para", "23", nullptr));

        label_10->setText(QApplication::translate("sys_para", "\346\240\241\351\252\214\347\202\271\346\225\260:", nullptr));
        label_11->setText(QApplication::translate("sys_para", "\345\205\201\350\256\270\350\257\257\345\267\256:", nullptr));
        comboBox_precious->setItemText(0, QApplication::translate("sys_para", "0.001", nullptr));
        comboBox_precious->setItemText(1, QApplication::translate("sys_para", "0.002", nullptr));
        comboBox_precious->setItemText(2, QApplication::translate("sys_para", "0.005", nullptr));
        comboBox_precious->setItemText(3, QApplication::translate("sys_para", "0.01", nullptr));
        comboBox_precious->setItemText(4, QApplication::translate("sys_para", "0.02", nullptr));
        comboBox_precious->setItemText(5, QApplication::translate("sys_para", "0.05", nullptr));
        comboBox_precious->setItemText(6, QApplication::translate("sys_para", "0.1", nullptr));
        comboBox_precious->setItemText(7, QApplication::translate("sys_para", "0.2", nullptr));
        comboBox_precious->setItemText(8, QApplication::translate("sys_para", "0.5", nullptr));
        comboBox_precious->setItemText(9, QApplication::translate("sys_para", "1.0", nullptr));

        pushButton_quit->setText(QApplication::translate("sys_para", "\351\200\200\345\207\272", nullptr));
        checkBox->setText(QApplication::translate("sys_para", "\345\217\221\351\200\201\350\257\267\346\261\202\346\214\207\344\273\244", nullptr));
        pushButton_default->setText(QApplication::translate("sys_para", "\347\274\272\347\234\201\345\200\274", nullptr));
        pushButton_save->setText(QApplication::translate("sys_para", "\344\277\235\345\255\230", nullptr));
        pushButton_stdpara->setText(QApplication::translate("sys_para", "\346\240\207\345\207\206\350\243\205\347\275\256\345\217\202\346\225\260", nullptr));
        comboBox_precious_2->setItemText(0, QApplication::translate("sys_para", "0.001", nullptr));
        comboBox_precious_2->setItemText(1, QApplication::translate("sys_para", "0.002", nullptr));
        comboBox_precious_2->setItemText(2, QApplication::translate("sys_para", "0.005", nullptr));
        comboBox_precious_2->setItemText(3, QApplication::translate("sys_para", "0.01", nullptr));
        comboBox_precious_2->setItemText(4, QApplication::translate("sys_para", "0.02", nullptr));
        comboBox_precious_2->setItemText(5, QApplication::translate("sys_para", "0.05", nullptr));
        comboBox_precious_2->setItemText(6, QApplication::translate("sys_para", "0.1", nullptr));
        comboBox_precious_2->setItemText(7, QApplication::translate("sys_para", "0.2", nullptr));
        comboBox_precious_2->setItemText(8, QApplication::translate("sys_para", "0.5", nullptr));
        comboBox_precious_2->setItemText(9, QApplication::translate("sys_para", "1.0", nullptr));

        label_12->setText(QApplication::translate("sys_para", "\345\205\201\350\256\270\350\257\257\345\267\256:", nullptr));
        checkBox_2->setText(QApplication::translate("sys_para", "\344\275\277\347\224\250\347\273\204\345\220\210\346\243\200\345\256\232\346\263\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sys_para: public Ui_sys_para {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYS_PARA_H
