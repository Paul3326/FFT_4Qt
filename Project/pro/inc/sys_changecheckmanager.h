#ifndef SYS_CHANGECHECKMANAGER_H
#define SYS_CHANGECHECKMANAGER_H

#include <QDialog>

namespace Ui {
class sys_changecheckmanager;
}

class sys_changecheckmanager : public QDialog
{
    Q_OBJECT

public:
    explicit sys_changecheckmanager(QWidget *parent = nullptr);
    ~sys_changecheckmanager();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::sys_changecheckmanager *ui;
};

#endif // SYS_CHANGECHECKMANAGER_H
