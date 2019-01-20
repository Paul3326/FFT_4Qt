#include "inc/rtu_telerror.h"
#include "ui_rtu_telerror.h"

rtu_telerror::rtu_telerror(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rtu_telerror)
{
    QString title = tr("遥测误差检验");

    ui->setupUi(this);
    this->setWindowTitle(title);

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
