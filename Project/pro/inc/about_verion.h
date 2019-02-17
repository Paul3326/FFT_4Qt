#ifndef ABOUT_VERION_H
#define ABOUT_VERION_H

#include <QDialog>

namespace Ui {
class About_verion;
}

class About_verion : public QDialog
{
    Q_OBJECT

public:
    explicit About_verion(QWidget *parent = nullptr);
    ~About_verion();

private:
    Ui::About_verion *ui;
};

#endif // ABOUT_VERION_H
