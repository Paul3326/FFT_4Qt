#include "inc/rtu_para.h"
#include "ui_rtu_para.h"

#include "inc/xml_record.h"
#include "inc/global.h"

RTU_PARA_Strc rtu_para_para;

rtu_para::rtu_para(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rtu_para)
{
    ui->setupUi(this);
    this->setFixedSize(this->width (),this->height ());

    ui->lb_record_page->setText(QString::number(1));
}

rtu_para::~rtu_para()
{
    delete ui;
}

void rtu_para::on_pb_add_clicked()
{
    {
        ui->pb_add->setText("取消");
        ui->pb_save->setEnabled(true);
        ui->pb_next->setEnabled(false);
        ui->pb_previous->setEnabled(false);
        ui->pb_delete->setEnabled(false);
        ui->pb_search->setEnabled(false);
        ui->pb_tel_para->setEnabled(false);
    }

//    {
//        ui->pb_add->setText("增加");
//        if(1 == rtu_para_para.para_total_page)
//            return;
//        ui->pb_save->setEnabled(false);
//        ui->pb_next->setEnabled(true);
//        ui->pb_previous->setEnabled(true);
//        ui->pb_delete->setEnabled(true);
//        ui->pb_search->setEnabled(true);
//        ui->pb_tel_para->setEnabled(true);
//    }
}

void rtu_para::on_pb_save_clicked()
{
    rtu_para_para.para_total_page++;
    rtu_para_para.para_current_page++;
    ui->lb_record_page->setText(QString::number(rtu_para_para.para_total_page));

    ui->pb_add->setText("增加");
    ui->pb_save->setEnabled(false);
    ui->pb_previous->setEnabled(true);
    ui->pb_delete->setEnabled(true);
    ui->pb_search->setEnabled(true);
    ui->pb_tel_para->setEnabled(true);

    rtu_para_para.para_current_page = rtu_para_para.para_total_page;

    QDateTime local(QDateTime::currentDateTime());
    rtu_para_para.localTime = local.toString("yyyy-MM-dd:hh:mm:ss");
    qDebug()<<rtu_para_para.localTime;



    if(1 == rtu_para_para.para_total_page)    {
        xml_write("rtu_para.xml");
    }
    else {
        xml_add("rtu_para.xml");
    }
}

void rtu_para::on_pb_previous_clicked()
{
    QStringList strl;

    rtu_para_para.para_current_page--;
    if(1 == rtu_para_para.para_current_page)
    {
        rtu_para_para.para_current_page = 1;
        ui->pb_previous->setEnabled(false);
        ui->pb_next->setEnabled(true);
    }
    else
    {
        ui->pb_next->setEnabled(true);
    }

    ui->lb_record_page->setText(QString::number(rtu_para_para.para_current_page));

}

void rtu_para::on_pb_next_clicked()
{
    rtu_para_para.para_current_page++;
    if(rtu_para_para.para_total_page == rtu_para_para.para_current_page)
    {
        rtu_para_para.para_current_page = rtu_para_para.para_total_page;
        ui->pb_next->setEnabled(false);
        ui->pb_previous->setEnabled(true);
    }
    else {
        ui->pb_previous->setEnabled(true);
    }
    ui->lb_record_page->setText(QString::number(rtu_para_para.para_current_page));
}
