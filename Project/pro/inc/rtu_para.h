#ifndef RTU_PARA_H
#define RTU_PARA_H

#include <QDialog>
#include <QDebug>
namespace Ui {
class rtu_para;
}

class rtu_para : public QDialog
{
    Q_OBJECT

public:
    explicit rtu_para(QWidget *parent = nullptr);
    ~rtu_para();

private slots:
    void on_pb_add_clicked();

    void on_pb_save_clicked();

private:
    Ui::rtu_para *ui;
    uint8_t para_flag;     //cancel:0x01 save:0x02
    uint8_t para_page;
};

#endif // RTU_PARA_H
