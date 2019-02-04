#ifndef RTU_PARA_H
#define RTU_PARA_H

#include <QDialog>
#include <QDebug>
#include <QString>
#include <QStringList>

namespace Ui {
class rtu_para;
}

class rtu_para : public QDialog
{
    Q_OBJECT

public:
    explicit rtu_para(QWidget *parent = nullptr);
    ~rtu_para();
    uint8_t para_current_page;
    uint8_t para_total_page;
    QString rtu_station;
    QString rtu_position;

private slots:
    void on_pb_add_clicked();

    void on_pb_save_clicked();

    void on_pb_previous_clicked();

    void on_pb_next_clicked();

private:
    Ui::rtu_para *ui;
    uint8_t para_flag;     //cancel:0x01 save:0x02
    void rtu_para_init();

    void rtu_para_write();
    QStringList rtu_para_read(uint8_t type,uint8_t pos);
};

#endif // RTU_PARA_H
