/********************************************************************************
** Form generated from reading UI file 'rtu_fieldcheck.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTU_FIELDCHECK_H
#define UI_RTU_FIELDCHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_rtu_fieldcheck
{
public:
    QTableWidget *tableWidget;
    QPushButton *pb_read;
    QPushButton *pb_print;
    QPushButton *pb_quit;

    void setupUi(QDialog *rtu_fieldcheck)
    {
        if (rtu_fieldcheck->objectName().isEmpty())
            rtu_fieldcheck->setObjectName(QString::fromUtf8("rtu_fieldcheck"));
        rtu_fieldcheck->resize(640, 480);
        tableWidget = new QTableWidget(rtu_fieldcheck);
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
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem9);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem10->setFont(font);
        __qtablewidgetitem10->setForeground(brush);
        __qtablewidgetitem10->setFlags(Qt::NoItemFlags);
        tableWidget->setItem(0, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 5, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 6, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 7, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 8, __qtablewidgetitem18);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 20, 601, 381));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setFont(font);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->horizontalHeader()->setDefaultSectionSize(75);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setHighlightSections(false);
        pb_read = new QPushButton(rtu_fieldcheck);
        pb_read->setObjectName(QString::fromUtf8("pb_read"));
        pb_read->setGeometry(QRect(270, 420, 89, 35));
        pb_print = new QPushButton(rtu_fieldcheck);
        pb_print->setObjectName(QString::fromUtf8("pb_print"));
        pb_print->setGeometry(QRect(400, 420, 89, 35));
        pb_quit = new QPushButton(rtu_fieldcheck);
        pb_quit->setObjectName(QString::fromUtf8("pb_quit"));
        pb_quit->setGeometry(QRect(530, 420, 89, 35));

        retranslateUi(rtu_fieldcheck);

        QMetaObject::connectSlotsByName(rtu_fieldcheck);
    } // setupUi

    void retranslateUi(QDialog *rtu_fieldcheck)
    {
        rtu_fieldcheck->setWindowTitle(QApplication::translate("rtu_fieldcheck", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("rtu_fieldcheck", "\347\202\271\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("rtu_fieldcheck", "\350\242\253\346\265\213\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("rtu_fieldcheck", "\346\240\207\347\247\260\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("rtu_fieldcheck", "\346\240\207\345\207\206\350\241\250\344\272\214\346\254\241\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("rtu_fieldcheck", "\350\243\205\347\275\256\346\230\276\347\244\272\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("rtu_fieldcheck", "\345\274\225\347\224\250\350\257\257\345\267\256(%)", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("rtu_fieldcheck", "\345\271\263\345\235\207\350\257\257\345\267\256(%)", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("rtu_fieldcheck", "\347\250\263\345\256\232\345\272\246(%)", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("rtu_fieldcheck", "\346\240\207\345\207\206\350\241\250\344\270\200\346\254\241\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("rtu_fieldcheck", "New Row", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(0, 0);
        ___qtablewidgetitem10->setText(QApplication::translate("rtu_fieldcheck", "1", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        pb_read->setText(QApplication::translate("rtu_fieldcheck", "\350\257\273\346\212\245\346\226\207", nullptr));
        pb_print->setText(QApplication::translate("rtu_fieldcheck", "\346\211\223\345\215\260", nullptr));
        pb_quit->setText(QApplication::translate("rtu_fieldcheck", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rtu_fieldcheck: public Ui_rtu_fieldcheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTU_FIELDCHECK_H
