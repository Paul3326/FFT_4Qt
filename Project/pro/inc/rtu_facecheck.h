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
    void on_pb_quit_clicked();

private:
    Ui::rtu_facecheck *ui;
};

#endif // RTU_FACECHECK_H
