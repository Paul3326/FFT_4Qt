#include "inc/rtu_para.h"
#include "ui_rtu_para.h"
#include "inc/file.h"

const QString FILE_PATH("rtu_para.csv");

rtu_para::rtu_para(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rtu_para)
{
    file rtufile;
    QString title = tr("RTU参数录入") + QApplication::applicationDirPath() + FILE_PATH;
    //get current file path
    rtufile.file_create(FILE_PATH);

    ui->setupUi(this);
    this->setWindowTitle(title);
    this->setFixedSize(this->width (),this->height ());
    //init para
    rtu_para_init();
}

rtu_para::~rtu_para()
{
    delete ui;
}

void rtu_para::rtu_para_init()
{
    para_flag = 0xff;
    para_total_page = 0x01;
    para_current_page = 0x01;

    if(1 == para_total_page)
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

void rtu_show(QStringList strl)
{
    for(int i = 0; i< strl.size();++i)
    {
        QString tmp = strl.at(i);
        qDebug()<< tmp;
    }
}

void rtu_para::rtu_para_write()
{
    file rtufile;
    rtufile.file_write(FILE_PATH,QString::number(para_total_page)+",");
    rtufile.file_write(FILE_PATH,QString::number(para_current_page)+",");
    rtufile.file_write(FILE_PATH,ui->cb_rtu_station->currentText()+",");
    rtufile.file_write(FILE_PATH,ui->cb_rtu_producer->currentText()+",");
    rtufile.file_write(FILE_PATH,ui->cb_position->currentText()+",");
    rtufile.file_write(FILE_PATH,ui->cb_rtu_number->currentText()+",");
    rtufile.file_write(FILE_PATH,ui->cb_rtu_type->currentText()+",");
    rtufile.file_write(FILE_PATH,ui->cb_rtu_grade->currentText()+",");
    rtufile.file_write(FILE_PATH,ui->cb_twice_v->currentText()+",");
    rtufile.file_write(FILE_PATH,ui->cb_twice_a->currentText()+",");
    rtufile.file_write(FILE_PATH,ui->te_PT_Ratio->toPlainText()+",");
    rtufile.file_write(FILE_PATH,ui->te_CT_Ratio->toPlainText()+",");
    rtufile.file_write(FILE_PATH,ui->cb_rtu_lineway->currentText()+",");
    rtufile.file_write(FILE_PATH,ui->cb_rtu_protocl->currentText()+",");
    rtufile.file_write(FILE_PATH,ui->cb_dc_V->currentText()+",");
    rtufile.file_write(FILE_PATH,ui->te_check_number->toPlainText()+",");
    rtufile.file_write(FILE_PATH,ui->te_uid_number->toPlainText()+",");
    rtufile.file_write(FILE_PATH,ui->cb_temper->currentText()+",");
    rtufile.file_write(FILE_PATH,ui->cb_humdity->currentText()+",");
    rtufile.file_write(FILE_PATH,ui->cb_checker1->currentText()+",");
    rtufile.file_write(FILE_PATH,ui->cb_checker2->currentText()+",");
    rtufile.file_write(FILE_PATH,ui->cb_error_check->currentText()+",");
    rtufile.file_write(FILE_PATH,ui->cb_variable_check->currentText());

    rtufile.file_write(FILE_PATH,"\n");

}

QStringList rtu_para::rtu_para_read(uint8_t read_type,uint8_t read_pos)
{
    file rtufile;
    QStringList record,rec;
    rec = rtufile.file_read(FILE_PATH);
    switch(read_type)
    {
        case 0:
        {
            //rtu_show(rec);
            record = rec;
        }break;
        case 1:
        {
            record = rec.filter(QString::number(read_pos));
        }break;
        default:
            break;
    }
    return record;
}



void rtu_para::on_pb_add_clicked()
{
    para_flag ^= 0xfe;
    if(para_flag&0xfe)
    {
        ui->pb_add->setText("取消");
        ui->pb_save->setEnabled(true);
        ui->pb_next->setEnabled(false);
        ui->pb_previous->setEnabled(false);
        ui->pb_delete->setEnabled(false);
        ui->pb_search->setEnabled(false);
        ui->pb_tel_para->setEnabled(false);
    }
    else
    {
        ui->pb_add->setText("增加");
        if(1 == para_total_page)
            return;
        ui->pb_save->setEnabled(false);
        ui->pb_next->setEnabled(true);
        ui->pb_previous->setEnabled(true);
        ui->pb_delete->setEnabled(true);
        ui->pb_search->setEnabled(true);
        ui->pb_tel_para->setEnabled(true);
    }
}

void rtu_para::on_pb_save_clicked()
{
    para_flag ^= 0xfe;
    para_total_page++;
    para_current_page++;
    ui->te_record_page->setText(QString::number(para_total_page));

    ui->pb_add->setText("增加");
    ui->pb_save->setEnabled(false);
    ui->pb_previous->setEnabled(true);
    ui->pb_delete->setEnabled(true);
    ui->pb_search->setEnabled(true);
    ui->pb_tel_para->setEnabled(true);

    rtu_para_write();
    rtu_para_read(0,0);
    para_current_page = para_total_page;
}

void rtu_para::on_pb_previous_clicked()
{
    QStringList strl;

    para_current_page--;
    if(1 == para_current_page)
    {
        para_current_page = 1;
        ui->pb_previous->setEnabled(false);
        ui->pb_next->setEnabled(true);
    }
    else
    {
        ui->pb_next->setEnabled(true);
    }


    ui->te_record_page->setText(QString::number(para_current_page));
    strl = rtu_para_read(1,para_current_page);
}

void rtu_para::on_pb_next_clicked()
{
    QStringList strl;

    para_current_page++;
    if(para_total_page == para_current_page)
    {
        para_current_page = para_total_page;
        ui->pb_next->setEnabled(false);
        ui->pb_previous->setEnabled(true);
    }
    else {
        ui->pb_previous->setEnabled(true);
    }
    ui->te_record_page->setText(QString::number(para_current_page));
}
