#include "inc/mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->action_1_1,SIGNAL(triggered()),this,SLOT(RTU_ParaSetting()));
    connect(ui->action_1_2,SIGNAL(triggered()),this,SLOT(RTU_FaceCheck()));
    connect(ui->action_1_3,SIGNAL(triggered()),this,SLOT(RTU_TelError()));
    connect(ui->action_1_4,SIGNAL(triggered()),this,SLOT(RTU_ChangeCheck()));
    connect(ui->action_1_5,SIGNAL(triggered()),this,SLOT(RTU_TelPos()));
    connect(ui->action_1_6,SIGNAL(triggered()),this,SLOT(RTU_Tel()));
    connect(ui->action_1_7,SIGNAL(triggered()),this,SLOT(RTU_FieldCheck()));
    connect(ui->action_1_8,SIGNAL(triggered()),this,SLOT(RTU_TelVarMonitor()));
    connect(ui->action_1_9,SIGNAL(triggered()),this,SLOT(RTU_ExcelManager()));

    connect(ui->action_2_1,SIGNAL(triggered()),this,SLOT(SYS_ParaSetting()));
    connect(ui->action_2_2,SIGNAL(triggered()),this,SLOT(SYS_ProtocSetting()));
    connect(ui->action_2_3,SIGNAL(triggered()),this,SLOT(SYS_UserProtocSetting()));
    connect(ui->action_2_4,SIGNAL(triggered()),this,SLOT(SYS_StandardParaSetting()));
    connect(ui->action_2_5,SIGNAL(triggered()),this,SLOT(SYS_ErrorCheckManager()));
    connect(ui->action_2_6,SIGNAL(triggered()),this,SLOT(SYS_ChangeCheckManager()));
    connect(ui->action_2_7,SIGNAL(triggered()),this,SLOT(SYS_MeaProtocSetting()));
    connect(ui->action_2_8,SIGNAL(triggered()),this,SLOT(SYS_TimeSync()));
    connect(ui->action_2_9,SIGNAL(triggered()),this,SLOT(SYS_ACSource()));
    connect(ui->action_2_10,SIGNAL(triggered()),this,SLOT(SYS_DCSource()));
    connect(ui->action_2_11,SIGNAL(triggered()),this,SLOT(SYS_ACMesure()));
    connect(ui->action_2_12,SIGNAL(triggered()),this,SLOT(SYS_Download()));
    connect(ui->action_2_13,SIGNAL(triggered()),this,SLOT(SYS_Update()));
    connect(ui->action_2_14,SIGNAL(triggered()),this,SLOT(SYS_Setting()));
    connect(ui->action_2_15,SIGNAL(triggered()),this,SLOT(SYS_RecordSetting()));
    connect(ui->action_2_16,SIGNAL(triggered()),this,SLOT(SYS_UserSetting()));
    connect(ui->action_2_17,SIGNAL(triggered()),this,SLOT(SYS_AC_Calibration()));
    connect(ui->action_2_18,SIGNAL(triggered()),this,SLOT(SYS_Quit()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::RTU_ParaSetting()
{
    qDebug()<<"RTU_ParaSetting";
}

void MainWindow::RTU_FaceCheck()
{
    qDebug()<<"RTU_FaceCheck";
}

void MainWindow::RTU_TelError()
{
    qDebug()<<"RTU_TelError";
}

void MainWindow::RTU_ChangeCheck()
{
    qDebug()<<"RTU_ChangeCheck";
}

void MainWindow::RTU_TelPos()
{
    qDebug()<<"RTU_TelPos";
}

void MainWindow::RTU_Tel()
{
    qDebug()<<"RTU_Tel";
}

void MainWindow::RTU_FieldCheck()
{
    qDebug()<<"RTU_FieldCheck";
}

void MainWindow::RTU_TelVarMonitor()
{
    qDebug()<<"RTU_TelVarMonitor";
}

void MainWindow::RTU_ExcelManager()
{
    qDebug()<<"RTU_ExcelManager";
}


//SYS
void MainWindow::SYS_ParaSetting()
{
    qDebug()<<"SYS_ParaSetting";
}

void MainWindow::SYS_ProtocSetting()
{
    qDebug()<<"SYS_ProtocSetting";
}

void MainWindow::SYS_UserProtocSetting()
{
    qDebug()<<"SYS_UserProtocSetting";
}

void MainWindow::SYS_StandardParaSetting()
{
    qDebug()<<"SYS_StandardParaSetting";
}

void MainWindow::SYS_ErrorCheckManager()
{
    qDebug()<<"SYS_ErrorCheckManager";
}

void MainWindow::SYS_ChangeCheckManager()
{
    qDebug()<<"SYS_ChangeCheckManager";
}

void MainWindow::SYS_MeaProtocSetting()
{
    qDebug()<<"SYS_MeaProtocSetting";
}

void MainWindow::SYS_TimeSync()
{
    qDebug()<<"SYS_TimeSync";
}

void MainWindow::SYS_ACSource()
{
    qDebug()<<"SYS_ACSource";
}

void MainWindow::SYS_DCSource()
{
    qDebug()<<"SYS_DCSource";
}

void MainWindow::SYS_ACMesure()
{
    qDebug()<<"SYS_ACMesure";
}

void MainWindow::SYS_Download()
{
    qDebug()<<"SYS_Download";
}

void MainWindow::SYS_Update()
{
    qDebug()<<"SYS_Update";
}

void MainWindow::SYS_Setting()
{
    qDebug()<<"SYS_Setting";
}

void MainWindow::SYS_RecordSetting()
{
    qDebug()<<"SYS_RecordSetting";
}

void MainWindow::SYS_UserSetting()
{
    qDebug()<<"SYS_UserSetting";
}

void MainWindow::SYS_AC_Calibration()
{
    qDebug()<<"SYS_AC_Calibration";
}

void MainWindow::SYS_Quit()
{       
    qDebug()<<"SYS_Quit";
    this->close();
}