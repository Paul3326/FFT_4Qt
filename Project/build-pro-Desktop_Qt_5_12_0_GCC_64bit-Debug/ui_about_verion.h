/********************************************************************************
** Form generated from reading UI file 'about_verion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_VERION_H
#define UI_ABOUT_VERION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_About_verion
{
public:
    QLabel *label_name;
    QLabel *label_string;
    QPushButton *pushButton;

    void setupUi(QDialog *About_verion)
    {
        if (About_verion->objectName().isEmpty())
            About_verion->setObjectName(QString::fromUtf8("About_verion"));
        About_verion->resize(574, 316);
        label_name = new QLabel(About_verion);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(130, 70, 251, 41));
        QFont font;
        font.setPointSize(15);
        font.setBold(false);
        font.setWeight(50);
        label_name->setFont(font);
        label_name->setAlignment(Qt::AlignCenter);
        label_name->setWordWrap(true);
        label_string = new QLabel(About_verion);
        label_string->setObjectName(QString::fromUtf8("label_string"));
        label_string->setGeometry(QRect(160, 130, 291, 91));
        QFont font1;
        font1.setPointSize(13);
        label_string->setFont(font1);
        label_string->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        pushButton = new QPushButton(About_verion);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 270, 89, 35));

        retranslateUi(About_verion);

        QMetaObject::connectSlotsByName(About_verion);
    } // setupUi

    void retranslateUi(QDialog *About_verion)
    {
        About_verion->setWindowTitle(QApplication::translate("About_verion", "label", nullptr));
        label_name->setText(QApplication::translate("About_verion", "\346\265\213\350\257\225\344\273\252\345\231\250\347\263\273\347\273\237\350\275\257\344\273\266\347\263\273\347\273\237", nullptr));
        label_string->setText(QApplication::translate("About_verion", "\347\211\210\346\234\254\345\217\267:V1.0.0.0\n"
"\347\211\210\346\235\203\345\275\222xxx\345\205\254\345\217\270\346\211\200\346\234\211\n"
"\345\246\202\346\234\211\347\226\221\351\227\256\357\274\214\350\257\267\345\222\250\350\257\242:xxx\345\224\256\345\220\216\346\212\200\346\234\257\345\233\242\351\230\237\n"
"", nullptr));
        pushButton->setText(QApplication::translate("About_verion", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About_verion: public Ui_About_verion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_VERION_H
