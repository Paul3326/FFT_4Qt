#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QMenu>
#include <QMouseEvent>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void RTUMenu_Show();
    void SYSMenu_Show();

protected:
    bool event(QEvent *event);

private:
    Ui::MainWindow *ui;
    void IshideRTU(bool flag);
    void IshideSYS(bool flag);
};

#endif // MAINWINDOW_H
