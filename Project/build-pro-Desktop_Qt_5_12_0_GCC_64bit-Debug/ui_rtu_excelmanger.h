/********************************************************************************
** Form generated from reading UI file 'rtu_excelmanger.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTU_EXCELMANGER_H
#define UI_RTU_EXCELMANGER_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_rtu_excelmanger
{
public:
    QPushButton *pb_search;
    QPushButton *pb_toexcel;
    QPushButton *pb_add;
    QPushButton *pb_append;
    QPushButton *pb_copy;
    QPushButton *pb_quit;
    QCheckBox *checkBox_para;
    QCheckBox *checkBox_allsum;
    QCheckBox *checkBox_actulexcel;
    QCheckBox *checkBox_checkbook;
    QCheckBox *checkBox_checkvarexcel;
    QCheckBox *checkBox_visexcel;
    QCheckBox *checkBox_telposrecord;
    QCheckBox *checkBox_telverifyrecord;
    QCheckBox *checkBox_timerecord;
    QCheckBox *checkBox_looprecord;
    QTableWidget *tableWidget;
    QCheckBox *checkBox_num5;
    QCheckBox *checkBox_num3;
    QCheckBox *checkBox_num4;
    QCheckBox *checkBox_num2;
    QCheckBox *checkBox_num1;
    QTextEdit *textEdit_1;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_6;
    QTextEdit *textEdit_7;
    QTextEdit *textEdit_9;
    QTextEdit *textEdit_8;
    QTextEdit *textEdit_num1;
    QTextEdit *textEdit_num2;
    QTextEdit *textEdit_num3;
    QTextEdit *textEdit_num4;
    QTextEdit *textEdit_num5;

    void setupUi(QDialog *rtu_excelmanger)
    {
        if (rtu_excelmanger->objectName().isEmpty())
            rtu_excelmanger->setObjectName(QString::fromUtf8("rtu_excelmanger"));
        rtu_excelmanger->resize(700, 634);
        pb_search = new QPushButton(rtu_excelmanger);
        pb_search->setObjectName(QString::fromUtf8("pb_search"));
        pb_search->setGeometry(QRect(560, 70, 101, 30));
        QFont font;
        font.setPointSize(11);
        pb_search->setFont(font);
        pb_toexcel = new QPushButton(rtu_excelmanger);
        pb_toexcel->setObjectName(QString::fromUtf8("pb_toexcel"));
        pb_toexcel->setGeometry(QRect(560, 130, 101, 30));
        pb_add = new QPushButton(rtu_excelmanger);
        pb_add->setObjectName(QString::fromUtf8("pb_add"));
        pb_add->setGeometry(QRect(560, 200, 101, 30));
        pb_append = new QPushButton(rtu_excelmanger);
        pb_append->setObjectName(QString::fromUtf8("pb_append"));
        pb_append->setGeometry(QRect(560, 270, 101, 30));
        pb_copy = new QPushButton(rtu_excelmanger);
        pb_copy->setObjectName(QString::fromUtf8("pb_copy"));
        pb_copy->setGeometry(QRect(560, 330, 101, 30));
        pb_copy->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        pb_quit = new QPushButton(rtu_excelmanger);
        pb_quit->setObjectName(QString::fromUtf8("pb_quit"));
        pb_quit->setGeometry(QRect(560, 390, 101, 30));
        checkBox_para = new QCheckBox(rtu_excelmanger);
        checkBox_para->setObjectName(QString::fromUtf8("checkBox_para"));
        checkBox_para->setGeometry(QRect(30, 10, 92, 23));
        checkBox_allsum = new QCheckBox(rtu_excelmanger);
        checkBox_allsum->setObjectName(QString::fromUtf8("checkBox_allsum"));
        checkBox_allsum->setGeometry(QRect(190, 10, 131, 23));
        checkBox_actulexcel = new QCheckBox(rtu_excelmanger);
        checkBox_actulexcel->setObjectName(QString::fromUtf8("checkBox_actulexcel"));
        checkBox_actulexcel->setGeometry(QRect(480, 10, 151, 23));
        checkBox_checkbook = new QCheckBox(rtu_excelmanger);
        checkBox_checkbook->setObjectName(QString::fromUtf8("checkBox_checkbook"));
        checkBox_checkbook->setGeometry(QRect(30, 40, 92, 23));
        checkBox_checkvarexcel = new QCheckBox(rtu_excelmanger);
        checkBox_checkvarexcel->setObjectName(QString::fromUtf8("checkBox_checkvarexcel"));
        checkBox_checkvarexcel->setGeometry(QRect(190, 40, 121, 23));
        checkBox_visexcel = new QCheckBox(rtu_excelmanger);
        checkBox_visexcel->setObjectName(QString::fromUtf8("checkBox_visexcel"));
        checkBox_visexcel->setGeometry(QRect(480, 40, 151, 23));
        checkBox_telposrecord = new QCheckBox(rtu_excelmanger);
        checkBox_telposrecord->setObjectName(QString::fromUtf8("checkBox_telposrecord"));
        checkBox_telposrecord->setGeometry(QRect(30, 70, 141, 23));
        checkBox_telverifyrecord = new QCheckBox(rtu_excelmanger);
        checkBox_telverifyrecord->setObjectName(QString::fromUtf8("checkBox_telverifyrecord"));
        checkBox_telverifyrecord->setGeometry(QRect(30, 110, 131, 23));
        checkBox_timerecord = new QCheckBox(rtu_excelmanger);
        checkBox_timerecord->setObjectName(QString::fromUtf8("checkBox_timerecord"));
        checkBox_timerecord->setGeometry(QRect(30, 150, 111, 23));
        checkBox_looprecord = new QCheckBox(rtu_excelmanger);
        checkBox_looprecord->setObjectName(QString::fromUtf8("checkBox_looprecord"));
        checkBox_looprecord->setGeometry(QRect(30, 190, 111, 23));
        tableWidget = new QTableWidget(rtu_excelmanger);
        if (tableWidget->columnCount() < 15)
            tableWidget->setColumnCount(15);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        QFont font1;
        font1.setPointSize(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setFont(font1);
        __qtablewidgetitem->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font1);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem2->setFont(font1);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem3->setFont(font1);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem4->setFont(font1);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem5->setFont(font1);
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem6->setFont(font1);
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem7->setFont(font1);
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem8->setFont(font1);
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem9->setFont(font1);
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem10->setFont(font1);
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem11->setFont(font1);
        tableWidget->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem12->setFont(font1);
        tableWidget->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem13->setFont(font1);
        tableWidget->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem14->setFont(font1);
        tableWidget->setHorizontalHeaderItem(14, __qtablewidgetitem14);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem16->setFont(font1);
        __qtablewidgetitem16->setForeground(brush);
        __qtablewidgetitem16->setFlags(Qt::NoItemFlags);
        tableWidget->setItem(0, 0, __qtablewidgetitem16);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 430, 681, 201));
        tableWidget->setFont(font1);
        tableWidget->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        tableWidget->setTabKeyNavigation(false);
        tableWidget->setProperty("showDropIndicator", QVariant(false));
        tableWidget->setDragDropOverwriteMode(false);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->horizontalHeader()->setDefaultSectionSize(85);
        tableWidget->horizontalHeader()->setMinimumSectionSize(36);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setHighlightSections(false);
        checkBox_num5 = new QCheckBox(rtu_excelmanger);
        checkBox_num5->setObjectName(QString::fromUtf8("checkBox_num5"));
        checkBox_num5->setGeometry(QRect(30, 390, 92, 23));
        checkBox_num3 = new QCheckBox(rtu_excelmanger);
        checkBox_num3->setObjectName(QString::fromUtf8("checkBox_num3"));
        checkBox_num3->setGeometry(QRect(30, 310, 92, 23));
        checkBox_num4 = new QCheckBox(rtu_excelmanger);
        checkBox_num4->setObjectName(QString::fromUtf8("checkBox_num4"));
        checkBox_num4->setGeometry(QRect(30, 350, 92, 23));
        checkBox_num2 = new QCheckBox(rtu_excelmanger);
        checkBox_num2->setObjectName(QString::fromUtf8("checkBox_num2"));
        checkBox_num2->setGeometry(QRect(30, 270, 92, 23));
        checkBox_num1 = new QCheckBox(rtu_excelmanger);
        checkBox_num1->setObjectName(QString::fromUtf8("checkBox_num1"));
        checkBox_num1->setGeometry(QRect(30, 230, 92, 23));
        textEdit_1 = new QTextEdit(rtu_excelmanger);
        textEdit_1->setObjectName(QString::fromUtf8("textEdit_1"));
        textEdit_1->setGeometry(QRect(190, 70, 331, 28));
        textEdit_2 = new QTextEdit(rtu_excelmanger);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(190, 110, 331, 28));
        textEdit_3 = new QTextEdit(rtu_excelmanger);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(190, 150, 331, 28));
        textEdit_4 = new QTextEdit(rtu_excelmanger);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setGeometry(QRect(190, 190, 331, 28));
        textEdit_5 = new QTextEdit(rtu_excelmanger);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));
        textEdit_5->setGeometry(QRect(190, 230, 331, 28));
        textEdit_6 = new QTextEdit(rtu_excelmanger);
        textEdit_6->setObjectName(QString::fromUtf8("textEdit_6"));
        textEdit_6->setGeometry(QRect(190, 270, 331, 28));
        textEdit_7 = new QTextEdit(rtu_excelmanger);
        textEdit_7->setObjectName(QString::fromUtf8("textEdit_7"));
        textEdit_7->setGeometry(QRect(190, 310, 331, 28));
        textEdit_9 = new QTextEdit(rtu_excelmanger);
        textEdit_9->setObjectName(QString::fromUtf8("textEdit_9"));
        textEdit_9->setGeometry(QRect(190, 390, 331, 28));
        textEdit_8 = new QTextEdit(rtu_excelmanger);
        textEdit_8->setObjectName(QString::fromUtf8("textEdit_8"));
        textEdit_8->setGeometry(QRect(190, 350, 331, 28));
        textEdit_num1 = new QTextEdit(rtu_excelmanger);
        textEdit_num1->setObjectName(QString::fromUtf8("textEdit_num1"));
        textEdit_num1->setGeometry(QRect(70, 230, 101, 28));
        textEdit_num2 = new QTextEdit(rtu_excelmanger);
        textEdit_num2->setObjectName(QString::fromUtf8("textEdit_num2"));
        textEdit_num2->setGeometry(QRect(70, 270, 101, 28));
        textEdit_num3 = new QTextEdit(rtu_excelmanger);
        textEdit_num3->setObjectName(QString::fromUtf8("textEdit_num3"));
        textEdit_num3->setGeometry(QRect(70, 310, 101, 28));
        textEdit_num4 = new QTextEdit(rtu_excelmanger);
        textEdit_num4->setObjectName(QString::fromUtf8("textEdit_num4"));
        textEdit_num4->setGeometry(QRect(70, 350, 101, 28));
        textEdit_num5 = new QTextEdit(rtu_excelmanger);
        textEdit_num5->setObjectName(QString::fromUtf8("textEdit_num5"));
        textEdit_num5->setGeometry(QRect(70, 390, 101, 28));

        retranslateUi(rtu_excelmanger);

        QMetaObject::connectSlotsByName(rtu_excelmanger);
    } // setupUi

    void retranslateUi(QDialog *rtu_excelmanger)
    {
        rtu_excelmanger->setWindowTitle(QApplication::translate("rtu_excelmanger", "Dialog", nullptr));
        pb_search->setText(QApplication::translate("rtu_excelmanger", "\346\237\245\346\211\276", nullptr));
        pb_toexcel->setText(QApplication::translate("rtu_excelmanger", "\345\257\274\345\207\272\345\210\260Excel", nullptr));
        pb_add->setText(QApplication::translate("rtu_excelmanger", "\345\220\210\345\271\266\346\225\260\346\215\256\345\272\223", nullptr));
        pb_append->setText(QApplication::translate("rtu_excelmanger", "\350\277\275\345\212\240\346\225\260\346\215\256\345\272\223", nullptr));
        pb_copy->setText(QApplication::translate("rtu_excelmanger", "\345\244\215\345\210\266\345\275\223\345\211\215\347\272\277\350\267\257", nullptr));
        pb_quit->setText(QApplication::translate("rtu_excelmanger", "\351\200\200\345\207\272", nullptr));
        checkBox_para->setText(QApplication::translate("rtu_excelmanger", "\345\217\202\346\225\260\345\217\260\345\270\220", nullptr));
        checkBox_allsum->setText(QApplication::translate("rtu_excelmanger", "\346\243\200\351\252\214\350\256\260\345\275\225\346\261\207\346\200\273\350\241\250", nullptr));
        checkBox_actulexcel->setText(QApplication::translate("rtu_excelmanger", "\345\233\275\347\224\265\345\256\236\350\264\237\350\215\267\346\243\200\351\252\214\350\241\250", nullptr));
        checkBox_checkbook->setText(QApplication::translate("rtu_excelmanger", "\346\243\200\351\252\214\350\257\201\344\271\246", nullptr));
        checkBox_checkvarexcel->setText(QApplication::translate("rtu_excelmanger", "\346\224\271\345\217\230\351\207\217\350\256\260\345\275\225\350\241\250", nullptr));
        checkBox_visexcel->setText(QApplication::translate("rtu_excelmanger", "\345\233\275\347\224\265\350\231\232\350\264\237\350\215\267\346\243\200\351\252\214\350\241\250", nullptr));
        checkBox_telposrecord->setText(QApplication::translate("rtu_excelmanger", "\351\201\245\344\277\241\345\217\230\344\275\215\346\243\200\345\256\232\350\256\260\345\275\225", nullptr));
        checkBox_telverifyrecord->setText(QApplication::translate("rtu_excelmanger", "\351\201\245\346\216\247\346\243\200\345\256\232\350\256\260\345\275\225\350\241\250", nullptr));
        checkBox_timerecord->setText(QApplication::translate("rtu_excelmanger", "\345\220\214\346\234\237\346\243\200\345\256\232\350\256\260\345\275\225", nullptr));
        checkBox_looprecord->setText(QApplication::translate("rtu_excelmanger", "\351\227\255\351\224\201\346\243\200\345\256\232\350\256\260\345\275\225", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("rtu_excelmanger", "\350\256\260\345\275\225\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("rtu_excelmanger", "\345\275\225\345\205\245\346\227\245\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("rtu_excelmanger", "\345\217\230\347\224\265\347\253\231\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("rtu_excelmanger", "\345\256\211\350\243\205\344\275\215\347\275\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("rtu_excelmanger", "\350\243\205\347\275\256\345\236\213\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("rtu_excelmanger", "\347\272\277\350\267\257\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("rtu_excelmanger", "RTU\346\200\273\347\273\223\350\256\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("rtu_excelmanger", "\346\254\241\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("rtu_excelmanger", "\346\243\200\351\252\214\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("rtu_excelmanger", "\350\257\257\345\267\256\347\273\223\350\256\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("rtu_excelmanger", "\346\211\253\346\217\217\345\221\250\346\234\237\347\273\223\350\256\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("rtu_excelmanger", "\344\277\241\346\201\257\345\223\215\345\272\224\346\227\266\351\227\264\347\273\223\350\256\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QApplication::translate("rtu_excelmanger", "\346\224\271\345\217\230\351\207\217\347\273\223\350\256\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->horizontalHeaderItem(13);
        ___qtablewidgetitem13->setText(QApplication::translate("rtu_excelmanger", "\351\201\245\344\277\241\345\217\230\344\275\215\347\273\223\350\256\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->horizontalHeaderItem(14);
        ___qtablewidgetitem14->setText(QApplication::translate("rtu_excelmanger", "\347\254\254\345\207\240\346\254\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem15->setText(QApplication::translate("rtu_excelmanger", "New Row", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(0, 0);
        ___qtablewidgetitem16->setText(QApplication::translate("rtu_excelmanger", "1", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        checkBox_num5->setText(QApplication::translate("rtu_excelmanger", "5", nullptr));
        checkBox_num3->setText(QApplication::translate("rtu_excelmanger", "3", nullptr));
        checkBox_num4->setText(QApplication::translate("rtu_excelmanger", "4", nullptr));
        checkBox_num2->setText(QApplication::translate("rtu_excelmanger", "2", nullptr));
        checkBox_num1->setText(QApplication::translate("rtu_excelmanger", "1", nullptr));
        textEdit_1->setHtml(QApplication::translate("rtu_excelmanger", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rtu_excelmanger: public Ui_rtu_excelmanger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTU_EXCELMANGER_H
