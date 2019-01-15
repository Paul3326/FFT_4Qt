/********************************************************************************
** Form generated from reading UI file 'rtu_para.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTU_PARA_H
#define UI_RTU_PARA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_rtu_para
{
public:
    QComboBox *cb_rtu_station;
    QLabel *label;
    QComboBox *cb_rtu_producer;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *cb_position;
    QLabel *label_4;
    QComboBox *cb_rtu_number;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *cb_rtu_type;
    QLabel *label_7;
    QComboBox *cb_rtu_grade;
    QLabel *label_8;
    QComboBox *cb_twice_v;
    QLabel *label_9;
    QComboBox *cb_twice_a;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QComboBox *cb_rtu_lineway;
    QLabel *label_13;
    QComboBox *cb_rtu_protocl;
    QLabel *label_14;
    QComboBox *cb_dc_v;
    QLabel *label_15;
    QComboBox *cb_dc_A;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QComboBox *cb_temper;
    QLabel *label_19;
    QComboBox *cb_checker1;
    QLabel *label_20;
    QComboBox *cb_humdity;
    QLabel *label_21;
    QComboBox *cb_checker2;
    QLabel *label_22;
    QComboBox *cb_variable_check;
    QComboBox *cb_error_check;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QPushButton *pb_tel_para;
    QTextEdit *te_rtu_line;
    QTextEdit *te_uid_number;
    QTextEdit *te_record_page;
    QTextEdit *te_check_number;
    QTextEdit *te_PT_Ratio;
    QTextEdit *te_CT_Ratio;
    QSplitter *splitter;
    QPushButton *pb_add;
    QPushButton *pb_save;
    QPushButton *pb_search;
    QPushButton *pb_delete;
    QPushButton *pb_previous;
    QPushButton *pb_next;

    void setupUi(QDialog *rtu_para)
    {
        if (rtu_para->objectName().isEmpty())
            rtu_para->setObjectName(QString::fromUtf8("rtu_para"));
        rtu_para->resize(675, 600);
        rtu_para->setWindowTitle(QString::fromUtf8("RTU\345\237\272\346\234\254\345\217\202\346\225\260\345\275\225\345\205\245"));
        cb_rtu_station = new QComboBox(rtu_para);
        cb_rtu_station->setObjectName(QString::fromUtf8("cb_rtu_station"));
        cb_rtu_station->setGeometry(QRect(120, 20, 171, 30));
        cb_rtu_station->setEditable(true);
        label = new QLabel(rtu_para);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 101, 31));
        cb_rtu_producer = new QComboBox(rtu_para);
        cb_rtu_producer->addItem(QString());
        cb_rtu_producer->setObjectName(QString::fromUtf8("cb_rtu_producer"));
        cb_rtu_producer->setGeometry(QRect(410, 20, 231, 30));
        cb_rtu_producer->setEditable(true);
        label_2 = new QLabel(rtu_para);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(337, 20, 81, 31));
        label_3 = new QLabel(rtu_para);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 60, 101, 31));
        cb_position = new QComboBox(rtu_para);
        cb_position->addItem(QString());
        cb_position->setObjectName(QString::fromUtf8("cb_position"));
        cb_position->setGeometry(QRect(120, 60, 521, 30));
        cb_position->setEditable(true);
        label_4 = new QLabel(rtu_para);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 100, 101, 31));
        cb_rtu_number = new QComboBox(rtu_para);
        cb_rtu_number->addItem(QString());
        cb_rtu_number->setObjectName(QString::fromUtf8("cb_rtu_number"));
        cb_rtu_number->setGeometry(QRect(410, 100, 231, 30));
        cb_rtu_number->setEditable(true);
        label_5 = new QLabel(rtu_para);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(336, 100, 101, 31));
        label_6 = new QLabel(rtu_para);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(14, 160, 121, 31));
        cb_rtu_type = new QComboBox(rtu_para);
        cb_rtu_type->setObjectName(QString::fromUtf8("cb_rtu_type"));
        cb_rtu_type->setGeometry(QRect(120, 164, 171, 30));
        cb_rtu_type->setEditable(true);
        label_7 = new QLabel(rtu_para);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(365, 160, 101, 31));
        cb_rtu_grade = new QComboBox(rtu_para);
        cb_rtu_grade->addItem(QString());
        cb_rtu_grade->addItem(QString());
        cb_rtu_grade->addItem(QString());
        cb_rtu_grade->addItem(QString());
        cb_rtu_grade->setObjectName(QString::fromUtf8("cb_rtu_grade"));
        cb_rtu_grade->setGeometry(QRect(410, 164, 231, 30));
        cb_rtu_grade->setEditable(true);
        label_8 = new QLabel(rtu_para);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(14, 200, 101, 31));
        cb_twice_v = new QComboBox(rtu_para);
        cb_twice_v->addItem(QString());
        cb_twice_v->addItem(QString());
        cb_twice_v->addItem(QString());
        cb_twice_v->setObjectName(QString::fromUtf8("cb_twice_v"));
        cb_twice_v->setGeometry(QRect(120, 205, 171, 30));
        cb_twice_v->setEditable(true);
        label_9 = new QLabel(rtu_para);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(300, 200, 101, 31));
        cb_twice_a = new QComboBox(rtu_para);
        cb_twice_a->setObjectName(QString::fromUtf8("cb_twice_a"));
        cb_twice_a->setGeometry(QRect(410, 205, 231, 30));
        cb_twice_a->setEditable(true);
        label_10 = new QLabel(rtu_para);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(63, 240, 101, 31));
        label_11 = new QLabel(rtu_para);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(346, 240, 101, 31));
        label_12 = new QLabel(rtu_para);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(51, 280, 101, 31));
        cb_rtu_lineway = new QComboBox(rtu_para);
        cb_rtu_lineway->setObjectName(QString::fromUtf8("cb_rtu_lineway"));
        cb_rtu_lineway->setGeometry(QRect(120, 286, 171, 30));
        label_13 = new QLabel(rtu_para);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(334, 280, 101, 31));
        cb_rtu_protocl = new QComboBox(rtu_para);
        cb_rtu_protocl->setObjectName(QString::fromUtf8("cb_rtu_protocl"));
        cb_rtu_protocl->setGeometry(QRect(410, 286, 231, 30));
        label_14 = new QLabel(rtu_para);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 320, 101, 31));
        cb_dc_v = new QComboBox(rtu_para);
        cb_dc_v->setObjectName(QString::fromUtf8("cb_dc_v"));
        cb_dc_v->setGeometry(QRect(120, 325, 171, 30));
        label_15 = new QLabel(rtu_para);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(304, 320, 101, 31));
        cb_dc_A = new QComboBox(rtu_para);
        cb_dc_A->setObjectName(QString::fromUtf8("cb_dc_A"));
        cb_dc_A->setGeometry(QRect(410, 325, 231, 30));
        label_16 = new QLabel(rtu_para);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(50, 360, 101, 31));
        label_17 = new QLabel(rtu_para);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(364, 370, 41, 16));
        label_18 = new QLabel(rtu_para);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(49, 400, 101, 31));
        cb_temper = new QComboBox(rtu_para);
        cb_temper->setObjectName(QString::fromUtf8("cb_temper"));
        cb_temper->setGeometry(QRect(120, 403, 171, 30));
        label_19 = new QLabel(rtu_para);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(55, 444, 101, 31));
        cb_checker1 = new QComboBox(rtu_para);
        cb_checker1->setObjectName(QString::fromUtf8("cb_checker1"));
        cb_checker1->setGeometry(QRect(120, 448, 171, 30));
        cb_checker1->setEditable(true);
        label_20 = new QLabel(rtu_para);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(334, 400, 81, 31));
        cb_humdity = new QComboBox(rtu_para);
        cb_humdity->setObjectName(QString::fromUtf8("cb_humdity"));
        cb_humdity->setGeometry(QRect(410, 403, 231, 30));
        label_21 = new QLabel(rtu_para);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(341, 444, 101, 31));
        cb_checker2 = new QComboBox(rtu_para);
        cb_checker2->setObjectName(QString::fromUtf8("cb_checker2"));
        cb_checker2->setGeometry(QRect(410, 448, 231, 30));
        cb_checker2->setEditable(true);
        label_22 = new QLabel(rtu_para);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(290, 490, 121, 31));
        cb_variable_check = new QComboBox(rtu_para);
        cb_variable_check->setObjectName(QString::fromUtf8("cb_variable_check"));
        cb_variable_check->setGeometry(QRect(410, 494, 121, 30));
        cb_variable_check->setEditable(true);
        cb_error_check = new QComboBox(rtu_para);
        cb_error_check->setObjectName(QString::fromUtf8("cb_error_check"));
        cb_error_check->setGeometry(QRect(120, 496, 151, 30));
        cb_error_check->setEditable(true);
        label_23 = new QLabel(rtu_para);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(20, 490, 100, 30));
        label_24 = new QLabel(rtu_para);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(540, 490, 51, 31));
        label_25 = new QLabel(rtu_para);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(600, 360, 31, 31));
        pb_tel_para = new QPushButton(rtu_para);
        pb_tel_para->setObjectName(QString::fromUtf8("pb_tel_para"));
        pb_tel_para->setGeometry(QRect(540, 549, 121, 31));
        te_rtu_line = new QTextEdit(rtu_para);
        te_rtu_line->setObjectName(QString::fromUtf8("te_rtu_line"));
        te_rtu_line->setGeometry(QRect(120, 100, 171, 31));
        te_uid_number = new QTextEdit(rtu_para);
        te_uid_number->setObjectName(QString::fromUtf8("te_uid_number"));
        te_uid_number->setGeometry(QRect(410, 364, 181, 30));
        te_record_page = new QTextEdit(rtu_para);
        te_record_page->setObjectName(QString::fromUtf8("te_record_page"));
        te_record_page->setGeometry(QRect(590, 490, 51, 31));
        te_record_page->setReadOnly(true);
        te_check_number = new QTextEdit(rtu_para);
        te_check_number->setObjectName(QString::fromUtf8("te_check_number"));
        te_check_number->setGeometry(QRect(120, 361, 171, 30));
        te_PT_Ratio = new QTextEdit(rtu_para);
        te_PT_Ratio->setObjectName(QString::fromUtf8("te_PT_Ratio"));
        te_PT_Ratio->setGeometry(QRect(120, 246, 171, 31));
        te_CT_Ratio = new QTextEdit(rtu_para);
        te_CT_Ratio->setObjectName(QString::fromUtf8("te_CT_Ratio"));
        te_CT_Ratio->setGeometry(QRect(410, 246, 231, 31));
        splitter = new QSplitter(rtu_para);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(20, 550, 480, 31));
        splitter->setOrientation(Qt::Horizontal);
        pb_add = new QPushButton(splitter);
        pb_add->setObjectName(QString::fromUtf8("pb_add"));
        splitter->addWidget(pb_add);
        pb_save = new QPushButton(splitter);
        pb_save->setObjectName(QString::fromUtf8("pb_save"));
        splitter->addWidget(pb_save);
        pb_search = new QPushButton(splitter);
        pb_search->setObjectName(QString::fromUtf8("pb_search"));
        splitter->addWidget(pb_search);
        pb_delete = new QPushButton(splitter);
        pb_delete->setObjectName(QString::fromUtf8("pb_delete"));
        splitter->addWidget(pb_delete);
        pb_previous = new QPushButton(splitter);
        pb_previous->setObjectName(QString::fromUtf8("pb_previous"));
        splitter->addWidget(pb_previous);
        pb_next = new QPushButton(splitter);
        pb_next->setObjectName(QString::fromUtf8("pb_next"));
        splitter->addWidget(pb_next);

        retranslateUi(rtu_para);

        QMetaObject::connectSlotsByName(rtu_para);
    } // setupUi

    void retranslateUi(QDialog *rtu_para)
    {
        label->setText(QApplication::translate("rtu_para", "\345\217\230\347\224\265\347\253\231\345\220\215\347\247\260:", nullptr));
        cb_rtu_producer->setItemText(0, QApplication::translate("rtu_para", "\346\267\261\345\234\263\345\270\202\347\247\221\351\231\206\347\224\265\345\255\220\346\234\211\351\231\220\345\205\254\345\217\270", nullptr));

        label_2->setText(QApplication::translate("rtu_para", "\345\210\266\351\200\240\345\216\202\345\256\266:", nullptr));
        label_3->setText(QApplication::translate("rtu_para", "\350\243\205\347\275\256\345\256\211\350\243\205\344\275\215\347\275\256:", nullptr));
        cb_position->setItemText(0, QApplication::translate("rtu_para", "\346\267\261\345\234\263\345\270\202\345\215\227\345\261\261\345\214\272\347\247\221\346\212\200\345\233\255\345\214\227\345\214\272\351\205\267\346\264\276\344\277\241\346\201\257\346\270\257\351\231\204\350\277\221", nullptr));

        label_4->setText(QApplication::translate("rtu_para", "\347\272\277\350\267\257\345\220\215\347\247\260:", nullptr));
        cb_rtu_number->setItemText(0, QApplication::translate("rtu_para", "123", nullptr));

        label_5->setText(QApplication::translate("rtu_para", "\345\207\272\345\216\202\347\274\226\345\217\267:", nullptr));
        label_6->setText(QApplication::translate("rtu_para", "\350\243\205\347\275\256(RTU)\345\236\213\345\217\267:", nullptr));
        label_7->setText(QApplication::translate("rtu_para", "\347\255\211\347\272\247:", nullptr));
        cb_rtu_grade->setItemText(0, QApplication::translate("rtu_para", "0.1", nullptr));
        cb_rtu_grade->setItemText(1, QApplication::translate("rtu_para", "0.2", nullptr));
        cb_rtu_grade->setItemText(2, QApplication::translate("rtu_para", "0.5", nullptr));
        cb_rtu_grade->setItemText(3, QApplication::translate("rtu_para", "1", nullptr));

        label_8->setText(QApplication::translate("rtu_para", "PT\344\272\214\346\254\241\347\224\265\345\216\213(V):", nullptr));
        cb_twice_v->setItemText(0, QApplication::translate("rtu_para", "57.7", nullptr));
        cb_twice_v->setItemText(1, QApplication::translate("rtu_para", "220", nullptr));
        cb_twice_v->setItemText(2, QApplication::translate("rtu_para", "380", nullptr));

        label_9->setText(QApplication::translate("rtu_para", "CT\344\272\214\346\254\241\347\224\265\346\265\201(A):", nullptr));
        label_10->setText(QApplication::translate("rtu_para", "PT\345\217\230\346\257\224:", nullptr));
        label_11->setText(QApplication::translate("rtu_para", "CT\345\217\230\346\257\224:", nullptr));
        label_12->setText(QApplication::translate("rtu_para", "\346\216\245\347\272\277\346\226\271\345\274\217:", nullptr));
        label_13->setText(QApplication::translate("rtu_para", "\351\200\232\350\256\257\345\215\217\350\256\256:", nullptr));
        label_14->setText(QApplication::translate("rtu_para", "\347\233\264\346\265\201\347\224\265\345\216\213\350\276\223\345\205\245:", nullptr));
        label_15->setText(QApplication::translate("rtu_para", "\347\233\264\346\265\201\347\224\265\345\216\213\350\276\223\345\205\245:", nullptr));
        label_16->setText(QApplication::translate("rtu_para", "\346\243\200\351\252\214\350\257\201\345\217\267:", nullptr));
        label_17->setText(QApplication::translate("rtu_para", "\345\255\227\347\254\254:", nullptr));
        label_18->setText(QApplication::translate("rtu_para", "\347\216\257\345\242\203\346\270\251\345\272\246:", nullptr));
        label_19->setText(QApplication::translate("rtu_para", "\346\243\200\345\256\232\345\221\2301:", nullptr));
        label_20->setText(QApplication::translate("rtu_para", "\347\233\270\345\257\271\346\271\277\345\272\246:", nullptr));
        label_21->setText(QApplication::translate("rtu_para", "\346\243\200\345\256\232\345\221\2302:", nullptr));
        label_22->setText(QApplication::translate("rtu_para", "\346\224\271\345\217\230\351\207\217\346\243\200\345\256\232\346\226\271\346\241\210:", nullptr));
        label_23->setText(QApplication::translate("rtu_para", "\350\257\257\345\267\256\346\243\200\345\256\232\346\226\271\346\241\210:", nullptr));
        label_24->setText(QApplication::translate("rtu_para", "\350\256\260\345\275\225\345\217\267:", nullptr));
        label_25->setText(QApplication::translate("rtu_para", "\345\217\267", nullptr));
        pb_tel_para->setText(QApplication::translate("rtu_para", "\344\270\213\344\270\200\346\255\245:\351\201\245\346\216\247\345\217\202\346\225\260", nullptr));
        te_record_page->setHtml(QApplication::translate("rtu_para", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0</p></body></html>", nullptr));
        pb_add->setText(QApplication::translate("rtu_para", "\345\242\236\345\212\240", nullptr));
        pb_save->setText(QApplication::translate("rtu_para", "\344\277\235\345\255\230", nullptr));
        pb_search->setText(QApplication::translate("rtu_para", "\346\237\245\350\257\242", nullptr));
        pb_delete->setText(QApplication::translate("rtu_para", "\345\210\240\351\231\244", nullptr));
        pb_previous->setText(QApplication::translate("rtu_para", "\344\270\212\344\270\200\344\270\252", nullptr));
        pb_next->setText(QApplication::translate("rtu_para", "\344\270\213\344\270\200\344\270\252", nullptr));
        Q_UNUSED(rtu_para);
    } // retranslateUi

};

namespace Ui {
    class rtu_para: public Ui_rtu_para {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTU_PARA_H
