#include "inc/rtu_excelmanger.h"
#include "ui_rtu_excelmanger.h"

rtu_excelmanger::rtu_excelmanger(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rtu_excelmanger)
{
    QString title = tr("附加RTU的Excel报表管理[工作路径:") + QApplication::applicationDirPath() + tr("]");
    ui->setupUi(this);
    this->setWindowTitle(title);
}

rtu_excelmanger::~rtu_excelmanger()
{
    delete ui;
}

void rtu_excelmanger::on_pb_quit_clicked()
{
    this->close();
}
