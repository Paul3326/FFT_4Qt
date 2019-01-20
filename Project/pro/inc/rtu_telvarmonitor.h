#ifndef RTU_TELVARMONITOR_H
#define RTU_TELVARMONITOR_H

#include <QDialog>

namespace Ui {
class rtu_telvarmonitor;
}

class rtu_telvarmonitor : public QDialog
{
    Q_OBJECT

public:
    explicit rtu_telvarmonitor(QWidget *parent = nullptr);
    ~rtu_telvarmonitor();

private slots:
    void on_pb_quit_clicked();

private:
    Ui::rtu_telvarmonitor *ui;
};

#endif // RTU_TELVARMONITOR_H
