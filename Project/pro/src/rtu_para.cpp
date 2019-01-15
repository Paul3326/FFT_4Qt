#include "inc/rtu_para.h"
#include "ui_rtu_para.h"

rtu_para::rtu_para(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rtu_para)
{
    ui->setupUi(this);
    ui->pb_save->setEnabled(false);
    para_flag = 0xff;
    para_page = 0x00;
}

rtu_para::~rtu_para()
{
    delete ui;
}

void rtu_para::on_pb_add_clicked()
{
    para_flag ^= 0xfe;
    qDebug()<<para_flag;
    if(para_flag&0xfe)
    {
        ui->pb_add->setText("增加");
        ui->pb_save->setEnabled(false);
        ui->pb_next->setEnabled(true);
        ui->pb_previous->setEnabled(true);
        ui->pb_delete->setEnabled(true);
        ui->pb_search->setEnabled(true);
        ui->pb_tel_para->setEnabled(true);
    }
    else
    {
        ui->pb_add->setText("取消");
        ui->pb_save->setEnabled(true);
        ui->pb_next->setEnabled(false);
        ui->pb_previous->setEnabled(false);
        ui->pb_delete->setEnabled(false);
        ui->pb_search->setEnabled(false);
        ui->pb_tel_para->setEnabled(false);
    }
}

void rtu_para::on_pb_save_clicked()
{
    para_flag ^= 0xfe;
    qDebug()<<para_flag;
    para_page++;
    ui->te_record_page->setText(QString::number(para_page));

    ui->pb_add->setText("增加");
    ui->pb_save->setEnabled(false);
    ui->pb_next->setEnabled(true);
    ui->pb_previous->setEnabled(true);
    ui->pb_delete->setEnabled(true);
    ui->pb_search->setEnabled(true);
    ui->pb_tel_para->setEnabled(true);
}
