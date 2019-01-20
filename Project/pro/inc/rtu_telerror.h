#ifndef RTU_TELERROR_H
#define RTU_TELERROR_H

#include <QDialog>
#include <QDebug>

namespace Ui {
class rtu_telerror;
}

class rtu_telerror : public QDialog
{
    Q_OBJECT

public:
    explicit rtu_telerror(QWidget *parent = nullptr);
    ~rtu_telerror();

private slots:
    void on_tabWidget_currentChanged(int index);

    void on_pushButton_5_clicked();

private:
    Ui::rtu_telerror *ui;
    void init_show();
};

#endif // RTU_TELERROR_H
