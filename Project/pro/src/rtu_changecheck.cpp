#include "inc/rtu_changecheck.h"
#include "ui_rtu_changecheck.h"

rtu_changecheck::rtu_changecheck(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rtu_changecheck)
{
    QString title = tr("影响量引起的改变量试验[第")+QString::number(1)+tr("条 RTU参数] 进行第")+QString::number(1)+tr("次检定");
    ui->setupUi(this);
    this->setWindowTitle(title);

}

rtu_changecheck::~rtu_changecheck()
{
    delete ui;
}

void rtu_changecheck::on_pushButton_4_clicked()
{
    this->close();
}
