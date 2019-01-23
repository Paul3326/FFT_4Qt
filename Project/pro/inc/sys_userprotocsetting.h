#ifndef SYS_USERPROTOCSETTING_H
#define SYS_USERPROTOCSETTING_H

#include <QDialog>
#include <QRegExpValidator>

namespace Ui {
class sys_userprotocsetting;
}

class sys_userprotocsetting : public QDialog
{
    Q_OBJECT

public:
    explicit sys_userprotocsetting(QWidget *parent = nullptr);
    ~sys_userprotocsetting();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::sys_userprotocsetting *ui;
};

#endif // SYS_USERPROTOCSETTING_H
