#include "inc/rtu_fieldcheck.h"
#include "ui_rtu_fieldcheck.h"

rtu_fieldcheck::rtu_fieldcheck(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rtu_fieldcheck)
{
    QString title = tr("现场校验[第")+QString::number(1)+tr("条 RTU参数]进行第")+QString::number(1)+tr("次校验") ;
    ui->setupUi(this);
    this->setWindowTitle(title);
}

rtu_fieldcheck::~rtu_fieldcheck()
{
    delete ui;
}

void rtu_fieldcheck::on_pb_print_2_clicked()
{
    this->close();
}
