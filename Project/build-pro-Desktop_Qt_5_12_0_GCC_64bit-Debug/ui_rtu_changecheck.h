/********************************************************************************
** Form generated from reading UI file 'rtu_changecheck.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTU_CHANGECHECK_H
#define UI_RTU_CHANGECHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_rtu_changecheck
{
public:
    QLabel *label;
    QComboBox *cb_cctype;
    QLabel *label_2;
    QComboBox *cb_cctype_2;
    QTableWidget *tableWidget;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_12;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QComboBox *cb_device;
    QComboBox *cb_u;
    QComboBox *cb_harmonic;
    QComboBox *cb_deviced;
    QComboBox *cb_haphase;
    QComboBox *cb_i;
    QComboBox *cb_number;
    QComboBox *cb_hanum;
    QComboBox *cb_automan;
    QComboBox *cb_cos;
    QComboBox *cb_freq;
    QComboBox *cb_phase;
    QComboBox *cb_linetype;

    void setupUi(QDialog *rtu_changecheck)
    {
        if (rtu_changecheck->objectName().isEmpty())
            rtu_changecheck->setObjectName(QString::fromUtf8("rtu_changecheck"));
        rtu_changecheck->setWindowModality(Qt::WindowModal);
        rtu_changecheck->resize(800, 456);
        rtu_changecheck->setModal(false);
        label = new QLabel(rtu_changecheck);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 91, 17));
        cb_cctype = new QComboBox(rtu_changecheck);
        cb_cctype->addItem(QString());
        cb_cctype->addItem(QString());
        cb_cctype->addItem(QString());
        cb_cctype->addItem(QString());
        cb_cctype->addItem(QString());
        cb_cctype->setObjectName(QString::fromUtf8("cb_cctype"));
        cb_cctype->setGeometry(QRect(130, 10, 181, 35));
        label_2 = new QLabel(rtu_changecheck);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 20, 221, 17));
        cb_cctype_2 = new QComboBox(rtu_changecheck);
        cb_cctype_2->addItem(QString());
        cb_cctype_2->addItem(QString());
        cb_cctype_2->addItem(QString());
        cb_cctype_2->addItem(QString());
        cb_cctype_2->addItem(QString());
        cb_cctype_2->addItem(QString());
        cb_cctype_2->setObjectName(QString::fromUtf8("cb_cctype_2"));
        cb_cctype_2->setGeometry(QRect(490, 10, 191, 35));
        tableWidget = new QTableWidget(rtu_changecheck);
        if (tableWidget->columnCount() < 9)
            tableWidget->setColumnCount(9);
        QFont font;
        font.setPointSize(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font);
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font);
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font);
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font);
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        if (tableWidget->rowCount() < 4)
            tableWidget->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem12);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem13->setFont(font);
        __qtablewidgetitem13->setForeground(brush);
        __qtablewidgetitem13->setFlags(Qt::NoItemFlags);
        tableWidget->setItem(0, 0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem14->setForeground(brush);
        __qtablewidgetitem14->setFlags(Qt::NoItemFlags);
        tableWidget->setItem(1, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem15->setForeground(brush);
        __qtablewidgetitem15->setFlags(Qt::NoItemFlags);
        tableWidget->setItem(2, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem16->setForeground(brush);
        __qtablewidgetitem16->setFlags(Qt::NoItemFlags);
        tableWidget->setItem(3, 0, __qtablewidgetitem16);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 60, 760, 160));
        tableWidget->setFont(font);
        tableWidget->horizontalHeader()->setDefaultSectionSize(88);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setHighlightSections(false);
        label_3 = new QLabel(rtu_changecheck);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 240, 71, 17));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(rtu_changecheck);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 280, 71, 17));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(rtu_changecheck);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 320, 71, 17));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(rtu_changecheck);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(63, 360, 71, 17));
        label_7 = new QLabel(rtu_changecheck);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(290, 320, 71, 17));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8 = new QLabel(rtu_changecheck);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(270, 240, 91, 20));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_9 = new QLabel(rtu_changecheck);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(290, 280, 71, 17));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_12 = new QLabel(rtu_changecheck);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(560, 280, 71, 17));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_11 = new QLabel(rtu_changecheck);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(560, 320, 71, 17));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_10 = new QLabel(rtu_changecheck);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(540, 240, 91, 20));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_13 = new QLabel(rtu_changecheck);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(570, 360, 71, 17));
        label_14 = new QLabel(rtu_changecheck);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(230, 360, 71, 17));
        label_15 = new QLabel(rtu_changecheck);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(400, 360, 71, 17));
        pushButton = new QPushButton(rtu_changecheck);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 410, 89, 30));
        pushButton_2 = new QPushButton(rtu_changecheck);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 410, 89, 30));
        pushButton_3 = new QPushButton(rtu_changecheck);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 410, 89, 30));
        pushButton_4 = new QPushButton(rtu_changecheck);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(690, 410, 89, 30));
        cb_device = new QComboBox(rtu_changecheck);
        cb_device->setObjectName(QString::fromUtf8("cb_device"));
        cb_device->setGeometry(QRect(110, 234, 141, 30));
        cb_u = new QComboBox(rtu_changecheck);
        cb_u->addItem(QString());
        cb_u->addItem(QString());
        cb_u->addItem(QString());
        cb_u->addItem(QString());
        cb_u->setObjectName(QString::fromUtf8("cb_u"));
        cb_u->setGeometry(QRect(110, 275, 141, 30));
        cb_harmonic = new QComboBox(rtu_changecheck);
        cb_harmonic->addItem(QString());
        cb_harmonic->addItem(QString());
        cb_harmonic->addItem(QString());
        cb_harmonic->addItem(QString());
        cb_harmonic->addItem(QString());
        cb_harmonic->setObjectName(QString::fromUtf8("cb_harmonic"));
        cb_harmonic->setGeometry(QRect(110, 314, 141, 30));
        cb_deviced = new QComboBox(rtu_changecheck);
        cb_deviced->setObjectName(QString::fromUtf8("cb_deviced"));
        cb_deviced->setGeometry(QRect(370, 234, 141, 30));
        cb_haphase = new QComboBox(rtu_changecheck);
        cb_haphase->addItem(QString());
        cb_haphase->addItem(QString());
        cb_haphase->addItem(QString());
        cb_haphase->addItem(QString());
        cb_haphase->addItem(QString());
        cb_haphase->setObjectName(QString::fromUtf8("cb_haphase"));
        cb_haphase->setGeometry(QRect(370, 314, 141, 30));
        cb_i = new QComboBox(rtu_changecheck);
        cb_i->addItem(QString());
        cb_i->addItem(QString());
        cb_i->addItem(QString());
        cb_i->addItem(QString());
        cb_i->setObjectName(QString::fromUtf8("cb_i"));
        cb_i->setGeometry(QRect(370, 275, 141, 30));
        cb_number = new QComboBox(rtu_changecheck);
        cb_number->setObjectName(QString::fromUtf8("cb_number"));
        cb_number->setGeometry(QRect(640, 234, 141, 30));
        cb_hanum = new QComboBox(rtu_changecheck);
        cb_hanum->addItem(QString());
        cb_hanum->addItem(QString());
        cb_hanum->addItem(QString());
        cb_hanum->addItem(QString());
        cb_hanum->addItem(QString());
        cb_hanum->addItem(QString());
        cb_hanum->addItem(QString());
        cb_hanum->addItem(QString());
        cb_hanum->addItem(QString());
        cb_hanum->setObjectName(QString::fromUtf8("cb_hanum"));
        cb_hanum->setGeometry(QRect(640, 275, 141, 30));
        cb_automan = new QComboBox(rtu_changecheck);
        cb_automan->addItem(QString());
        cb_automan->addItem(QString());
        cb_automan->addItem(QString());
        cb_automan->setObjectName(QString::fromUtf8("cb_automan"));
        cb_automan->setGeometry(QRect(640, 314, 141, 30));
        cb_cos = new QComboBox(rtu_changecheck);
        cb_cos->addItem(QString());
        cb_cos->addItem(QString());
        cb_cos->addItem(QString());
        cb_cos->setObjectName(QString::fromUtf8("cb_cos"));
        cb_cos->setGeometry(QRect(110, 355, 81, 30));
        cb_freq = new QComboBox(rtu_changecheck);
        cb_freq->addItem(QString());
        cb_freq->addItem(QString());
        cb_freq->addItem(QString());
        cb_freq->setObjectName(QString::fromUtf8("cb_freq"));
        cb_freq->setGeometry(QRect(280, 355, 100, 30));
        cb_phase = new QComboBox(rtu_changecheck);
        cb_phase->addItem(QString());
        cb_phase->addItem(QString());
        cb_phase->addItem(QString());
        cb_phase->addItem(QString());
        cb_phase->addItem(QString());
        cb_phase->addItem(QString());
        cb_phase->addItem(QString());
        cb_phase->setObjectName(QString::fromUtf8("cb_phase"));
        cb_phase->setGeometry(QRect(450, 355, 61, 30));
        cb_linetype = new QComboBox(rtu_changecheck);
        cb_linetype->addItem(QString());
        cb_linetype->addItem(QString());
        cb_linetype->setObjectName(QString::fromUtf8("cb_linetype"));
        cb_linetype->setGeometry(QRect(640, 355, 141, 30));

        retranslateUi(rtu_changecheck);

        QMetaObject::connectSlotsByName(rtu_changecheck);
    } // setupUi

    void retranslateUi(QDialog *rtu_changecheck)
    {
        rtu_changecheck->setWindowTitle(QApplication::translate("rtu_changecheck", "Dialog", nullptr));
        label->setText(QApplication::translate("rtu_changecheck", "\345\275\261\345\223\215\351\207\217\347\261\273\345\236\213:", nullptr));
        cb_cctype->setItemText(0, QApplication::translate("rtu_changecheck", "\350\276\223\345\205\245\351\207\217\351\242\221\347\216\207", nullptr));
        cb_cctype->setItemText(1, QApplication::translate("rtu_changecheck", "\346\263\242\345\275\242\347\225\270\345\217\230", nullptr));
        cb_cctype->setItemText(2, QApplication::translate("rtu_changecheck", "\350\266\205\351\207\217\351\231\220", nullptr));
        cb_cctype->setItemText(3, QApplication::translate("rtu_changecheck", "\350\207\252\347\203\255", nullptr));
        cb_cctype->setItemText(4, QApplication::translate("rtu_changecheck", "\347\224\265\346\272\220\347\224\265\345\216\213", nullptr));

        label_2->setText(QApplication::translate("rtu_changecheck", "\350\242\253\346\265\213\351\207\217\347\261\273\345\236\213:", nullptr));
        cb_cctype_2->setItemText(0, QApplication::translate("rtu_changecheck", "\344\272\244\346\265\201\347\224\265\345\216\213", nullptr));
        cb_cctype_2->setItemText(1, QApplication::translate("rtu_changecheck", "\344\272\244\346\265\201\347\224\265\346\265\201", nullptr));
        cb_cctype_2->setItemText(2, QApplication::translate("rtu_changecheck", "\346\234\211\345\212\237\345\212\237\347\216\207", nullptr));
        cb_cctype_2->setItemText(3, QApplication::translate("rtu_changecheck", "\346\227\240\345\212\237\345\212\237\347\216\207", nullptr));
        cb_cctype_2->setItemText(4, QApplication::translate("rtu_changecheck", "\345\212\237\347\216\207\345\233\240\346\225\260", nullptr));
        cb_cctype_2->setItemText(5, QApplication::translate("rtu_changecheck", "\351\242\221\347\216\207", nullptr));

        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("rtu_changecheck", "\345\272\217\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("rtu_changecheck", "\345\275\261\345\223\215\351\207\217\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("rtu_changecheck", "\345\275\261\345\223\215\351\207\217\350\276\223\345\205\245\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("rtu_changecheck", "\346\224\271\345\217\230\351\207\217\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("rtu_changecheck", "\346\224\271\345\217\230\351\207\217\350\276\223\345\205\245\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("rtu_changecheck", "\350\276\223\345\205\245\346\265\213\351\207\217\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("rtu_changecheck", "RTU\346\265\213\351\207\217\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("rtu_changecheck", "\350\257\257\345\267\256\345\256\236\346\265\213\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("rtu_changecheck", "\350\257\257\345\267\256\345\205\201\350\256\270\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("rtu_changecheck", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("rtu_changecheck", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem11->setText(QApplication::translate("rtu_changecheck", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem12->setText(QApplication::translate("rtu_changecheck", "4", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(0, 0);
        ___qtablewidgetitem13->setText(QApplication::translate("rtu_changecheck", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(1, 0);
        ___qtablewidgetitem14->setText(QApplication::translate("rtu_changecheck", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(2, 0);
        ___qtablewidgetitem15->setText(QApplication::translate("rtu_changecheck", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(3, 0);
        ___qtablewidgetitem16->setText(QApplication::translate("rtu_changecheck", "4", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        label_3->setText(QApplication::translate("rtu_changecheck", "\350\256\276\345\244\207\345\220\215\347\247\260:", nullptr));
        label_4->setText(QApplication::translate("rtu_changecheck", "U(V):", nullptr));
        label_5->setText(QApplication::translate("rtu_changecheck", "\350\260\220\346\263\242\345\220\253\351\207\217:", nullptr));
        label_6->setText(QApplication::translate("rtu_changecheck", "cos\317\206:", nullptr));
        label_7->setText(QApplication::translate("rtu_changecheck", "\350\260\220\346\263\242\347\233\270\344\275\215:", nullptr));
        label_8->setText(QApplication::translate("rtu_changecheck", "\350\242\253\346\265\213\351\207\217\345\220\215\347\247\260:", nullptr));
        label_9->setText(QApplication::translate("rtu_changecheck", "I(A):", nullptr));
        label_12->setText(QApplication::translate("rtu_changecheck", "\350\260\220\346\263\242\346\254\241\346\225\260:", nullptr));
        label_11->setText(QApplication::translate("rtu_changecheck", "\350\207\252\345\212\250/\346\211\213\345\212\250:", nullptr));
        label_10->setText(QApplication::translate("rtu_changecheck", "\350\242\253\346\265\213\351\207\217\345\272\217\345\217\267:", nullptr));
        label_13->setText(QApplication::translate("rtu_changecheck", "\346\216\245\347\272\277\346\226\271\345\274\217:", nullptr));
        label_14->setText(QApplication::translate("rtu_changecheck", "f(Hz):", nullptr));
        label_15->setText(QApplication::translate("rtu_changecheck", "\347\233\270\345\210\253:", nullptr));
        pushButton->setText(QApplication::translate("rtu_changecheck", "\350\276\223\345\207\272", nullptr));
        pushButton_2->setText(QApplication::translate("rtu_changecheck", "\350\257\273\345\217\226\350\256\260\345\275\225", nullptr));
        pushButton_3->setText(QApplication::translate("rtu_changecheck", "\344\277\235\345\255\230", nullptr));
        pushButton_4->setText(QApplication::translate("rtu_changecheck", "\351\200\200\345\207\272", nullptr));
        cb_u->setItemText(0, QApplication::translate("rtu_changecheck", "57.70", nullptr));
        cb_u->setItemText(1, QApplication::translate("rtu_changecheck", "100.00", nullptr));
        cb_u->setItemText(2, QApplication::translate("rtu_changecheck", "220.00", nullptr));
        cb_u->setItemText(3, QApplication::translate("rtu_changecheck", "380.00", nullptr));

        cb_harmonic->setItemText(0, QApplication::translate("rtu_changecheck", "0", nullptr));
        cb_harmonic->setItemText(1, QApplication::translate("rtu_changecheck", "10", nullptr));
        cb_harmonic->setItemText(2, QApplication::translate("rtu_changecheck", "20", nullptr));
        cb_harmonic->setItemText(3, QApplication::translate("rtu_changecheck", "30", nullptr));
        cb_harmonic->setItemText(4, QApplication::translate("rtu_changecheck", "40", nullptr));

        cb_haphase->setItemText(0, QApplication::translate("rtu_changecheck", "0", nullptr));
        cb_haphase->setItemText(1, QApplication::translate("rtu_changecheck", "180", nullptr));
        cb_haphase->setItemText(2, QApplication::translate("rtu_changecheck", "30", nullptr));
        cb_haphase->setItemText(3, QApplication::translate("rtu_changecheck", "60", nullptr));
        cb_haphase->setItemText(4, QApplication::translate("rtu_changecheck", "90", nullptr));

        cb_i->setItemText(0, QApplication::translate("rtu_changecheck", "1.0", nullptr));
        cb_i->setItemText(1, QApplication::translate("rtu_changecheck", "2.0", nullptr));
        cb_i->setItemText(2, QApplication::translate("rtu_changecheck", "5.0", nullptr));
        cb_i->setItemText(3, QApplication::translate("rtu_changecheck", "20.0", nullptr));

        cb_hanum->setItemText(0, QApplication::translate("rtu_changecheck", "1", nullptr));
        cb_hanum->setItemText(1, QApplication::translate("rtu_changecheck", "2", nullptr));
        cb_hanum->setItemText(2, QApplication::translate("rtu_changecheck", "3", nullptr));
        cb_hanum->setItemText(3, QApplication::translate("rtu_changecheck", "4", nullptr));
        cb_hanum->setItemText(4, QApplication::translate("rtu_changecheck", "5", nullptr));
        cb_hanum->setItemText(5, QApplication::translate("rtu_changecheck", "6", nullptr));
        cb_hanum->setItemText(6, QApplication::translate("rtu_changecheck", "7", nullptr));
        cb_hanum->setItemText(7, QApplication::translate("rtu_changecheck", "8", nullptr));
        cb_hanum->setItemText(8, QApplication::translate("rtu_changecheck", "9", nullptr));

        cb_automan->setItemText(0, QApplication::translate("rtu_changecheck", "\350\207\252\345\212\250", nullptr));
        cb_automan->setItemText(1, QApplication::translate("rtu_changecheck", "\346\211\213\345\212\250", nullptr));
        cb_automan->setItemText(2, QApplication::translate("rtu_changecheck", "\345\215\212\350\207\252\345\212\250", nullptr));

        cb_cos->setItemText(0, QApplication::translate("rtu_changecheck", "1.0", nullptr));
        cb_cos->setItemText(1, QApplication::translate("rtu_changecheck", "0.5L", nullptr));
        cb_cos->setItemText(2, QApplication::translate("rtu_changecheck", "0.5C", nullptr));

        cb_freq->setItemText(0, QApplication::translate("rtu_changecheck", "45", nullptr));
        cb_freq->setItemText(1, QApplication::translate("rtu_changecheck", "50", nullptr));
        cb_freq->setItemText(2, QApplication::translate("rtu_changecheck", "55", nullptr));

        cb_phase->setItemText(0, QApplication::translate("rtu_changecheck", "A\347\233\270", nullptr));
        cb_phase->setItemText(1, QApplication::translate("rtu_changecheck", "B\347\233\270", nullptr));
        cb_phase->setItemText(2, QApplication::translate("rtu_changecheck", "C\347\233\270", nullptr));
        cb_phase->setItemText(3, QApplication::translate("rtu_changecheck", "\345\220\210\345\205\203", nullptr));
        cb_phase->setItemText(4, QApplication::translate("rtu_changecheck", "A\345\205\203", nullptr));
        cb_phase->setItemText(5, QApplication::translate("rtu_changecheck", "B\345\205\203", nullptr));
        cb_phase->setItemText(6, QApplication::translate("rtu_changecheck", "C\345\205\203", nullptr));

        cb_linetype->setItemText(0, QApplication::translate("rtu_changecheck", "\344\270\211\347\233\270\345\233\233\347\272\277", nullptr));
        cb_linetype->setItemText(1, QApplication::translate("rtu_changecheck", "\344\270\211\347\233\270\344\270\211\347\272\277", nullptr));

    } // retranslateUi

};

namespace Ui {
    class rtu_changecheck: public Ui_rtu_changecheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTU_CHANGECHECK_H
