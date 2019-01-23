#include "inc/sys_userprotocsetting.h"
#include "ui_sys_userprotocsetting.h"

sys_userprotocsetting::sys_userprotocsetting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sys_userprotocsetting)
{
    QString title = tr("自定义协议---设置");
    ui->setupUi(this);
    this->setWindowTitle(title);
    QRegExp IP("\\b(?:(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\.){3}(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\b");
    ui->lineEdit_ip->setValidator(new QRegExpValidator(IP,this));
}

sys_userprotocsetting::~sys_userprotocsetting()
{
    delete ui;
}

void sys_userprotocsetting::on_pushButton_4_clicked()
{
    this->close();
}
