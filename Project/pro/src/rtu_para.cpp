#include "inc/rtu_para.h"
#include "ui_rtu_para.h"
#include "inc/file.h"

const QString FILE_PATH("rtu_para.csv");

rtu_para::rtu_para(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rtu_para)
{
    file rtufile;
    //get current file path
    rtu_para_csv = "RTU参数录入" + QApplication::applicationDirPath() + FILE_PATH;
    rtufile.file_create(FILE_PATH);

    ui->setupUi(this);
    this->setWindowTitle(rtu_para_csv);

    ui->pb_save->setEnabled(false);
    para_flag = 0xff;
    para_total_page = 0x00;
    para_current_page = 0x00;
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
    para_total_page++;
    para_current_page++;
    ui->te_record_page->setText(QString::number(para_total_page));

    ui->pb_add->setText("增加");
    ui->pb_save->setEnabled(false);
    ui->pb_next->setEnabled(true);
    ui->pb_previous->setEnabled(true);
    ui->pb_delete->setEnabled(true);
    ui->pb_search->setEnabled(true);
    ui->pb_tel_para->setEnabled(true);

    rtu_para_write();
    rtu_para_read();
}

void rtu_para::rtu_para_write()
{
    file rtufile;
    rtufile.file_write(FILE_PATH,QString::number(para_current_page));
    rtufile.file_write(FILE_PATH,ui->cb_rtu_station->currentText());
    rtufile.file_write(FILE_PATH,ui->cb_rtu_producer->currentText());
    rtufile.file_write(FILE_PATH,ui->cb_position->currentText());
    rtufile.file_write(FILE_PATH,ui->cb_rtu_number->currentText());
    rtufile.file_write(FILE_PATH,"\n");

}

void rtu_para::rtu_para_read()
{
    file rtufile;
    QStringList record;
    record = rtufile.file_read(FILE_PATH);

    for(int i = 0; i< record.size();++i)
    {
        QString tmp = record.at(i);
        qDebug()<< tmp;
    }
}
