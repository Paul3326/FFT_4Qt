#include "inc/about_verion.h"
#include "ui_about_verion.h"

About_verion::About_verion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About_verion)
{
    QString title = tr("软件版本信息");
    ui->setupUi(this);
    this->setModal(true);
    this->setWindowTitle(title);
}

About_verion::~About_verion()
{
    delete ui;
}
