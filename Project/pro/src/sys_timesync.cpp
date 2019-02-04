#include "inc/sys_timesync.h"
#include "ui_sys_timesync.h"

sys_timesync::sys_timesync(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sys_timesync)
{
    QString title = tr("时间同步(输入时,格式同上一行)");
    ui->setupUi(this);
    this->setWindowTitle(title);
    this->setFixedSize(this->width (),this->height ());

    QTimer *timer=new QTimer(this);
    timer->start(100);
    connect(timer,SIGNAL(timeout()),this,SLOT(timeUpdate()));

    QRegExp TIME("\\b(?:(?:20[0-9][0-9]|[0-1][0-2]|[01]?[0-2]?)\\-){5}(?:20[0-9][0-9]|[0-1][0-2]|[01]?[0-2]?)\\b");
    ui->lineEdit_input->setValidator(new QRegExpValidator(TIME,this));
}

sys_timesync::~sys_timesync()
{
    delete ui;
}

void sys_timesync::timeUpdate()
{
    QDateTime local(QDateTime::currentDateTime());
    localTime = local.toString("yyyy-MM-dd:hh:mm:ss");
    ui->textEdit_sys->setText(localTime);
}


void sys_timesync::on_pushButton_quit_clicked()
{
    this->close();
}

void sys_timesync::on_pushButton_read_clicked()
{
    ui->lineEdit_input->setText(localTime);
}

void sys_timesync::on_pushButton_write_clicked()
{
    qDebug()<<ui->lineEdit_input->text();
    if("" == ui->lineEdit_input->text())
    {
        QMessageBox::information(nullptr, tr("提示"), tr("未输入写入的时间值!"),tr("确定"));
    }

}
