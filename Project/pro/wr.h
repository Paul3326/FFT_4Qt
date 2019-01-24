#ifndef WR_H
#define WR_H

#include <QMainWindow>

namespace Ui {
class wr;
}

class wr : public QMainWindow
{
    Q_OBJECT

public:
    explicit wr(QWidget *parent = nullptr);
    ~wr();

private:
    Ui::wr *ui;
};

#endif // WR_H
