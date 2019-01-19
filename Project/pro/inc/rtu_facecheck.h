#ifndef RTU_FACECHECK_H
#define RTU_FACECHECK_H

#include <QDialog>
#include <QString>
#include <QDebug>

namespace Ui {
class rtu_facecheck;
}

class rtu_facecheck : public QDialog
{
    Q_OBJECT

public:
    explicit rtu_facecheck(QWidget *parent = nullptr);
    ~rtu_facecheck();

private slots:

    void on_tw_r_cellChanged(int row, int column);

    void on_pb_quit_clicked();

private:
    Ui::rtu_facecheck *ui;
    QString UOver60,ULower60;

    void init_show();
};

#endif // RTU_FACECHECK_H
