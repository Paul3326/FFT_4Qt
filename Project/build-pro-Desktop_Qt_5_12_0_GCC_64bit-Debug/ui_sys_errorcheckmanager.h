/********************************************************************************
** Form generated from reading UI file 'sys_errorcheckmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYS_ERRORCHECKMANAGER_H
#define UI_SYS_ERRORCHECKMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_sys_errorcheckmanager
{
public:
    QPushButton *pushButton_addpoint;
    QPushButton *pushButton_delpoint;
    QPushButton *pushButton_quit;
    QPushButton *pushButton_newsch;
    QPushButton *pushButton_delsch;
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QDialog *sys_errorcheckmanager)
    {
        if (sys_errorcheckmanager->objectName().isEmpty())
            sys_errorcheckmanager->setObjectName(QString::fromUtf8("sys_errorcheckmanager"));
        sys_errorcheckmanager->resize(800, 640);
        pushButton_addpoint = new QPushButton(sys_errorcheckmanager);
        pushButton_addpoint->setObjectName(QString::fromUtf8("pushButton_addpoint"));
        pushButton_addpoint->setGeometry(QRect(680, 490, 89, 35));
        pushButton_delpoint = new QPushButton(sys_errorcheckmanager);
        pushButton_delpoint->setObjectName(QString::fromUtf8("pushButton_delpoint"));
        pushButton_delpoint->setGeometry(QRect(680, 540, 89, 35));
        pushButton_quit = new QPushButton(sys_errorcheckmanager);
        pushButton_quit->setObjectName(QString::fromUtf8("pushButton_quit"));
        pushButton_quit->setGeometry(QRect(680, 590, 89, 35));
        pushButton_newsch = new QPushButton(sys_errorcheckmanager);
        pushButton_newsch->setObjectName(QString::fromUtf8("pushButton_newsch"));
        pushButton_newsch->setGeometry(QRect(540, 20, 89, 35));
        pushButton_delsch = new QPushButton(sys_errorcheckmanager);
        pushButton_delsch->setObjectName(QString::fromUtf8("pushButton_delsch"));
        pushButton_delsch->setGeometry(QRect(660, 20, 89, 35));
        label = new QLabel(sys_errorcheckmanager);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 25, 71, 17));
        comboBox = new QComboBox(sys_errorcheckmanager);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(100, 20, 401, 31));
        comboBox->setEditable(false);

        retranslateUi(sys_errorcheckmanager);

        QMetaObject::connectSlotsByName(sys_errorcheckmanager);
    } // setupUi

    void retranslateUi(QDialog *sys_errorcheckmanager)
    {
        sys_errorcheckmanager->setWindowTitle(QApplication::translate("sys_errorcheckmanager", "Dialog", nullptr));
        pushButton_addpoint->setText(QApplication::translate("sys_errorcheckmanager", "\346\267\273\345\212\240\346\243\200\345\256\232\347\202\271", nullptr));
        pushButton_delpoint->setText(QApplication::translate("sys_errorcheckmanager", "\345\210\240\351\231\244\346\243\200\345\256\232\347\202\271", nullptr));
        pushButton_quit->setText(QApplication::translate("sys_errorcheckmanager", "\351\200\200\345\207\272", nullptr));
        pushButton_newsch->setText(QApplication::translate("sys_errorcheckmanager", "\346\226\260\346\226\271\346\241\210", nullptr));
        pushButton_delsch->setText(QApplication::translate("sys_errorcheckmanager", "\345\210\240\351\231\244\346\226\271\346\241\210", nullptr));
        label->setText(QApplication::translate("sys_errorcheckmanager", "\346\243\200\345\256\232\346\226\271\346\241\210:", nullptr));
        comboBox->setItemText(0, QApplication::translate("sys_errorcheckmanager", "RTU\351\273\230\350\256\244\346\226\271\346\241\210", nullptr));

    } // retranslateUi

};

namespace Ui {
    class sys_errorcheckmanager: public Ui_sys_errorcheckmanager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYS_ERRORCHECKMANAGER_H
