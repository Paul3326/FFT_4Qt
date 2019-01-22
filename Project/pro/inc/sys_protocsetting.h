#ifndef SYS_PROTOCSETTING_H
#define SYS_PROTOCSETTING_H

#include <QDialog>

namespace Ui {
class sys_protocsetting;
}

class sys_protocsetting : public QDialog
{
    Q_OBJECT

public:
    explicit sys_protocsetting(QWidget *parent = nullptr);
    ~sys_protocsetting();

private slots:
    void on_pushButton_quit_clicked();

private:
    Ui::sys_protocsetting *ui;
};

#endif // SYS_PROTOCSETTING_H
