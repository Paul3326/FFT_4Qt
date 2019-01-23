#include "inc/sys_errorcheckmanager.h"
#include "ui_sys_errorcheckmanager.h"

sys_errorcheckmanager::sys_errorcheckmanager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sys_errorcheckmanager)
{
    QString title = tr("检定方案设置[") + QApplication::applicationDirPath() + tr("/scheme.dat]");;
    ui->setupUi(this);
    this->setWindowTitle(title);
}

sys_errorcheckmanager::~sys_errorcheckmanager()
{
    delete ui;
}

void sys_errorcheckmanager::on_pushButton_quit_clicked()
{
    this->close();
}
