#ifndef SYS_TIMESYNC_H
#define SYS_TIMESYNC_H

#include <QDialog>
#include <QDate>
#include<QTimer>

namespace Ui {
class sys_timesync;
}

class sys_timesync : public QDialog
{
    Q_OBJECT

public:
    explicit sys_timesync(QWidget *parent = nullptr);
    ~sys_timesync();

private slots:
    void timeUpdate();

    void on_pushButton_quit_clicked();

private:
    Ui::sys_timesync *ui;
};

#endif // SYS_TIMESYNC_H
