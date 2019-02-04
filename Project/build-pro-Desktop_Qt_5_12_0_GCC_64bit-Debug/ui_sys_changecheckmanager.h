/********************************************************************************
** Form generated from reading UI file 'sys_changecheckmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYS_CHANGECHECKMANAGER_H
#define UI_SYS_CHANGECHECKMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_sys_changecheckmanager
{
public:
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QPushButton *pushButton_2;

    void setupUi(QDialog *sys_changecheckmanager)
    {
        if (sys_changecheckmanager->objectName().isEmpty())
            sys_changecheckmanager->setObjectName(QString::fromUtf8("sys_changecheckmanager"));
        sys_changecheckmanager->resize(603, 347);
        label = new QLabel(sys_changecheckmanager);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 111, 17));
        comboBox = new QComboBox(sys_changecheckmanager);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(150, 25, 311, 30));
        pushButton = new QPushButton(sys_changecheckmanager);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(490, 26, 89, 30));
        checkBox = new QCheckBox(sys_changecheckmanager);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(40, 80, 111, 23));
        checkBox_2 = new QCheckBox(sys_changecheckmanager);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(220, 80, 111, 23));
        checkBox_3 = new QCheckBox(sys_changecheckmanager);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(400, 80, 111, 23));
        checkBox_4 = new QCheckBox(sys_changecheckmanager);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(220, 140, 111, 23));
        checkBox_5 = new QCheckBox(sys_changecheckmanager);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(400, 140, 111, 23));
        checkBox_6 = new QCheckBox(sys_changecheckmanager);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(40, 140, 111, 23));
        checkBox_7 = new QCheckBox(sys_changecheckmanager);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setGeometry(QRect(90, 210, 111, 23));
        checkBox_8 = new QCheckBox(sys_changecheckmanager);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
        checkBox_8->setGeometry(QRect(250, 210, 251, 23));
        pushButton_2 = new QPushButton(sys_changecheckmanager);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(490, 290, 89, 35));

        retranslateUi(sys_changecheckmanager);

        QMetaObject::connectSlotsByName(sys_changecheckmanager);
    } // setupUi

    void retranslateUi(QDialog *sys_changecheckmanager)
    {
        sys_changecheckmanager->setWindowTitle(QApplication::translate("sys_changecheckmanager", "Dialog", nullptr));
        label->setText(QApplication::translate("sys_changecheckmanager", "\346\243\200\345\256\232\346\226\271\346\241\210\345\220\215\347\247\260:", nullptr));
        comboBox->setItemText(0, QApplication::translate("sys_changecheckmanager", "\351\273\230\350\256\244\346\226\271\346\241\210", nullptr));
        comboBox->setItemText(1, QApplication::translate("sys_changecheckmanager", "\351\273\230\350\256\244\346\226\271\346\241\210", nullptr));

        pushButton->setText(QApplication::translate("sys_changecheckmanager", "\346\226\260\346\226\271\346\241\210", nullptr));
        checkBox->setText(QApplication::translate("sys_changecheckmanager", "\350\276\223\345\205\245\351\207\217\351\242\221\347\216\207", nullptr));
        checkBox_2->setText(QApplication::translate("sys_changecheckmanager", "\350\276\223\345\205\245\351\207\217\347\224\265\345\216\213", nullptr));
        checkBox_3->setText(QApplication::translate("sys_changecheckmanager", "\350\276\223\345\205\245\351\207\217\347\224\265\346\265\201", nullptr));
        checkBox_4->setText(QApplication::translate("sys_changecheckmanager", "\344\270\215\345\271\263\350\241\241\347\224\265\346\265\201", nullptr));
        checkBox_5->setText(QApplication::translate("sys_changecheckmanager", "\345\212\237\347\216\207\345\233\240\346\225\260", nullptr));
        checkBox_6->setText(QApplication::translate("sys_changecheckmanager", "\350\276\223\345\205\245\351\207\217\350\260\220\346\263\242", nullptr));
        checkBox_7->setText(QApplication::translate("sys_changecheckmanager", "\350\266\205\351\207\217\351\231\220", nullptr));
        checkBox_8->setText(QApplication::translate("sys_changecheckmanager", "\344\270\211\347\233\270\345\212\237\347\216\207\346\265\213\351\207\217\345\216\237\344\273\266\344\271\213\351\227\264\347\233\270\344\272\222\344\275\234\347\224\250", nullptr));
        pushButton_2->setText(QApplication::translate("sys_changecheckmanager", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sys_changecheckmanager: public Ui_sys_changecheckmanager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYS_CHANGECHECKMANAGER_H
