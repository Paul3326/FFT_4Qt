#include "inc/rtu_telvarmonitor.h"
#include "ui_rtu_telvarmonitor.h"

rtu_telvarmonitor::rtu_telvarmonitor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rtu_telvarmonitor)
{
    QString title = tr("遥测监视");
    ui->setupUi(this);
    this->setWindowTitle(title);
}

rtu_telvarmonitor::~rtu_telvarmonitor()
{
    delete ui;
}

void rtu_telvarmonitor::on_pb_quit_clicked()
{
    this->close();
}
