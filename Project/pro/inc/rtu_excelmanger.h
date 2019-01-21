#ifndef RTU_EXCELMANGER_H
#define RTU_EXCELMANGER_H

#include <QDialog>

namespace Ui {
class rtu_excelmanger;
}

class rtu_excelmanger : public QDialog
{
    Q_OBJECT

public:
    explicit rtu_excelmanger(QWidget *parent = nullptr);
    ~rtu_excelmanger();

private slots:
    void on_pb_quit_clicked();

private:
    Ui::rtu_excelmanger *ui;
};

#endif // RTU_EXCELMANGER_H
