#ifndef RTU_PARA_H
#define RTU_PARA_H

#include <QDialog>
#include <QDebug>
#include <QString>
#include <QDateTime>
#include <QMessageBox>

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

    void on_pb_previous_clicked();

    void on_pb_next_clicked();

private:
    Ui::rtu_para *ui;
    QString path;
};

#endif // RTU_PARA_H
