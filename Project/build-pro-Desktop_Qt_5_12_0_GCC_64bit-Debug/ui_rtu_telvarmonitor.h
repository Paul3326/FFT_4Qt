/********************************************************************************
** Form generated from reading UI file 'rtu_telvarmonitor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTU_TELVARMONITOR_H
#define UI_RTU_TELVARMONITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_rtu_telvarmonitor
{
public:
    QTableWidget *tableWidget;
    QPushButton *pb_clear;
    QPushButton *pb_quit;

    void setupUi(QDialog *rtu_telvarmonitor)
    {
        if (rtu_telvarmonitor->objectName().isEmpty())
            rtu_telvarmonitor->setObjectName(QString::fromUtf8("rtu_telvarmonitor"));
        rtu_telvarmonitor->resize(321, 480);
        tableWidget = new QTableWidget(rtu_telvarmonitor);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 24)
            tableWidget->setRowCount(24);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(11, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(12, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(13, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(14, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(15, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(16, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(17, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(18, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(19, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(20, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(21, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(22, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(23, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget->setItem(4, 2, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget->setItem(5, 0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget->setItem(5, 1, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget->setItem(5, 2, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget->setItem(6, 0, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget->setItem(6, 1, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget->setItem(6, 2, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget->setItem(7, 0, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget->setItem(7, 1, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget->setItem(7, 2, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidget->setItem(8, 0, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidget->setItem(8, 1, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidget->setItem(8, 2, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidget->setItem(9, 0, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidget->setItem(9, 1, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidget->setItem(9, 2, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidget->setItem(10, 0, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidget->setItem(10, 1, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableWidget->setItem(10, 2, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableWidget->setItem(11, 0, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableWidget->setItem(11, 1, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        tableWidget->setItem(11, 2, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        tableWidget->setItem(12, 0, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        tableWidget->setItem(12, 1, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        tableWidget->setItem(12, 2, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        tableWidget->setItem(13, 0, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        tableWidget->setItem(13, 1, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        tableWidget->setItem(13, 2, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        tableWidget->setItem(14, 0, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        tableWidget->setItem(14, 1, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        tableWidget->setItem(14, 2, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        tableWidget->setItem(15, 0, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        tableWidget->setItem(15, 1, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        tableWidget->setItem(15, 2, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        tableWidget->setItem(16, 0, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        tableWidget->setItem(16, 1, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        tableWidget->setItem(16, 2, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        tableWidget->setItem(17, 0, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        tableWidget->setItem(17, 1, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        tableWidget->setItem(17, 2, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        tableWidget->setItem(18, 0, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        tableWidget->setItem(18, 1, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        tableWidget->setItem(18, 2, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        tableWidget->setItem(19, 0, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        tableWidget->setItem(19, 1, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        tableWidget->setItem(19, 2, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        tableWidget->setItem(20, 0, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        tableWidget->setItem(20, 1, __qtablewidgetitem88);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        tableWidget->setItem(20, 2, __qtablewidgetitem89);
        QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
        tableWidget->setItem(21, 0, __qtablewidgetitem90);
        QTableWidgetItem *__qtablewidgetitem91 = new QTableWidgetItem();
        tableWidget->setItem(21, 1, __qtablewidgetitem91);
        QTableWidgetItem *__qtablewidgetitem92 = new QTableWidgetItem();
        tableWidget->setItem(21, 2, __qtablewidgetitem92);
        QTableWidgetItem *__qtablewidgetitem93 = new QTableWidgetItem();
        tableWidget->setItem(22, 0, __qtablewidgetitem93);
        QTableWidgetItem *__qtablewidgetitem94 = new QTableWidgetItem();
        tableWidget->setItem(22, 1, __qtablewidgetitem94);
        QTableWidgetItem *__qtablewidgetitem95 = new QTableWidgetItem();
        tableWidget->setItem(22, 2, __qtablewidgetitem95);
        QTableWidgetItem *__qtablewidgetitem96 = new QTableWidgetItem();
        tableWidget->setItem(23, 0, __qtablewidgetitem96);
        QTableWidgetItem *__qtablewidgetitem97 = new QTableWidgetItem();
        tableWidget->setItem(23, 1, __qtablewidgetitem97);
        QTableWidgetItem *__qtablewidgetitem98 = new QTableWidgetItem();
        tableWidget->setItem(23, 2, __qtablewidgetitem98);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 321, 411));
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setHighlightSections(false);
        pb_clear = new QPushButton(rtu_telvarmonitor);
        pb_clear->setObjectName(QString::fromUtf8("pb_clear"));
        pb_clear->setGeometry(QRect(20, 430, 89, 35));
        pb_quit = new QPushButton(rtu_telvarmonitor);
        pb_quit->setObjectName(QString::fromUtf8("pb_quit"));
        pb_quit->setGeometry(QRect(190, 430, 89, 35));

        retranslateUi(rtu_telvarmonitor);

        QMetaObject::connectSlotsByName(rtu_telvarmonitor);
    } // setupUi

    void retranslateUi(QDialog *rtu_telvarmonitor)
    {
        rtu_telvarmonitor->setWindowTitle(QApplication::translate("rtu_telvarmonitor", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("rtu_telvarmonitor", "\347\202\271\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("rtu_telvarmonitor", "\345\216\237\347\240\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("rtu_telvarmonitor", "\346\265\213\351\207\217\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem11->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem12->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem13->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(11);
        ___qtablewidgetitem14->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(12);
        ___qtablewidgetitem15->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->verticalHeaderItem(13);
        ___qtablewidgetitem16->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->verticalHeaderItem(14);
        ___qtablewidgetitem17->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->verticalHeaderItem(15);
        ___qtablewidgetitem18->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->verticalHeaderItem(16);
        ___qtablewidgetitem19->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->verticalHeaderItem(17);
        ___qtablewidgetitem20->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->verticalHeaderItem(18);
        ___qtablewidgetitem21->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->verticalHeaderItem(19);
        ___qtablewidgetitem22->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->verticalHeaderItem(20);
        ___qtablewidgetitem23->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->verticalHeaderItem(21);
        ___qtablewidgetitem24->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->verticalHeaderItem(22);
        ___qtablewidgetitem25->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->verticalHeaderItem(23);
        ___qtablewidgetitem26->setText(QApplication::translate("rtu_telvarmonitor", "New Row", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(0, 0);
        ___qtablewidgetitem27->setText(QApplication::translate("rtu_telvarmonitor", "Yc   0", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(0, 1);
        ___qtablewidgetitem28->setText(QApplication::translate("rtu_telvarmonitor", "0x0000", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(0, 2);
        ___qtablewidgetitem29->setText(QApplication::translate("rtu_telvarmonitor", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(1, 0);
        ___qtablewidgetitem30->setText(QApplication::translate("rtu_telvarmonitor", "Yc   1", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(1, 1);
        ___qtablewidgetitem31->setText(QApplication::translate("rtu_telvarmonitor", "0x0001", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(1, 2);
        ___qtablewidgetitem32->setText(QApplication::translate("rtu_telvarmonitor", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(2, 0);
        ___qtablewidgetitem33->setText(QApplication::translate("rtu_telvarmonitor", "Yc   2", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(2, 1);
        ___qtablewidgetitem34->setText(QApplication::translate("rtu_telvarmonitor", "0x0002", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(2, 2);
        ___qtablewidgetitem35->setText(QApplication::translate("rtu_telvarmonitor", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->item(3, 0);
        ___qtablewidgetitem36->setText(QApplication::translate("rtu_telvarmonitor", "Yc   3", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget->item(3, 1);
        ___qtablewidgetitem37->setText(QApplication::translate("rtu_telvarmonitor", "0x0003", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget->item(3, 2);
        ___qtablewidgetitem38->setText(QApplication::translate("rtu_telvarmonitor", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget->item(4, 0);
        ___qtablewidgetitem39->setText(QApplication::translate("rtu_telvarmonitor", "Yc   4", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget->item(4, 1);
        ___qtablewidgetitem40->setText(QApplication::translate("rtu_telvarmonitor", "0x0004", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget->item(4, 2);
        ___qtablewidgetitem41->setText(QApplication::translate("rtu_telvarmonitor", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget->item(5, 0);
        ___qtablewidgetitem42->setText(QApplication::translate("rtu_telvarmonitor", "Yc   5", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget->item(5, 1);
        ___qtablewidgetitem43->setText(QApplication::translate("rtu_telvarmonitor", "0x0005", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget->item(5, 2);
        ___qtablewidgetitem44->setText(QApplication::translate("rtu_telvarmonitor", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget->item(6, 0);
        ___qtablewidgetitem45->setText(QApplication::translate("rtu_telvarmonitor", "Yc   6", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget->item(6, 1);
        ___qtablewidgetitem46->setText(QApplication::translate("rtu_telvarmonitor", "0x0006", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget->item(6, 2);
        ___qtablewidgetitem47->setText(QApplication::translate("rtu_telvarmonitor", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget->item(7, 0);
        ___qtablewidgetitem48->setText(QApplication::translate("rtu_telvarmonitor", "Yc   7", nullptr));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget->item(7, 1);
        ___qtablewidgetitem49->setText(QApplication::translate("rtu_telvarmonitor", "0x0007", nullptr));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget->item(7, 2);
        ___qtablewidgetitem50->setText(QApplication::translate("rtu_telvarmonitor", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidget->item(8, 0);
        ___qtablewidgetitem51->setText(QApplication::translate("rtu_telvarmonitor", "Yc   8", nullptr));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidget->item(8, 1);
        ___qtablewidgetitem52->setText(QApplication::translate("rtu_telvarmonitor", "0x0000", nullptr));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidget->item(8, 2);
        ___qtablewidgetitem53->setText(QApplication::translate("rtu_telvarmonitor", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem54 = tableWidget->item(9, 0);
        ___qtablewidgetitem54->setText(QApplication::translate("rtu_telvarmonitor", "Yc   9", nullptr));
        QTableWidgetItem *___qtablewidgetitem55 = tableWidget->item(9, 1);
        ___qtablewidgetitem55->setText(QApplication::translate("rtu_telvarmonitor", "0x0000", nullptr));
        QTableWidgetItem *___qtablewidgetitem56 = tableWidget->item(9, 2);
        ___qtablewidgetitem56->setText(QApplication::translate("rtu_telvarmonitor", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem57 = tableWidget->item(10, 0);
        ___qtablewidgetitem57->setText(QApplication::translate("rtu_telvarmonitor", "Yc  10", nullptr));
        QTableWidgetItem *___qtablewidgetitem58 = tableWidget->item(10, 1);
        ___qtablewidgetitem58->setText(QApplication::translate("rtu_telvarmonitor", "0x0000", nullptr));
        QTableWidgetItem *___qtablewidgetitem59 = tableWidget->item(10, 2);
        ___qtablewidgetitem59->setText(QApplication::translate("rtu_telvarmonitor", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem60 = tableWidget->item(11, 0);
        ___qtablewidgetitem60->setText(QApplication::translate("rtu_telvarmonitor", "Yc  11", nullptr));
        QTableWidgetItem *___qtablewidgetitem61 = tableWidget->item(11, 1);
        ___qtablewidgetitem61->setText(QApplication::translate("rtu_telvarmonitor", "0x0000", nullptr));
        QTableWidgetItem *___qtablewidgetitem62 = tableWidget->item(11, 2);
        ___qtablewidgetitem62->setText(QApplication::translate("rtu_telvarmonitor", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem63 = tableWidget->item(12, 0);
        ___qtablewidgetitem63->setText(QApplication::translate("rtu_telvarmonitor", "Yc  12", nullptr));
        QTableWidgetItem *___qtablewidgetitem64 = tableWidget->item(12, 1);
        ___qtablewidgetitem64->setText(QApplication::translate("rtu_telvarmonitor", "0x0000", nullptr));
        QTableWidgetItem *___qtablewidgetitem65 = tableWidget->item(12, 2);
        ___qtablewidgetitem65->setText(QApplication::translate("rtu_telvarmonitor", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem66 = tableWidget->item(13, 0);
        ___qtablewidgetitem66->setText(QApplication::translate("rtu_telvarmonitor", "Yc  13", nullptr));
        QTableWidgetItem *___qtablewidgetitem67 = tableWidget->item(13, 1);
        ___qtablewidgetitem67->setText(QApplication::translate("rtu_telvarmonitor", "0x0000", nullptr));
        QTableWidgetItem *___qtablewidgetitem68 = tableWidget->item(13, 2);
        ___qtablewidgetitem68->setText(QApplication::translate("rtu_telvarmonitor", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem69 = tableWidget->item(14, 0);
        ___qtablewidgetitem69->setText(QApplication::translate("rtu_telvarmonitor", "Yc  14", nullptr));
        QTableWidgetItem *___qtablewidgetitem70 = tableWidget->item(14, 1);
        ___qtablewidgetitem70->setText(QApplication::translate("rtu_telvarmonitor", "0x0000", nullptr));
        QTableWidgetItem *___qtablewidgetitem71 = tableWidget->item(14, 2);
        ___qtablewidgetitem71->setText(QApplication::translate("rtu_telvarmonitor", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem72 = tableWidget->item(15, 0);
        ___qtablewidgetitem72->setText(QApplication::translate("rtu_telvarmonitor", "Yc  15", nullptr));
        QTableWidgetItem *___qtablewidgetitem73 = tableWidget->item(15, 1);
        ___qtablewidgetitem73->setText(QApplication::translate("rtu_telvarmonitor", "0x0000", nullptr));
        QTableWidgetItem *___qtablewidgetitem74 = tableWidget->item(15, 2);
        ___qtablewidgetitem74->setText(QApplication::translate("rtu_telvarmonitor", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem75 = tableWidget->item(16, 0);
        ___qtablewidgetitem75->setText(QApplication::translate("rtu_telvarmonitor", "Yc  16", nullptr));
        QTableWidgetItem *___qtablewidgetitem76 = tableWidget->item(16, 1);
        ___qtablewidgetitem76->setText(QApplication::translate("rtu_telvarmonitor", "0x0000", nullptr));
        QTableWidgetItem *___qtablewidgetitem77 = tableWidget->item(16, 2);
        ___qtablewidgetitem77->setText(QApplication::translate("rtu_telvarmonitor", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem78 = tableWidget->item(17, 0);
        ___qtablewidgetitem78->setText(QApplication::translate("rtu_telvarmonitor", "Yc  17", nullptr));
        QTableWidgetItem *___qtablewidgetitem79 = tableWidget->item(17, 1);
        ___qtablewidgetitem79->setText(QApplication::translate("rtu_telvarmonitor", "0x0000", nullptr));
        QTableWidgetItem *___qtablewidgetitem80 = tableWidget->item(17, 2);
        ___qtablewidgetitem80->setText(QApplication::translate("rtu_telvarmonitor", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem81 = tableWidget->item(18, 0);
        ___qtablewidgetitem81->setText(QApplication::translate("rtu_telvarmonitor", "Yc  18", nullptr));
        QTableWidgetItem *___qtablewidgetitem82 = tableWidget->item(18, 1);
        ___qtablewidgetitem82->setText(QApplication::translate("rtu_telvarmonitor", "0x0000", nullptr));
        QTableWidgetItem *___qtablewidgetitem83 = tableWidget->item(18, 2);
        ___qtablewidgetitem83->setText(QApplication::translate("rtu_telvarmonitor", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem84 = tableWidget->item(19, 0);
        ___qtablewidgetitem84->setText(QApplication::translate("rtu_telvarmonitor", "Yc  19", nullptr));
        QTableWidgetItem *___qtablewidgetitem85 = tableWidget->item(19, 1);
        ___qtablewidgetitem85->setText(QApplication::translate("rtu_telvarmonitor", "0x0000", nullptr));
        QTableWidgetItem *___qtablewidgetitem86 = tableWidget->item(19, 2);
        ___qtablewidgetitem86->setText(QApplication::translate("rtu_telvarmonitor", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem87 = tableWidget->item(20, 0);
        ___qtablewidgetitem87->setText(QApplication::translate("rtu_telvarmonitor", "Yc  20", nullptr));
        QTableWidgetItem *___qtablewidgetitem88 = tableWidget->item(20, 1);
        ___qtablewidgetitem88->setText(QApplication::translate("rtu_telvarmonitor", "0x0000", nullptr));
        QTableWidgetItem *___qtablewidgetitem89 = tableWidget->item(20, 2);
        ___qtablewidgetitem89->setText(QApplication::translate("rtu_telvarmonitor", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem90 = tableWidget->item(21, 0);
        ___qtablewidgetitem90->setText(QApplication::translate("rtu_telvarmonitor", "Yc  21", nullptr));
        QTableWidgetItem *___qtablewidgetitem91 = tableWidget->item(21, 1);
        ___qtablewidgetitem91->setText(QApplication::translate("rtu_telvarmonitor", "0x0000", nullptr));
        QTableWidgetItem *___qtablewidgetitem92 = tableWidget->item(21, 2);
        ___qtablewidgetitem92->setText(QApplication::translate("rtu_telvarmonitor", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem93 = tableWidget->item(22, 0);
        ___qtablewidgetitem93->setText(QApplication::translate("rtu_telvarmonitor", "Yc  22", nullptr));
        QTableWidgetItem *___qtablewidgetitem94 = tableWidget->item(22, 1);
        ___qtablewidgetitem94->setText(QApplication::translate("rtu_telvarmonitor", "0x0000", nullptr));
        QTableWidgetItem *___qtablewidgetitem95 = tableWidget->item(22, 2);
        ___qtablewidgetitem95->setText(QApplication::translate("rtu_telvarmonitor", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem96 = tableWidget->item(23, 0);
        ___qtablewidgetitem96->setText(QApplication::translate("rtu_telvarmonitor", "Yc  23", nullptr));
        QTableWidgetItem *___qtablewidgetitem97 = tableWidget->item(23, 1);
        ___qtablewidgetitem97->setText(QApplication::translate("rtu_telvarmonitor", "0x0000", nullptr));
        QTableWidgetItem *___qtablewidgetitem98 = tableWidget->item(23, 2);
        ___qtablewidgetitem98->setText(QApplication::translate("rtu_telvarmonitor", "0", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        pb_clear->setText(QApplication::translate("rtu_telvarmonitor", "\346\270\205\351\231\244", nullptr));
        pb_quit->setText(QApplication::translate("rtu_telvarmonitor", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rtu_telvarmonitor: public Ui_rtu_telvarmonitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTU_TELVARMONITOR_H
