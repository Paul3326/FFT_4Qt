#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QLayout>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void RTU_ParaSetting();
    void RTU_FaceCheck();
    void RTU_TelError();
    void RTU_ChangeCheck();
    void RTU_TelPos();
    void RTU_Tel();
    void RTU_FieldCheck();
    void RTU_TelVarMonitor();
    void RTU_ExcelManager();

    void SYS_ParaSetting();
    void SYS_ProtocSetting();
    void SYS_UserProtocSetting();
    void SYS_StandardParaSetting();
    void SYS_ErrorCheckManager();
    void SYS_ChangeCheckManager();
    void SYS_MeaProtocSetting();
    void SYS_TimeSync();
    void SYS_ACSource();
    void SYS_DCSource();
    void SYS_ACMesure();
    void SYS_Download();
    void SYS_Update();
    void SYS_Setting();
    void SYS_RecordSetting();
    void SYS_UserSetting();
    void SYS_AC_Calibration();
    void SYS_Quit();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
