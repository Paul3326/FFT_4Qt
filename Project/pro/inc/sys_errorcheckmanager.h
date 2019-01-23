#ifndef SYS_ERRORCHECKMANAGER_H
#define SYS_ERRORCHECKMANAGER_H

#include <QDialog>

namespace Ui {
class sys_errorcheckmanager;
}

class sys_errorcheckmanager : public QDialog
{
    Q_OBJECT

public:
    explicit sys_errorcheckmanager(QWidget *parent = nullptr);
    ~sys_errorcheckmanager();

private slots:
    void on_pushButton_quit_clicked();

private:
    Ui::sys_errorcheckmanager *ui;
};

#endif // SYS_ERRORCHECKMANAGER_H
