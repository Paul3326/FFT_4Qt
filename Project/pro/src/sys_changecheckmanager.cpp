#include "inc/sys_changecheckmanager.h"
#include "ui_sys_changecheckmanager.h"

sys_changecheckmanager::sys_changecheckmanager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sys_changecheckmanager)
{
    QString title = tr("改变量检定方案管理");
    ui->setupUi(this);
    this->setWindowTitle(title);
}

sys_changecheckmanager::~sys_changecheckmanager()
{
    delete ui;
}

void sys_changecheckmanager::on_pushButton_2_clicked()
{
    this->close();
}
