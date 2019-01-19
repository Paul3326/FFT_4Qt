#include "inc/rtu_facecheck.h"
#include "ui_rtu_facecheck.h"
#include "inc/rtu_para.h"

rtu_facecheck::rtu_facecheck(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rtu_facecheck)
{
    QString title;
    rtu_para rtu;
    title = "外观检查、交流耐压试验结果[RTU记录号:" + QString::number(rtu.para_current_page)+ "]";
    ui->setupUi(this);
    this->setWindowTitle(title);

    init_show();
}

rtu_facecheck::~rtu_facecheck()
{
    delete ui;
}

void rtu_facecheck::init_show()
{
    rtu_para rtu;
    ui->te_rtu_station->setText(rtu.rtu_station);
    ui->te_rtu_position->setText(rtu.rtu_position);
}

void rtu_facecheck::on_tw_r_cellChanged(int row, int column)
{
    if(1 == row)
    {
        UOver60 = ui->tw_r->item(row,column)->text();
    }
    else
    {
        ULower60 = ui->tw_r->item(row,column)->text();
    }
    qDebug()<<UOver60<<ULower60<<endl;
}

void rtu_facecheck::on_pb_quit_clicked()
{
    this->close();
}
