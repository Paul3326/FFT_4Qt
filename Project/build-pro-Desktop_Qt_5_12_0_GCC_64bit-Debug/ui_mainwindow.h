/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QListWidget *listWidget_RTU;
    QFrame *line_1;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QListWidget *listWidget_SYS;
    QFrame *line_11;
    QFrame *line_12;
    QFrame *line_13;
    QFrame *line_14;
    QFrame *line_15;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        listWidget_RTU = new QListWidget(centralWidget);
        QFont font;
        font.setUnderline(false);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget_RTU);
        __qlistwidgetitem->setFont(font);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget_RTU);
        __qlistwidgetitem1->setBackground(brush);
        __qlistwidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        new QListWidgetItem(listWidget_RTU);
        new QListWidgetItem(listWidget_RTU);
        new QListWidgetItem(listWidget_RTU);
        new QListWidgetItem(listWidget_RTU);
        new QListWidgetItem(listWidget_RTU);
        new QListWidgetItem(listWidget_RTU);
        new QListWidgetItem(listWidget_RTU);
        listWidget_RTU->setObjectName(QString::fromUtf8("listWidget_RTU"));
        listWidget_RTU->setGeometry(QRect(10, 0, 145, 206));
        QFont font1;
        font1.setPointSize(9);
        listWidget_RTU->setFont(font1);
        listWidget_RTU->setMouseTracking(true);
        listWidget_RTU->setTabletTracking(true);
        listWidget_RTU->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listWidget_RTU->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        listWidget_RTU->setEditTriggers(QAbstractItemView::CurrentChanged|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        listWidget_RTU->setTextElideMode(Qt::ElideMiddle);
        listWidget_RTU->setSpacing(2);
        listWidget_RTU->setItemAlignment(Qt::AlignJustify|Qt::AlignLeading|Qt::AlignLeft);
        line_1 = new QFrame(centralWidget);
        line_1->setObjectName(QString::fromUtf8("line_1"));
        line_1->setGeometry(QRect(14, 22, 131, 3));
        line_1->setFrameShape(QFrame::HLine);
        line_1->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(14, 67, 131, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setEnabled(false);
        line_3->setGeometry(QRect(14, 111, 131, 3));
        QFont font2;
        font2.setKerning(false);
        line_3->setFont(font2);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setEnabled(false);
        line_4->setGeometry(QRect(15, 177, 131, 3));
        line_4->setFont(font2);
        line_4->setLineWidth(1);
        line_4->setMidLineWidth(0);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        listWidget_SYS = new QListWidget(centralWidget);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget_SYS);
        __qlistwidgetitem2->setFont(font);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget_SYS);
        __qlistwidgetitem3->setBackground(brush1);
        __qlistwidgetitem3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        new QListWidgetItem(listWidget_SYS);
        new QListWidgetItem(listWidget_SYS);
        new QListWidgetItem(listWidget_SYS);
        new QListWidgetItem(listWidget_SYS);
        new QListWidgetItem(listWidget_SYS);
        new QListWidgetItem(listWidget_SYS);
        new QListWidgetItem(listWidget_SYS);
        new QListWidgetItem(listWidget_SYS);
        new QListWidgetItem(listWidget_SYS);
        new QListWidgetItem(listWidget_SYS);
        new QListWidgetItem(listWidget_SYS);
        new QListWidgetItem(listWidget_SYS);
        new QListWidgetItem(listWidget_SYS);
        new QListWidgetItem(listWidget_SYS);
        new QListWidgetItem(listWidget_SYS);
        new QListWidgetItem(listWidget_SYS);
        listWidget_SYS->setObjectName(QString::fromUtf8("listWidget_SYS"));
        listWidget_SYS->setGeometry(QRect(80, 0, 131, 402));
        listWidget_SYS->setFont(font1);
        listWidget_SYS->setMouseTracking(true);
        listWidget_SYS->setTabletTracking(true);
        listWidget_SYS->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listWidget_SYS->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        listWidget_SYS->setSpacing(2);
        listWidget_SYS->setItemAlignment(Qt::AlignJustify|Qt::AlignLeading|Qt::AlignLeft);
        line_11 = new QFrame(centralWidget);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setGeometry(QRect(82, 89, 124, 3));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        line_12 = new QFrame(centralWidget);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setGeometry(QRect(82, 132, 124, 3));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);
        line_13 = new QFrame(centralWidget);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(82, 243, 124, 3));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);
        line_14 = new QFrame(centralWidget);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setGeometry(QRect(82, 287, 124, 3));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);
        line_15 = new QFrame(centralWidget);
        line_15->setObjectName(QString::fromUtf8("line_15"));
        line_15->setGeometry(QRect(82, 353, 124, 3));
        line_15->setFrameShape(QFrame::HLine);
        line_15->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\344\270\212\345\261\202\347\256\241\347\220\206\350\275\257\344\273\266", nullptr));

        const bool __sortingEnabled = listWidget_RTU->isSortingEnabled();
        listWidget_RTU->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_RTU->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "RTU\345\217\202\346\225\260\345\275\225\345\205\245", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget_RTU->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "\345\244\226\350\247\202\346\243\200\346\237\245\343\200\201\350\200\220\345\216\213\350\257\225\351\252\214\347\273\223\346\236\234", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget_RTU->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "\351\201\245\346\265\213\350\257\257\345\267\256\346\243\200\351\252\214", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget_RTU->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "\346\224\271\345\217\230\351\207\217", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget_RTU->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "\351\201\245\344\277\241\345\217\230\344\275\215\350\257\225\351\252\214", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget_RTU->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "\351\201\245\346\216\247\350\257\225\351\252\214", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget_RTU->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindow", "\347\216\260\345\234\272\346\240\241\351\252\214", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget_RTU->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("MainWindow", "\351\201\245\346\216\247\351\207\217\347\233\221\346\265\213", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = listWidget_RTU->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("MainWindow", "\351\231\204\345\212\240Excel\346\212\245\350\241\250\347\256\241\347\220\206", nullptr));
        listWidget_RTU->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = listWidget_SYS->isSortingEnabled();
        listWidget_SYS->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem9 = listWidget_SYS->item(0);
        ___qlistwidgetitem9->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = listWidget_SYS->item(1);
        ___qlistwidgetitem10->setText(QApplication::translate("MainWindow", "\351\200\232\350\256\257\345\215\217\350\256\256\345\217\202\346\225\260", nullptr));
        QListWidgetItem *___qlistwidgetitem11 = listWidget_SYS->item(2);
        ___qlistwidgetitem11->setText(QApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211\345\215\217\350\256\256\350\256\276\347\275\256", nullptr));
        QListWidgetItem *___qlistwidgetitem12 = listWidget_SYS->item(3);
        ___qlistwidgetitem12->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\240\207\345\207\206\350\243\205\347\275\256\345\217\202\346\225\260", nullptr));
        QListWidgetItem *___qlistwidgetitem13 = listWidget_SYS->item(4);
        ___qlistwidgetitem13->setText(QApplication::translate("MainWindow", "\350\257\257\345\267\256\346\243\200\345\256\232\346\226\271\346\241\210\347\256\241\347\220\206", nullptr));
        QListWidgetItem *___qlistwidgetitem14 = listWidget_SYS->item(5);
        ___qlistwidgetitem14->setText(QApplication::translate("MainWindow", "\346\224\271\345\217\230\351\207\217\346\243\200\345\256\232\346\226\271\346\241\210\347\256\241\347\220\206", nullptr));
        QListWidgetItem *___qlistwidgetitem15 = listWidget_SYS->item(6);
        ___qlistwidgetitem15->setText(QApplication::translate("MainWindow", "\344\273\252\345\231\250\347\232\204\351\200\232\344\277\241\350\256\276\347\275\256", nullptr));
        QListWidgetItem *___qlistwidgetitem16 = listWidget_SYS->item(7);
        ___qlistwidgetitem16->setText(QApplication::translate("MainWindow", "\346\227\266\351\222\237\345\220\214\346\255\245", nullptr));
        QListWidgetItem *___qlistwidgetitem17 = listWidget_SYS->item(8);
        ___qlistwidgetitem17->setText(QApplication::translate("MainWindow", "\344\272\244\346\265\201\346\240\207\345\207\206\345\212\237\347\216\207\346\272\220(P)", nullptr));
        QListWidgetItem *___qlistwidgetitem18 = listWidget_SYS->item(9);
        ___qlistwidgetitem18->setText(QApplication::translate("MainWindow", "\347\233\264\346\265\201\346\240\207\345\207\206\346\272\220", nullptr));
        QListWidgetItem *___qlistwidgetitem19 = listWidget_SYS->item(10);
        ___qlistwidgetitem19->setText(QApplication::translate("MainWindow", "\344\272\244\346\265\201\346\265\213\351\207\217", nullptr));
        QListWidgetItem *___qlistwidgetitem20 = listWidget_SYS->item(11);
        ___qlistwidgetitem20->setText(QApplication::translate("MainWindow", "\344\270\212\344\270\213\350\275\275\344\273\252\345\231\250\350\275\257\344\273\266", nullptr));
        QListWidgetItem *___qlistwidgetitem21 = listWidget_SYS->item(12);
        ___qlistwidgetitem21->setText(QApplication::translate("MainWindow", "\347\275\221\347\273\234\345\215\207\347\272\247\350\275\257\344\273\266", nullptr));
        QListWidgetItem *___qlistwidgetitem22 = listWidget_SYS->item(13);
        ___qlistwidgetitem22->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\267\245\345\205\267", nullptr));
        QListWidgetItem *___qlistwidgetitem23 = listWidget_SYS->item(14);
        ___qlistwidgetitem23->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\350\256\260\345\275\225\344\277\235\345\255\230\350\267\257\345\276\204", nullptr));
        QListWidgetItem *___qlistwidgetitem24 = listWidget_SYS->item(15);
        ___qlistwidgetitem24->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\347\224\250\346\210\267", nullptr));
        QListWidgetItem *___qlistwidgetitem25 = listWidget_SYS->item(16);
        ___qlistwidgetitem25->setText(QApplication::translate("MainWindow", "\344\272\244\346\265\201\346\272\220\346\240\241\345\207\206", nullptr));
        QListWidgetItem *___qlistwidgetitem26 = listWidget_SYS->item(17);
        ___qlistwidgetitem26->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        listWidget_SYS->setSortingEnabled(__sortingEnabled1);

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
