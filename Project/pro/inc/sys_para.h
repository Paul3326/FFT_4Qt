#ifndef SYS_PARA_H
#define SYS_PARA_H

#include <QDialog>

namespace Ui {
class sys_para;
}

class sys_para : public QDialog
{
    Q_OBJECT

public:
    explicit sys_para(QWidget *parent = nullptr);
    ~sys_para();

private slots:
    void on_pushButton_quit_clicked();

private:
    Ui::sys_para *ui;
};

#endif // SYS_PARA_H
