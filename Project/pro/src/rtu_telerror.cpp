#include "inc/rtu_telerror.h"
#include "ui_rtu_telerror.h"

rtu_telerror::rtu_telerror(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rtu_telerror)
{
    QString title = tr("遥测误差检验");

    ui->setupUi(this);
    ui->tb_av->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tb_ac->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tb_dv->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tb_dc->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tb_p->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tb_q->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tb_cos->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tb_t->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tb_T->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tb_f->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);

    this->setWindowTitle(title);
    this->setFixedSize(this->width(),this->height());
    init_show();
}

rtu_telerror::~rtu_telerror()
{
    delete ui;
}

void rtu_telerror::init_show()
{

}

void rtu_telerror::on_tabWidget_currentChanged(int index)
{
    qDebug()<<index;
}

void rtu_telerror::on_pushButton_5_clicked()
{
    this->close();
}
