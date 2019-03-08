#include "inc/rtu_facecheck.h"
#include "ui_rtu_facecheck.h"
#include "inc/rtu_para.h"

rtu_facecheck::rtu_facecheck(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rtu_facecheck)
{
    ui->setupUi(this);
    this->setFixedSize(this->width (),this->height ());
}

rtu_facecheck::~rtu_facecheck()
{
    delete ui;
}

void rtu_facecheck::on_pb_quit_clicked()
{
    this->close();
}
