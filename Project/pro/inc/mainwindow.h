#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QLayout>
#include <QImage>
#include <QDebug>
#include <QMessageBox>
#include <QCloseEvent>
#include <QDateTime>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString localTime;

public slots:
    void MainPage_Repaint();
    void Update_Status();

    void Com_Connect();
    void Com_Setting();
    void RTU_ParaSetting();
    void RTU_FaceCheck();
    void RTU_TelError();
    void RTU_ChangeCheck();
    void RTU_FieldCheck();
    void RTU_TelVarMonitor();
    void RTU_ExcelManager();

    void SYS_ParaSetting();
    void SYS_ProtocSetting();
    void SYS_UserProtocSetting();
    void SYS_StandardParaSetting();
    void SYS_ErrorCheckManager();
    void SYS_ChangeCheckManager();
    void SYS_TimeSync();
    void SYS_ACSource();
    void SYS_ACMesure();
    void SYS_Setting();
    void SYS_RecordSetting();
    void SYS_UserSetting();
    void SYS_AC_Calibration();

    void About_Version();

private:
    Ui::MainWindow *ui;
    QPixmap pic;
    QLabel *currentTimeLabel;
    QLabel *currentStatusLabel;

protected:
    void changeEvent(QEvent * event);
    void closeEvent(QCloseEvent *event);
};

#endif // MAINWINDOW_H
