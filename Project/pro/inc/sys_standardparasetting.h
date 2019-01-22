#ifndef SYS_STANDARDPARASETTING_H
#define SYS_STANDARDPARASETTING_H

#include <QDialog>

namespace Ui {
class sys_standardparasetting;
}

class sys_standardparasetting : public QDialog
{
    Q_OBJECT

public:
    explicit sys_standardparasetting(QWidget *parent = nullptr);
    ~sys_standardparasetting();

private slots:
    void on_pushButton_cancel_clicked();

private:
    Ui::sys_standardparasetting *ui;
};

#endif // SYS_STANDARDPARASETTING_H
