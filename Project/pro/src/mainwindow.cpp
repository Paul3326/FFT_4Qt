#include "inc/mainwindow.h"
#include "ui_mainwindow.h"
#include "inc/rtu_para.h"
#include "inc/rtu_facecheck.h"
#include "inc/rtu_telerror.h"
#include "inc/rtu_changecheck.h"
#include "inc/rtu_fieldcheck.h"
#include "inc/rtu_telvarmonitor.h"
#include "inc/rtu_excelmanger.h"
#include "inc/sys_para.h"
#include "inc/uart_com.h"
#include "inc/sys_timesync.h"
#include "inc/sys_protocsetting.h"
#include "inc/sys_userprotocsetting.h"
#include "inc/sys_errorcheckmanager.h"
#include "inc/sys_standardparasetting.h"
#include "inc/sys_changecheckmanager.h"
#include "inc/about_verion.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QString pic_path = QApplication::applicationDirPath()+"/pic/desktop.jpg";

    ui->setupUi(this);

    //桌面背景图片
    pic.load(pic_path);
    pic = pic.scaled(ui->label_pic->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->label_pic->setPixmap(pic);
    ui->label_pic->setAutoFillBackground(true);
    ui->label_pic->resize(this->width(),this->height());
    //状态栏信息
    statusBar()->showMessage(tr("正在和设备通讯中..."));

/*
    connect(ui->action_1_1,SIGNAL(triggered()),this,SLOT(RTU_ParaSetting()));
    connect(ui->action_1_2,SIGNAL(triggered()),this,SLOT(RTU_FaceCheck()));
    connect(ui->action_1_3,SIGNAL(triggered()),this,SLOT(RTU_TelError()));
    connect(ui->action_1_4,SIGNAL(triggered()),this,SLOT(RTU_ChangeCheck()));
    connect(ui->action_1_7,SIGNAL(triggered()),this,SLOT(RTU_FieldCheck()));
    connect(ui->action_1_8,SIGNAL(triggered()),this,SLOT(RTU_TelVarMonitor()));
    connect(ui->action_1_9,SIGNAL(triggered()),this,SLOT(RTU_ExcelManager()));

    connect(ui->action_2_1,SIGNAL(triggered()),this,SLOT(SYS_ParaSetting()));
    connect(ui->action_2_2,SIGNAL(triggered()),this,SLOT(SYS_ProtocSetting()));
    connect(ui->action_2_3,SIGNAL(triggered()),this,SLOT(SYS_UserProtocSetting()));
    connect(ui->action_2_4,SIGNAL(triggered()),this,SLOT(SYS_StandardParaSetting()));
    connect(ui->action_2_5,SIGNAL(triggered()),this,SLOT(SYS_ErrorCheckManager()));
    connect(ui->action_2_6,SIGNAL(triggered()),this,SLOT(SYS_ChangeCheckManager()));
    connect(ui->action_2_8,SIGNAL(triggered()),this,SLOT(SYS_TimeSync()));
    connect(ui->action_2_9,SIGNAL(triggered()),this,SLOT(SYS_ACSource()));
    connect(ui->action_2_11,SIGNAL(triggered()),this,SLOT(SYS_ACMesure()));
    connect(ui->action_2_14,SIGNAL(triggered()),this,SLOT(SYS_Setting()));
    connect(ui->action_2_15,SIGNAL(triggered()),this,SLOT(SYS_RecordSetting()));
    connect(ui->action_2_16,SIGNAL(triggered()),this,SLOT(SYS_UserSetting()));
    connect(ui->action_2_17,SIGNAL(triggered()),this,SLOT(SYS_AC_Calibration()));

    connect(ui->action_3_11,SIGNAL(triggered()),this,SLOT(About_Version()));
    //connect(ui->action_3_12,SIGNAL(triggered()),this,SLOT(About_User()));
    */
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::MainPage_Repaint()
{
    ui->label_pic->resize(this->width(),this->height());
}
//窗体最大最小化事件监听
void MainWindow::changeEvent(QEvent *event)
{
    if(event->type()==QEvent::WindowStateChange)
    {
        QTimer::singleShot(0, this, SLOT(MainPage_Repaint()));
    }
}

//窗体关闭事件监听
void MainWindow::closeEvent(QCloseEvent *event)
{
    switch( QMessageBox::information(this,tr("提示"),tr("确定退出该软件?"),tr("确定"), tr("取消"),0,1))
    {
    case 0:
        event->accept();
        break;
    case 1:
    default:
        event->ignore();
        break;
    }
}

//RTU参数录入
void MainWindow::RTU_ParaSetting()
{
    qDebug()<<"RTU参数录入";
    rtu_para para_dialog;
    para_dialog.exec();
}

void MainWindow::UART()
{
    uart_com dialog;
    dialog.exec();
}
//外观检查、耐压试验
void MainWindow::RTU_FaceCheck()
{
    qDebug()<<"外观检查、耐压试验";
    rtu_facecheck para_dialog;
    //this->close();
    para_dialog.exec();
}

//遥测误差检验
void MainWindow::RTU_TelError()
{
    qDebug()<<"遥测误差检验";
    rtu_telerror para_dialog;
    para_dialog.exec();
}

//改变量
void MainWindow::RTU_ChangeCheck()
{
    qDebug()<<"改变量";
    rtu_changecheck para_dialog;
    para_dialog.exec();
}

//现场校验
void MainWindow::RTU_FieldCheck()
{
    qDebug()<<"现场校验";
    rtu_fieldcheck para_dialog;
    para_dialog.exec();
}

//遥控量监测
void MainWindow::RTU_TelVarMonitor()
{
    qDebug()<<"遥控量监测";
    rtu_telvarmonitor para_dialog;
    para_dialog.exec();
}

//Excel报表管理
void MainWindow::RTU_ExcelManager()
{
    qDebug()<<"Excel报表管理";
    rtu_excelmanger para_dialog;
    para_dialog.exec();
}


//系统参数设置
void MainWindow::SYS_ParaSetting()
{
    qDebug()<<"系统参数设置";
    sys_para para_dialog;
    para_dialog.exec();
}

//通讯协议参数
void MainWindow::SYS_ProtocSetting()
{
    qDebug()<<"通讯协议参数";
    sys_protocsetting para_dialog;
    para_dialog.exec();
}

//自定义协议设置
void MainWindow::SYS_UserProtocSetting()
{
    qDebug()<<"自定义协议设置";
    sys_userprotocsetting para_dialog;
    para_dialog.exec();
}

//标准装置参数
void MainWindow::SYS_StandardParaSetting()
{
    qDebug()<<"标准装置参数";
    sys_standardparasetting para_dialog;
    para_dialog.exec();
}

//检定方案设置
void MainWindow::SYS_ErrorCheckManager()
{
    qDebug()<<"检定方案设置";
    sys_errorcheckmanager para_dialog;
    para_dialog.exec();
}

//改变量检定方案管理
void MainWindow::SYS_ChangeCheckManager()
{
    qDebug()<<"改变量检定方案管理";
    sys_changecheckmanager para_dialog;
    para_dialog.exec();
}

//时间同步
void MainWindow::SYS_TimeSync()
{
    qDebug()<<"时间同步";
    sys_timesync para_dialog;
    para_dialog.exec();
}

//交流标准功率源
void MainWindow::SYS_ACSource()
{
    qDebug()<<"交流标准功率源";
}

//直流标准源
//void MainWindow::SYS_DCSource()
//{
//    qDebug()<<"直流标准源";
//    QMessageBox::information(nullptr, tr("提示"), tr("暂未实现！"),tr("确定"));
//}

//交流测量
void MainWindow::SYS_ACMesure()
{
    qDebug()<<"交流测量";
}

//设置工具
void MainWindow::SYS_Setting()
{
    qDebug()<<"设置工具";
}

//设置记录保存路径
void MainWindow::SYS_RecordSetting()
{
    qDebug()<<"设置记录保存路径";
}

//设置用户
void MainWindow::SYS_UserSetting()
{
    qDebug()<<"设置用户";
}

//交流源校准
void MainWindow::SYS_AC_Calibration()
{
    qDebug()<<"交流源校准";
}

//关于版本信息
void MainWindow::About_Version()
{       
    qDebug()<<"关于版本信息";
    About_verion para_dialog;
    para_dialog.exec();
}

//关于用户
void MainWindow::About_User()
{
    qDebug()<<"关于用户";
}
