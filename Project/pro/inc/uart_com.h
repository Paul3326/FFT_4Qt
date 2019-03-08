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
    void ComCom_Search();
private:
    Ui::uart_com *ui;
};

#endif // UART_COM_H
