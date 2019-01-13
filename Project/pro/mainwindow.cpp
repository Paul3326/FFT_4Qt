#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    IshideRTU(true);
    IshideSYS(true);
    ui->menuBar->addAction(tr("&RTU校验"), this, SLOT(RTUMenu_Show()));
    ui->menuBar->addAction(tr("&系统设置"), this, SLOT(SYSMenu_Show()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::event(QEvent *event)
{
    if(QEvent::ActivationChange == event->type())
    {
        if(this != QApplication::activeWindow())
        {
            qDebug()<<"Mouse is out of area!!!\n";
            return true;
        }
    }
    return false;
}

/**
 * RTU and Systemseting list hide or show
 *
 *
**/
void MainWindow::IshideRTU(bool flag)
{
    //hide rtu list
    if(true == flag){
        this->ui->listWidget_RTU->setCurrentRow(0);
        this->ui->listWidget_RTU->setVisible(0);
        this->ui->line_1->setVisible(0);
        this->ui->line_2->setVisible(0);
        this->ui->line_3->setVisible(0);
        this->ui->line_4->setVisible(0);
    }
    else {
        this->ui->listWidget_RTU->setVisible(1);
        this->ui->line_1->setVisible(1);
        this->ui->line_2->setVisible(1);
        this->ui->line_3->setVisible(1);
        this->ui->line_4->setVisible(1);
    }
}

void MainWindow::IshideSYS(bool flag)
{
    //hide system seting list
    if(true == flag){
        this->ui->listWidget_SYS->setCurrentRow(0);
        this->ui->listWidget_SYS->setVisible(0);
        this->ui->line_11->setVisible(0);
        this->ui->line_12->setVisible(0);
        this->ui->line_13->setVisible(0);
        this->ui->line_14->setVisible(0);
        this->ui->line_15->setVisible(0);
    }
    else {
        this->ui->listWidget_SYS->setVisible(1);
        this->ui->line_11->setVisible(1);
        this->ui->line_12->setVisible(1);
        this->ui->line_13->setVisible(1);
        this->ui->line_14->setVisible(1);
        this->ui->line_15->setVisible(1);
    }
}
/**
 * RTU and Systemseting Menu
 *
 *
**/
void MainWindow::RTUMenu_Show()
{
    qDebug()<<"RTUMenu_Show";

    IshideRTU(false);
    IshideSYS(true);
}

void MainWindow::SYSMenu_Show()
{
    qDebug()<<"SYSMenu_Show";
    IshideSYS(false);
    IshideRTU(true);
}
