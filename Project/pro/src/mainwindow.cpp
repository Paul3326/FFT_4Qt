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
#include "inc/uart_com.h"

#include "inc/global.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QTimer *timer = new QTimer(this);
    QString pic_path = QApplication::applicationDirPath()+"/pic/desktop.jpg";
    ui->setupUi(this);

    //桌面背景图片
    pic.load(pic_path);
    pic = pic.scaled(ui->label_pic->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->label_pic->setPixmap(pic);
    ui->label_pic->setAutoFillBackground(true);
    ui->label_pic->resize(this->width(),this->height());

    currentStatusLabel = new QLabel;
    ui->statusBar->addWidget(currentStatusLabel);

    currentTimeLabel = new QLabel;
    ui->statusBar->addWidget(currentTimeLabel);

    //每隔100ms发送timeout的信号
    connect(timer, SIGNAL(timeout()),this,SLOT(Update_Status()));
    timer->start(100);

    //每隔100ms进行一次端口检查
    //connect(timer, SIGNAL(timeout()), this, SLOT(ComCom_Check()));
    //timer->start(200);

    connect(ui->action_1_2,SIGNAL(triggered()),this,SLOT(Com_Setting()));
    connect(ui->action_1_3,SIGNAL(triggered()),this,SLOT(Com_Connect()));

    connect(ui->action_2_1,SIGNAL(triggered()),this,SLOT(RTU_ParaSetting()));

/*
    connect(ui->action_3_1,SIGNAL(triggered()),this,SLOT(RTU_FieldCheck()));
    connect(ui->action_3_2,SIGNAL(triggered()),this,SLOT(RTU_TelVarMonitor()));

    connect(ui->action_4_1,SIGNAL(triggered()),this,SLOT(SYS_ParaSetting()));
    connect(ui->action_4_2,SIGNAL(triggered()),this,SLOT(SYS_ProtocSetting()));
    connect(ui->action_4_3,SIGNAL(triggered()),this,SLOT(SYS_UserProtocSetting()));
    connect(ui->action_4_4,SIGNAL(triggered()),this,SLOT(SYS_StandardParaSetting()));
    connect(ui->action_4_5,SIGNAL(triggered()),this,SLOT(SYS_ErrorCheckManager()));

    connect(ui->action_5_1,SIGNAL(triggered()),this,SLOT(SYS_ChangeCheckManager()));
    connect(ui->action_5_2,SIGNAL(triggered()),this,SLOT(SYS_TimeSync()));

    connect(ui->action_6_1,SIGNAL(triggered()),this,SLOT(SYS_ACSource()));
    connect(ui->action_6_2,SIGNAL(triggered()),this,SLOT(SYS_ACMesure()));
    connect(ui->action_6_3,SIGNAL(triggered()),this,SLOT(SYS_Setting()));
    connect(ui->action_6_4,SIGNAL(triggered()),this,SLOT(SYS_RecordSetting()));
    connect(ui->action_6_5,SIGNAL(triggered()),this,SLOT(SYS_UserSetting()));
    connect(ui->action_6_6,SIGNAL(triggered()),this,SLOT(SYS_AC_Calibration()));
    connect(ui->action_6_7,SIGNAL(triggered()),this,SLOT(SYS_RecordSetting()));
    connect(ui->action_6_8,SIGNAL(triggered()),this,SLOT(SYS_UserSetting()));
    connect(ui->action_6_9,SIGNAL(triggered()),this,SLOT(SYS_AC_Calibration()));
    connect(ui->action_6_10,SIGNAL(triggered()),this,SLOT(SYS_RecordSetting()));
*/
    connect(ui->action_7_1,SIGNAL(triggered()),this,SLOT(About_Version()));

}

MainWindow::~MainWindow()
{
    delete ui;
}
/***********************************************************
    MAIN WINDOW PROCESS
***********************************************************/
void MainWindow::MainPage_Repaint()
{
    ui->label_pic->resize(this->width(),this->height());
}

/*************************************************
**Function:       窗体最大最小化事件监听
**Description:    无
**Param:          无
**Return:         无
*************************************************/
void MainWindow::changeEvent(QEvent *event)
{
    if(event->type()==QEvent::WindowStateChange)
    {
        QTimer::singleShot(0, this, SLOT(MainPage_Repaint()));
    }
}

/*************************************************
**Function:       窗体关闭事件监听
**Description:    无
**Param:          无
**Return:         无
*************************************************/
void MainWindow::closeEvent(QCloseEvent *event)
{
    switch(QMessageBox::question(this,tr("提示"),tr("确定退出该软件?"),tr("确定"), tr("取消"),nullptr,1))
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

/*************************************************
**Function:       显示状态刷新
**Description:    无
**Param:          无
**Return:         无
*************************************************/
void MainWindow::Update_Status()
{
    QDateTime local(QDateTime::currentDateTime());
    localTime = local.toString("yyyy-MM-dd hh:mm:ss");

    if(CONNECT != ComCom.state)
    {
        currentStatusLabel->setText("搜索串口中,请稍后...");
    }
    else
    {
        currentStatusLabel->setText("连接成功");
    }
    currentTimeLabel->setText(localTime);


}
/**********************************************************
    OTHER PROCESS
**********************************************************/
void MainWindow::Com_Setting()
{
    QDialog* para_dialog = new uart_com(this);
    para_dialog->setWindowModality(Qt::ApplicationModal);
    para_dialog->setModal(true);
    para_dialog->show();
}

void MainWindow::Com_Connect()
{
    QMessageBox message(QMessageBox::NoIcon, "联机通讯", "正在联机中...");
    //message.setIconPixmap(QPixmap("icon.png"));
    message.exec();
}
//RTU参数录入
void MainWindow::RTU_ParaSetting()
{
    qDebug()<<"RTU参数录入";

    QDialog* para_dialog = new rtu_para(this);
    para_dialog->setWindowModality(Qt::ApplicationModal);
    para_dialog->setModal(false);
    para_dialog->show();
}

//外观检查、耐压试验
void MainWindow::RTU_FaceCheck()
{
    qDebug()<<"外观检查、耐压试验";

    QDialog* para_dialog = new rtu_facecheck(this);
    para_dialog->setWindowModality(Qt::ApplicationModal);
    para_dialog->setModal(false);
    para_dialog->show();
}

//遥测误差检验
void MainWindow::RTU_TelError()
{
    qDebug()<<"遥测误差检验";

    QDialog* para_dialog = new rtu_telerror(this);
    para_dialog->setWindowModality(Qt::ApplicationModal);
    para_dialog->setModal(false);
    para_dialog->show();
}

//改变量
void MainWindow::RTU_ChangeCheck()
{
    qDebug()<<"改变量";

    QDialog* para_dialog = new rtu_changecheck(this);
    para_dialog->setWindowModality(Qt::ApplicationModal);
    para_dialog->setModal(false);
    para_dialog->show();
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
    QDialog* para_dialog = new About_verion(this);
    para_dialog->setWindowModality(Qt::ApplicationModal);
    para_dialog->setModal(false);
    para_dialog->show();
}

