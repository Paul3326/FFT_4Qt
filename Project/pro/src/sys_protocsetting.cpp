#include "inc/sys_protocsetting.h"
#include "ui_sys_protocsetting.h"

sys_protocsetting::sys_protocsetting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sys_protocsetting)
{
    QString title = tr("通讯协议参数配置[文件路径:") + QApplication::applicationDirPath() + tr("rtu_para.csv]");
    ui->setupUi(this);
    this->setWindowTitle(title);
}

sys_protocsetting::~sys_protocsetting()
{
    delete ui;
}

void sys_protocsetting::on_pushButton_quit_clicked()
{
    this->close();
}
