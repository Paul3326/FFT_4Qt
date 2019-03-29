#ifndef UART_COM_H
#define UART_COM_H

#include <QDialog>
#include <QTimer>
#include <QDebug>

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

namespace Ui {
class uart_com;
}

class uart_com : public QDialog
{
    Q_OBJECT

public:
    explicit uart_com(QWidget *parent = nullptr);
    ~uart_com();

public slots:
    void Com_Search(void);
    void Com_Write_Cycle(void);

private:
    Ui::uart_com *ui;

    QSerialPort *my_serialport;

    void Com_Init(void);

    void Com_Read(void);
    void Com_Write(char* info,int len);

    char convertCharToHex(char ch);
    void convertStringToHex(const QString &str, QByteArray &byteData);
};

#endif // UART_COM_H
