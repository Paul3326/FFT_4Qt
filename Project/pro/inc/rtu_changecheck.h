#ifndef RTU_CHANGECHECK_H
#define RTU_CHANGECHECK_H

#include <QDialog>

namespace Ui {
class rtu_changecheck;
}

class rtu_changecheck : public QDialog
{
    Q_OBJECT

public:
    explicit rtu_changecheck(QWidget *parent = nullptr);
    ~rtu_changecheck();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::rtu_changecheck *ui;
};

#endif // RTU_CHANGECHECK_H
