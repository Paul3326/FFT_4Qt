#include "inc/about_verion.h"
#include "ui_about_verion.h"

About_verion::About_verion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About_verion)
{
    QString title = tr("关于版本信息");
    ui->setupUi(this);
    this->setWindowTitle(title);
    //ui->pushButton->setText("关闭");
}

About_verion::~About_verion()
{
    delete ui;
}

void About_verion::on_pushButton_clicked()
{
    this->close();
}
