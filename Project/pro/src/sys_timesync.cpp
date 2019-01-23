#include "inc/sys_timesync.h"
#include "ui_sys_timesync.h"

sys_timesync::sys_timesync(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sys_timesync)
{
    QString title = tr("时间同步(输入时,格式同上一行)");
    ui->setupUi(this);
    this->setWindowTitle(title);

    QTimer *timer=new QTimer(this);
    timer->start(100);
    connect(timer,SIGNAL(timeout()),this,SLOT(timeUpdate()));
}

sys_timesync::~sys_timesync()
{
    delete ui;
}

void sys_timesync::timeUpdate()
{
    QDateTime local(QDateTime::currentDateTime());
    QString localTime = local.toString("yyyy-MM-dd:hh:mm:ss");
    ui->textEdit_sys->setText(localTime);
}


void sys_timesync::on_pushButton_quit_clicked()
{
    this->close();
}
