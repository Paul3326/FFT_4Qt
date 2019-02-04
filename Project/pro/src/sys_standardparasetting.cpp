#include "inc/sys_standardparasetting.h"
#include "ui_sys_standardparasetting.h"

sys_standardparasetting::sys_standardparasetting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sys_standardparasetting)
{
    QString title = tr("标准装置参数");
    ui->setupUi(this);
    this->setWindowTitle(title);
    this->setFixedSize(this->width (),this->height ());
}

sys_standardparasetting::~sys_standardparasetting()
{
    delete ui;
}

void sys_standardparasetting::on_pushButton_cancel_clicked()
{
    this->close();
}
