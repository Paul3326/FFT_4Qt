#ifndef RTU_FIELDCHECK_H
#define RTU_FIELDCHECK_H

#include <QDialog>

namespace Ui {
class rtu_fieldcheck;
}

class rtu_fieldcheck : public QDialog
{
    Q_OBJECT

public:
    explicit rtu_fieldcheck(QWidget *parent = nullptr);
    ~rtu_fieldcheck();

private slots:
    void on_pb_print_2_clicked();

private:
    Ui::rtu_fieldcheck *ui;
};

#endif // RTU_FIELDCHECK_H
