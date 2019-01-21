#include "inc/sys_para.h"
#include "ui_sys_para.h"

sys_para::sys_para(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sys_para)
{
    QString title = tr("系统参数设置");
    ui->setupUi(this);
    this->setWindowTitle(title);
}

sys_para::~sys_para()
{
    delete ui;
}

void sys_para::on_pushButton_quit_clicked()
{
    this->close();
}
