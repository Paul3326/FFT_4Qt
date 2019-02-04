#include "inc/uart_com.h"
#include "ui_uart_com.h"

uart_com::uart_com(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::uart_com)
{
    QString title = tr("通讯口数据");

    ui->setupUi(this);
    this->setWindowTitle(title);
    this->setFixedSize(this->width (),this->height ());
    // 设置窗体最大化和最小化
    Qt::WindowFlags flags=Qt::Dialog;
    flags |=Qt::WindowMinMaxButtonsHint;
    flags |=Qt::WindowCloseButtonHint;
    this->setWindowFlags(flags);
}

uart_com::~uart_com()
{
    delete ui;
}
