#include "inc/uart_com.h"
#include "ui_uart_com.h"
#include "inc/global.h"

COM_Strc ComCom={DISCONNECT};

uart_com::uart_com(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::uart_com)
{
    ComCom.state = CONNECT;
    QString title = tr("通讯口数据");
    my_serialport = new QSerialPort(this);

    ui->setupUi(this);
    this->setWindowTitle(title);
    this->setFixedSize(this->width(),this->height());

    QTimer *timer = new QTimer(this);
    timer->start(1000);

    if(CONNECT != ComCom.state)
    {
        connect(timer, SIGNAL(timeout()), this, SLOT(Com_Search()));
    }
    else
    {
        Com_Init();
        //connect(my_serialport,&QSerialPort::readyRead,this,SLOT(Com_Read()));
        qDebug()<<"串口初始化完成，传输数据中 "<<endl;
        connect(timer, SIGNAL(timeout()), this, SLOT(Com_Write_Cycle()));
    }
}

uart_com::~uart_com()
{
    delete ui;
}

#if 0
char uart_com::convertCharToHex(char ch)
{
    /*
       0x30等于十进制的48，48也是0的ASCII值，，
       1-9的ASCII值是49-57，，所以某一个值－0x30，，
       就是将字符0-9转换为0-9

    */
    if((ch >= '0') && (ch <= '9'))
        return ch-0x30;
    else if((ch >= 'A') && (ch <= 'F'))
        return ch-'A'+10;
    else if((ch >= 'a') && (ch <= 'f'))
        return ch-'a'+10;
    else return (-1);
}

void uart_com::convertStringToHex(const QString &str, QByteArray &byteData)
{
    int hexdata,lowhexdata;
    int hexdatalen = 0;
    int len = str.length();
    byteData.resize(len/2);
    char lstr,hstr;
    for(int i=0; i<len; )
    {
        hstr=str[i].toLatin1();
        if(hstr == ' ')
        {
            i++;
            continue;
        }
        i++;
        if(i >= len)
            break;
        lstr = str[i].toLatin1();
        hexdata = convertCharToHex(hstr);
        lowhexdata = convertCharToHex(lstr);
        if((hexdata == 16) || (lowhexdata == 16))
            break;
        else
            hexdata = hexdata*16+lowhexdata;
        i++;
        byteData[hexdatalen] = (char)hexdata;
        hexdatalen++;
    }
    byteData.resize(hexdatalen);
}
#endif
/*************************************************
**Function:       搜寻串口
**Description:    搜寻串口
**Param:          无
**Return:         无
*************************************************/
void uart_com::Com_Search()
{
    //获取可用串口
    const auto infos = QSerialPortInfo::availablePorts();
    for(const QSerialPortInfo &info : infos)
    {
        my_serialport->setPort(info);
        if(my_serialport->open(QIODevice::ReadWrite))
        {
            ui->serial_port->addItem(info.portName());
            ComCom.state = CONNECT;
            qDebug()<<info.portName();
        }
    }
}

/*************************************************
**Function:       串口初始化
**Description:    配置串口波特率，奇偶校验，停止位
**Param:          无
**Return:         无
*************************************************/
void uart_com::Com_Init(void)
{
    //设置波特率为115200
    my_serialport->setBaudRate(QSerialPort::Baud115200);
    //校验位设置为0
    my_serialport->setParity(QSerialPort::NoParity);
    //设置数据位8
    my_serialport->setDataBits(QSerialPort::Data8);
    //停止位设置为1
    my_serialport->setStopBits(QSerialPort::OneStop);
    //设置为无流控制
    my_serialport->setFlowControl(QSerialPort::NoFlowControl);
}

/*************************************************
**Function:       读串口数据
**Description:    16进制读取串口数据
**Param:          无
**Return:         无
*************************************************/
void uart_com::Com_Read(void)
{
    QByteArray info = my_serialport->readAll();
    QByteArray hexData = info.toHex();
    qDebug()<<hexData<<endl;
    ui->serial_read->setText(hexData);

 #if 0
    if (!hexData.isEmpty())
    {
        reNum += hexData.size();
        QString myStrTemp = QString::fromLocal8Bit(buf); //支持中文显示
        QString str = ui->serial_text->toPlainText();
        str +=myStrTemp;
        ui->serial_text->clear();
        ui->serial_text->append(str);
    }
    hexData.clear();
#endif
}

/*************************************************
**Function:       串口发送数据
**Description:    发送的数据首地址  长度
**Param:          无
**Return:         无
*************************************************/
void uart_com::Com_Write(char* info,int len)
{
    QByteArray hexData;
    hexData.resize(len);

    for(int i=0; i<len; ++i)
    {
        hexData[i] = info[i];
    }
    ui->serial_send->setText(hexData.toHex());
    qDebug()<<"111111"<<endl;
    qDebug()<<hexData<<endl;
    my_serialport->write(info,len);
}


void uart_com::Com_Write_Cycle()
{
    QByteArray buffer;
    buffer.resize(10);

    for(uint8_t i=0;i<10;i++)
    {
        buffer[i] =(0x30+i);
    }
    Com_Write(buffer.data(),10);

    ui->serial_send->setText(buffer.toHex());
}
