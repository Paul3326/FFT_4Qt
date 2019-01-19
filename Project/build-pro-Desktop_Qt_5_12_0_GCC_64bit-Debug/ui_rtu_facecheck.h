/********************************************************************************
** Form generated from reading UI file 'rtu_facecheck.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTU_FACECHECK_H
#define UI_RTU_FACECHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_rtu_facecheck
{
public:
    QTextEdit *te_rtu_station;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *te_rtu_position;
    QTableWidget *tw_face;
    QFrame *line;
    QLabel *label_3;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label_4;
    QFrame *line_4;
    QComboBox *cb_face;
    QLabel *label_6;
    QTableWidget *tw_av;
    QLabel *label_7;
    QComboBox *cb_av;
    QFrame *line_7;
    QLabel *label_8;
    QFrame *line_8;
    QTableWidget *tw_r;
    QLabel *label_9;
    QComboBox *cb_r_2;
    QLabel *label_10;
    QTextEdit *te_result;
    QPushButton *pb_previous;
    QPushButton *pb_next;
    QPushButton *pb_record;
    QPushButton *pb_save;
    QPushButton *pb_quit;

    void setupUi(QDialog *rtu_facecheck)
    {
        if (rtu_facecheck->objectName().isEmpty())
            rtu_facecheck->setObjectName(QString::fromUtf8("rtu_facecheck"));
        rtu_facecheck->resize(800, 640);
        rtu_facecheck->setContextMenuPolicy(Qt::NoContextMenu);
        te_rtu_station = new QTextEdit(rtu_facecheck);
        te_rtu_station->setObjectName(QString::fromUtf8("te_rtu_station"));
        te_rtu_station->setGeometry(QRect(100, 20, 281, 31));
        te_rtu_station->setFocusPolicy(Qt::NoFocus);
        te_rtu_station->setUndoRedoEnabled(false);
        te_rtu_station->setAcceptRichText(false);
        te_rtu_station->setTextInteractionFlags(Qt::NoTextInteraction);
        te_rtu_station->setPlaceholderText(QString::fromUtf8(""));
        label = new QLabel(rtu_facecheck);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 67, 20));
        label_2 = new QLabel(rtu_facecheck);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 20, 67, 20));
        te_rtu_position = new QTextEdit(rtu_facecheck);
        te_rtu_position->setObjectName(QString::fromUtf8("te_rtu_position"));
        te_rtu_position->setGeometry(QRect(470, 20, 311, 31));
        te_rtu_position->setFocusPolicy(Qt::NoFocus);
        te_rtu_position->setReadOnly(true);
        te_rtu_position->setTextInteractionFlags(Qt::NoTextInteraction);
        tw_face = new QTableWidget(rtu_facecheck);
        if (tw_face->columnCount() < 1)
            tw_face->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tw_face->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tw_face->rowCount() < 6)
            tw_face->setRowCount(6);
        QFont font;
        font.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tw_face->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tw_face->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        tw_face->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        tw_face->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font);
        tw_face->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font);
        tw_face->setVerticalHeaderItem(5, __qtablewidgetitem6);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font);
        __qtablewidgetitem7->setBackground(brush1);
        __qtablewidgetitem7->setForeground(brush);
        __qtablewidgetitem7->setFlags(Qt::NoItemFlags);
        tw_face->setItem(0, 0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font);
        __qtablewidgetitem8->setForeground(brush);
        __qtablewidgetitem8->setFlags(Qt::NoItemFlags);
        tw_face->setItem(1, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font);
        __qtablewidgetitem9->setForeground(brush);
        __qtablewidgetitem9->setFlags(Qt::NoItemFlags);
        tw_face->setItem(2, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFont(font);
        __qtablewidgetitem10->setForeground(brush);
        __qtablewidgetitem10->setFlags(Qt::NoItemFlags);
        tw_face->setItem(3, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font);
        __qtablewidgetitem11->setForeground(brush);
        __qtablewidgetitem11->setFlags(Qt::NoItemFlags);
        tw_face->setItem(4, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFont(font);
        __qtablewidgetitem12->setForeground(brush);
        __qtablewidgetitem12->setFlags(Qt::NoItemFlags);
        tw_face->setItem(5, 0, __qtablewidgetitem12);
        tw_face->setObjectName(QString::fromUtf8("tw_face"));
        tw_face->setGeometry(QRect(80, 90, 220, 174));
        tw_face->setFocusPolicy(Qt::NoFocus);
        tw_face->setFrameShape(QFrame::NoFrame);
        tw_face->setFrameShadow(QFrame::Plain);
        tw_face->setLineWidth(0);
        tw_face->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tw_face->setTabKeyNavigation(false);
        tw_face->setProperty("showDropIndicator", QVariant(false));
        tw_face->setDragDropOverwriteMode(false);
        tw_face->setTextElideMode(Qt::ElideNone);
        tw_face->setShowGrid(true);
        tw_face->setWordWrap(false);
        tw_face->setCornerButtonEnabled(false);
        tw_face->horizontalHeader()->setVisible(false);
        tw_face->horizontalHeader()->setDefaultSectionSize(220);
        tw_face->horizontalHeader()->setHighlightSections(false);
        tw_face->horizontalHeader()->setMinimumSectionSize(64);
        tw_face->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tw_face->verticalHeader()->setVisible(false);
        tw_face->verticalHeader()->setDefaultSectionSize(29);
        tw_face->verticalHeader()->setHighlightSections(false);
        line = new QFrame(rtu_facecheck);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(60, 70, 84, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(rtu_facecheck);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 63, 67, 16));
        line_2 = new QFrame(rtu_facecheck);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(-60, 72, 84, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(rtu_facecheck);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(90, 449, 50, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(rtu_facecheck);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 440, 67, 16));
        line_4 = new QFrame(rtu_facecheck);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(-60, 450, 84, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        cb_face = new QComboBox(rtu_facecheck);
        cb_face->addItem(QString());
        cb_face->addItem(QString());
        cb_face->addItem(QString());
        cb_face->setObjectName(QString::fromUtf8("cb_face"));
        cb_face->setGeometry(QRect(670, 233, 91, 31));
        label_6 = new QLabel(rtu_facecheck);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(610, 240, 67, 17));
        tw_av = new QTableWidget(rtu_facecheck);
        if (tw_av->columnCount() < 2)
            tw_av->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tw_av->setHorizontalHeaderItem(0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tw_av->setHorizontalHeaderItem(1, __qtablewidgetitem14);
        if (tw_av->rowCount() < 4)
            tw_av->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem15->setFont(font);
        tw_av->setVerticalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem16->setFont(font);
        tw_av->setVerticalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem17->setFont(font);
        tw_av->setVerticalHeaderItem(2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem18->setFont(font);
        tw_av->setVerticalHeaderItem(3, __qtablewidgetitem18);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem19->setFont(font1);
        __qtablewidgetitem19->setForeground(brush);
        __qtablewidgetitem19->setFlags(Qt::NoItemFlags);
        tw_av->setItem(0, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem20->setFont(font1);
        __qtablewidgetitem20->setForeground(brush);
        __qtablewidgetitem20->setFlags(Qt::NoItemFlags);
        tw_av->setItem(0, 1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem21->setFont(font);
        __qtablewidgetitem21->setForeground(brush);
        __qtablewidgetitem21->setFlags(Qt::NoItemFlags);
        tw_av->setItem(1, 0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem22->setFont(font);
        __qtablewidgetitem22->setForeground(brush);
        __qtablewidgetitem22->setFlags(Qt::NoItemFlags);
        tw_av->setItem(1, 1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem23->setFont(font);
        __qtablewidgetitem23->setForeground(brush);
        __qtablewidgetitem23->setFlags(Qt::NoItemFlags);
        tw_av->setItem(2, 0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem24->setFont(font);
        __qtablewidgetitem24->setForeground(brush);
        __qtablewidgetitem24->setFlags(Qt::NoItemFlags);
        tw_av->setItem(2, 1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem25->setFont(font);
        __qtablewidgetitem25->setForeground(brush);
        __qtablewidgetitem25->setFlags(Qt::NoItemFlags);
        tw_av->setItem(3, 0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem26->setFont(font);
        __qtablewidgetitem26->setForeground(brush);
        __qtablewidgetitem26->setFlags(Qt::NoItemFlags);
        tw_av->setItem(3, 1, __qtablewidgetitem26);
        tw_av->setObjectName(QString::fromUtf8("tw_av"));
        tw_av->setGeometry(QRect(80, 310, 440, 112));
        tw_av->setFocusPolicy(Qt::NoFocus);
        tw_av->setFrameShape(QFrame::NoFrame);
        tw_av->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tw_av->setTabKeyNavigation(false);
        tw_av->setProperty("showDropIndicator", QVariant(false));
        tw_av->setDragDropOverwriteMode(false);
        tw_av->setShowGrid(true);
        tw_av->setWordWrap(true);
        tw_av->setCornerButtonEnabled(false);
        tw_av->horizontalHeader()->setVisible(false);
        tw_av->horizontalHeader()->setDefaultSectionSize(220);
        tw_av->horizontalHeader()->setHighlightSections(false);
        tw_av->horizontalHeader()->setMinimumSectionSize(88);
        tw_av->verticalHeader()->setVisible(false);
        tw_av->verticalHeader()->setCascadingSectionResizes(false);
        tw_av->verticalHeader()->setDefaultSectionSize(28);
        tw_av->verticalHeader()->setHighlightSections(false);
        tw_av->verticalHeader()->setMinimumSectionSize(28);
        tw_av->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        label_7 = new QLabel(rtu_facecheck);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(610, 397, 67, 17));
        cb_av = new QComboBox(rtu_facecheck);
        cb_av->addItem(QString());
        cb_av->addItem(QString());
        cb_av->addItem(QString());
        cb_av->setObjectName(QString::fromUtf8("cb_av"));
        cb_av->setGeometry(QRect(670, 390, 91, 31));
        line_7 = new QFrame(rtu_facecheck);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(90, 290, 50, 3));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(rtu_facecheck);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 281, 67, 16));
        line_8 = new QFrame(rtu_facecheck);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(-60, 290, 84, 3));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        tw_r = new QTableWidget(rtu_facecheck);
        if (tw_r->columnCount() < 4)
            tw_r->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tw_r->setHorizontalHeaderItem(0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tw_r->setHorizontalHeaderItem(1, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tw_r->setHorizontalHeaderItem(2, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tw_r->setHorizontalHeaderItem(3, __qtablewidgetitem30);
        if (tw_r->rowCount() < 3)
            tw_r->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem31->setFont(font);
        tw_r->setVerticalHeaderItem(0, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tw_r->setVerticalHeaderItem(1, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem33->setFont(font);
        tw_r->setVerticalHeaderItem(2, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem34->setFont(font1);
        __qtablewidgetitem34->setForeground(brush);
        __qtablewidgetitem34->setFlags(Qt::NoItemFlags);
        tw_r->setItem(0, 0, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        __qtablewidgetitem35->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem35->setFont(font1);
        __qtablewidgetitem35->setForeground(brush);
        __qtablewidgetitem35->setFlags(Qt::NoItemFlags);
        tw_r->setItem(0, 1, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem36->setFont(font1);
        __qtablewidgetitem36->setForeground(brush);
        __qtablewidgetitem36->setFlags(Qt::NoItemFlags);
        tw_r->setItem(0, 2, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        __qtablewidgetitem37->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem37->setFont(font1);
        __qtablewidgetitem37->setForeground(brush);
        __qtablewidgetitem37->setFlags(Qt::NoItemFlags);
        tw_r->setItem(0, 3, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        __qtablewidgetitem38->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem38->setForeground(brush);
        __qtablewidgetitem38->setFlags(Qt::NoItemFlags);
        tw_r->setItem(1, 0, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        __qtablewidgetitem39->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem39->setFont(font);
        __qtablewidgetitem39->setForeground(brush);
        __qtablewidgetitem39->setFlags(Qt::NoItemFlags);
        tw_r->setItem(1, 1, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        __qtablewidgetitem40->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem40->setFont(font);
        __qtablewidgetitem40->setForeground(brush);
        __qtablewidgetitem40->setFlags(Qt::NoItemFlags);
        tw_r->setItem(1, 2, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        __qtablewidgetitem41->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem41->setFont(font);
        __qtablewidgetitem41->setForeground(brush);
        __qtablewidgetitem41->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tw_r->setItem(1, 3, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        __qtablewidgetitem42->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem42->setFont(font);
        __qtablewidgetitem42->setForeground(brush);
        __qtablewidgetitem42->setFlags(Qt::NoItemFlags);
        tw_r->setItem(2, 0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        __qtablewidgetitem43->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem43->setFont(font);
        __qtablewidgetitem43->setForeground(brush);
        __qtablewidgetitem43->setFlags(Qt::NoItemFlags);
        tw_r->setItem(2, 1, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        __qtablewidgetitem44->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem44->setFont(font);
        __qtablewidgetitem44->setForeground(brush);
        __qtablewidgetitem44->setFlags(Qt::NoItemFlags);
        tw_r->setItem(2, 2, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        __qtablewidgetitem45->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem45->setFont(font);
        __qtablewidgetitem45->setForeground(brush);
        __qtablewidgetitem45->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tw_r->setItem(2, 3, __qtablewidgetitem45);
        tw_r->setObjectName(QString::fromUtf8("tw_r"));
        tw_r->setGeometry(QRect(80, 470, 476, 84));
        tw_r->setMouseTracking(true);
        tw_r->setFocusPolicy(Qt::NoFocus);
        tw_r->setFrameShape(QFrame::NoFrame);
        tw_r->setEditTriggers(QAbstractItemView::AllEditTriggers);
        tw_r->setTabKeyNavigation(false);
        tw_r->setProperty("showDropIndicator", QVariant(false));
        tw_r->setDragDropOverwriteMode(false);
        tw_r->setShowGrid(true);
        tw_r->setWordWrap(true);
        tw_r->setCornerButtonEnabled(false);
        tw_r->horizontalHeader()->setVisible(false);
        tw_r->horizontalHeader()->setDefaultSectionSize(119);
        tw_r->horizontalHeader()->setHighlightSections(false);
        tw_r->horizontalHeader()->setMinimumSectionSize(74);
        tw_r->verticalHeader()->setVisible(false);
        tw_r->verticalHeader()->setCascadingSectionResizes(false);
        tw_r->verticalHeader()->setDefaultSectionSize(28);
        tw_r->verticalHeader()->setHighlightSections(false);
        tw_r->verticalHeader()->setMinimumSectionSize(19);
        tw_r->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        label_9 = new QLabel(rtu_facecheck);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(610, 525, 67, 17));
        cb_r_2 = new QComboBox(rtu_facecheck);
        cb_r_2->addItem(QString());
        cb_r_2->addItem(QString());
        cb_r_2->setObjectName(QString::fromUtf8("cb_r_2"));
        cb_r_2->setGeometry(QRect(670, 473, 91, 31));
        label_10 = new QLabel(rtu_facecheck);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(580, 482, 67, 17));
        te_result = new QTextEdit(rtu_facecheck);
        te_result->setObjectName(QString::fromUtf8("te_result"));
        te_result->setGeometry(QRect(670, 520, 91, 31));
        te_result->setFocusPolicy(Qt::NoFocus);
        te_result->setUndoRedoEnabled(false);
        te_result->setAcceptRichText(false);
        te_result->setTextInteractionFlags(Qt::NoTextInteraction);
        te_result->setPlaceholderText(QString::fromUtf8(""));
        pb_previous = new QPushButton(rtu_facecheck);
        pb_previous->setObjectName(QString::fromUtf8("pb_previous"));
        pb_previous->setGeometry(QRect(40, 580, 89, 35));
        pb_next = new QPushButton(rtu_facecheck);
        pb_next->setObjectName(QString::fromUtf8("pb_next"));
        pb_next->setGeometry(QRect(170, 580, 89, 35));
        pb_record = new QPushButton(rtu_facecheck);
        pb_record->setObjectName(QString::fromUtf8("pb_record"));
        pb_record->setGeometry(QRect(300, 580, 89, 35));
        pb_save = new QPushButton(rtu_facecheck);
        pb_save->setObjectName(QString::fromUtf8("pb_save"));
        pb_save->setGeometry(QRect(490, 580, 89, 35));
        pb_quit = new QPushButton(rtu_facecheck);
        pb_quit->setObjectName(QString::fromUtf8("pb_quit"));
        pb_quit->setGeometry(QRect(670, 580, 89, 35));

        retranslateUi(rtu_facecheck);

        QMetaObject::connectSlotsByName(rtu_facecheck);
    } // setupUi

    void retranslateUi(QDialog *rtu_facecheck)
    {
        rtu_facecheck->setWindowTitle(QApplication::translate("rtu_facecheck", "Dialog", nullptr));
        label->setText(QApplication::translate("rtu_facecheck", "\345\217\230\347\224\265\347\253\231\345\220\215:", nullptr));
        label_2->setText(QApplication::translate("rtu_facecheck", "\345\256\211\350\243\205\344\275\215\347\275\256:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tw_face->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("rtu_facecheck", "New Column", nullptr));

        const bool __sortingEnabled = tw_face->isSortingEnabled();
        tw_face->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem1 = tw_face->item(0, 0);
        ___qtablewidgetitem1->setText(QApplication::translate("rtu_facecheck", "1. \346\212\200\346\234\257\346\226\207\344\273\266\346\230\257\345\220\246\351\275\220\345\205\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tw_face->item(1, 0);
        ___qtablewidgetitem2->setText(QApplication::translate("rtu_facecheck", "2. \346\216\245\347\272\277\347\253\257\351\222\256\350\277\236\346\216\245\346\230\257\345\220\246\345\217\257\351\235\240", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tw_face->item(2, 0);
        ___qtablewidgetitem3->setText(QApplication::translate("rtu_facecheck", "3. \346\211\200\346\234\211\346\217\222\346\216\245\344\273\266\350\277\236\346\216\245\346\230\257\345\220\246\347\211\242\345\233\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tw_face->item(3, 0);
        ___qtablewidgetitem4->setText(QApplication::translate("rtu_facecheck", "4. \346\230\276\347\244\272\345\231\250\343\200\201\346\214\207\347\244\272\347\255\211\346\230\276\347\244\272\346\230\257\345\220\246\346\255\243\345\270\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tw_face->item(4, 0);
        ___qtablewidgetitem5->setText(QApplication::translate("rtu_facecheck", "5. \345\220\204\347\247\215\346\240\207\345\277\227\346\230\257\345\220\246\345\256\214\345\245\275", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tw_face->item(5, 0);
        ___qtablewidgetitem6->setText(QApplication::translate("rtu_facecheck", "6. \351\223\255\347\211\214\344\277\241\346\201\257\346\230\257\345\220\246\351\275\220\345\205\250", nullptr));
        tw_face->setSortingEnabled(__sortingEnabled);

        label_3->setText(QApplication::translate("rtu_facecheck", "\345\244\226\350\247\202", nullptr));
        label_4->setText(QApplication::translate("rtu_facecheck", "\347\273\235\347\274\230\347\224\265\351\230\273", nullptr));
        cb_face->setItemText(0, QApplication::translate("rtu_facecheck", "\346\234\252\346\243\200", nullptr));
        cb_face->setItemText(1, QApplication::translate("rtu_facecheck", "\345\220\210\346\240\274", nullptr));
        cb_face->setItemText(2, QApplication::translate("rtu_facecheck", "\344\270\215\345\220\210\346\240\274", nullptr));

        label_6->setText(QApplication::translate("rtu_facecheck", "\347\273\223\350\256\272:", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tw_av->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("rtu_facecheck", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tw_av->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("rtu_facecheck", "New Column", nullptr));

        const bool __sortingEnabled1 = tw_av->isSortingEnabled();
        tw_av->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem9 = tw_av->item(0, 0);
        ___qtablewidgetitem9->setText(QApplication::translate("rtu_facecheck", "\351\242\235\345\256\232\347\273\235\347\274\230\347\224\265\345\216\213Ui(V)", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tw_av->item(0, 1);
        ___qtablewidgetitem10->setText(QApplication::translate("rtu_facecheck", "\350\257\225\351\252\214\347\224\265\345\216\213\346\234\211\346\225\210\345\200\274(V)", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tw_av->item(1, 0);
        ___qtablewidgetitem11->setText(QApplication::translate("rtu_facecheck", "Ui <= 60", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tw_av->item(1, 1);
        ___qtablewidgetitem12->setText(QApplication::translate("rtu_facecheck", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tw_av->item(2, 0);
        ___qtablewidgetitem13->setText(QApplication::translate("rtu_facecheck", "60 < Ui <= 125", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tw_av->item(2, 1);
        ___qtablewidgetitem14->setText(QApplication::translate("rtu_facecheck", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tw_av->item(3, 0);
        ___qtablewidgetitem15->setText(QApplication::translate("rtu_facecheck", "125 < Ui <= 250", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tw_av->item(3, 1);
        ___qtablewidgetitem16->setText(QApplication::translate("rtu_facecheck", "0", nullptr));
        tw_av->setSortingEnabled(__sortingEnabled1);

        label_7->setText(QApplication::translate("rtu_facecheck", "\347\273\223\350\256\272:", nullptr));
        cb_av->setItemText(0, QApplication::translate("rtu_facecheck", "\346\234\252\346\243\200", nullptr));
        cb_av->setItemText(1, QApplication::translate("rtu_facecheck", "\345\220\210\346\240\274", nullptr));
        cb_av->setItemText(2, QApplication::translate("rtu_facecheck", "\344\270\215\345\220\210\346\240\274", nullptr));

        label_8->setText(QApplication::translate("rtu_facecheck", "\344\272\244\346\265\201\350\200\220\345\216\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tw_r->horizontalHeaderItem(0);
        ___qtablewidgetitem17->setText(QApplication::translate("rtu_facecheck", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tw_r->horizontalHeaderItem(1);
        ___qtablewidgetitem18->setText(QApplication::translate("rtu_facecheck", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tw_r->horizontalHeaderItem(2);
        ___qtablewidgetitem19->setText(QApplication::translate("rtu_facecheck", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tw_r->horizontalHeaderItem(3);
        ___qtablewidgetitem20->setText(QApplication::translate("rtu_facecheck", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tw_r->verticalHeaderItem(1);
        ___qtablewidgetitem21->setText(QApplication::translate("rtu_facecheck", "New Row", nullptr));

        const bool __sortingEnabled2 = tw_r->isSortingEnabled();
        tw_r->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem22 = tw_r->item(0, 0);
        ___qtablewidgetitem22->setText(QApplication::translate("rtu_facecheck", "\351\242\235\345\256\232\347\273\235\347\274\230\347\224\265\345\216\213Ui(V)", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tw_r->item(0, 1);
        ___qtablewidgetitem23->setText(QApplication::translate("rtu_facecheck", "\345\205\206\346\254\247\350\241\250\347\224\265\345\216\213(V)", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tw_r->item(0, 2);
        ___qtablewidgetitem24->setText(QApplication::translate("rtu_facecheck", "\347\273\235\347\274\230\347\224\265\351\230\273\345\205\201\350\256\270\345\200\274(M)", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tw_r->item(0, 3);
        ___qtablewidgetitem25->setText(QApplication::translate("rtu_facecheck", "\347\273\235\347\274\230\347\224\265\351\230\273\345\256\236\346\265\213\345\200\274(M)", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tw_r->item(1, 0);
        ___qtablewidgetitem26->setText(QApplication::translate("rtu_facecheck", "Ui <= 60", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tw_r->item(1, 1);
        ___qtablewidgetitem27->setText(QApplication::translate("rtu_facecheck", "250", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tw_r->item(1, 2);
        ___qtablewidgetitem28->setText(QApplication::translate("rtu_facecheck", ">= 5", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tw_r->item(1, 3);
        ___qtablewidgetitem29->setText(QApplication::translate("rtu_facecheck", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tw_r->item(2, 0);
        ___qtablewidgetitem30->setText(QApplication::translate("rtu_facecheck", "Ui > 60", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tw_r->item(2, 1);
        ___qtablewidgetitem31->setText(QApplication::translate("rtu_facecheck", "500", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tw_r->item(2, 2);
        ___qtablewidgetitem32->setText(QApplication::translate("rtu_facecheck", ">= 5", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tw_r->item(2, 3);
        ___qtablewidgetitem33->setText(QApplication::translate("rtu_facecheck", "0", nullptr));
        tw_r->setSortingEnabled(__sortingEnabled2);

        label_9->setText(QApplication::translate("rtu_facecheck", "\347\273\223\350\256\272:", nullptr));
        cb_r_2->setItemText(0, QApplication::translate("rtu_facecheck", "\346\255\243\345\270\270", nullptr));
        cb_r_2->setItemText(1, QApplication::translate("rtu_facecheck", "\346\271\277\347\203\255", nullptr));

        label_10->setText(QApplication::translate("rtu_facecheck", "\345\244\247\346\260\224\346\235\241\344\273\266:", nullptr));
        pb_previous->setText(QApplication::translate("rtu_facecheck", "\344\270\212\344\270\200\344\270\252", nullptr));
        pb_next->setText(QApplication::translate("rtu_facecheck", "\344\270\213\344\270\200\344\270\252", nullptr));
        pb_record->setText(QApplication::translate("rtu_facecheck", "\345\275\223\345\211\215\350\256\260\345\275\225", nullptr));
        pb_save->setText(QApplication::translate("rtu_facecheck", "\344\277\235\345\255\230", nullptr));
        pb_quit->setText(QApplication::translate("rtu_facecheck", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rtu_facecheck: public Ui_rtu_facecheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTU_FACECHECK_H
