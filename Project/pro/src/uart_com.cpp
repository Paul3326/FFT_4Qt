#include "inc/uart_com.h"
#include "ui_uart_com.h"
#include "inc/global.h"

COM_Strc ComCom;

uart_com::uart_com(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::uart_com)
{
    ComCom.state = RESEARCH;
    QString title = tr("通讯口数据");

    ui->setupUi(this);
    this->setWindowTitle(title);
    this->setFixedSize(this->width(),this->height());

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(ComCom_Search()));
    timer->start(2000);
}

uart_com::~uart_com()
{
    delete ui;
}

void uart_com::ComCom_Search()
{
    QStringList m_serialPortName;
    foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
    {
        m_serialPortName << info.portName();
        qDebug()<<"serialPortName:"<<info.portName();
    }
}
