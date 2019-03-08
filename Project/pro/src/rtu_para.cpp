#include "inc/rtu_para.h"
#include "ui_rtu_para.h"

#include "inc/xml_record.h"
#include "inc/global.h"

RTU_PARA_Strc rtu_para_para;

rtu_para::rtu_para(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rtu_para)
{
    ui->setupUi(this);
    this->setFixedSize(this->width (),this->height ());
}

rtu_para::~rtu_para()
{
    delete ui;
}

void rtu_para::on_pb_add_clicked()
{
    {
        ui->pb_add->setText("取消");
        ui->pb_save->setEnabled(true);
        ui->pb_next->setEnabled(false);
        ui->pb_previous->setEnabled(false);
        ui->pb_delete->setEnabled(false);
        ui->pb_search->setEnabled(false);
        ui->pb_tel_para->setEnabled(false);
    }

//    {
//        ui->pb_add->setText("增加");
//        if(1 == rtu_para_para.para_total_page)
//            return;
//        ui->pb_save->setEnabled(false);
//        ui->pb_next->setEnabled(true);
//        ui->pb_previous->setEnabled(true);
//        ui->pb_delete->setEnabled(true);
//        ui->pb_search->setEnabled(true);
//        ui->pb_tel_para->setEnabled(true);
//    }
}

void rtu_para::on_pb_save_clicked()
{
    rtu_para_para.para_total_page++;
    rtu_para_para.para_current_page++;
    ui->te_record_page->setText(QString::number(rtu_para_para.para_total_page));

    ui->pb_add->setText("增加");
    ui->pb_save->setEnabled(false);
    ui->pb_previous->setEnabled(true);
    ui->pb_delete->setEnabled(true);
    ui->pb_search->setEnabled(true);
    ui->pb_tel_para->setEnabled(true);

    rtu_para_para.para_current_page = rtu_para_para.para_total_page;

    QDateTime local(QDateTime::currentDateTime());
    rtu_para_para.localTime = local.toString("yyyy-MM-dd:hh:mm:ss");
    qDebug()<<rtu_para_para.localTime;
}

void rtu_para::on_pb_previous_clicked()
{
    QStringList strl;

    rtu_para_para.para_current_page--;
    if(1 == rtu_para_para.para_current_page)
    {
        rtu_para_para.para_current_page = 1;
        ui->pb_previous->setEnabled(false);
        ui->pb_next->setEnabled(true);
    }
    else
    {
        ui->pb_next->setEnabled(true);
    }

    ui->te_record_page->setText(QString::number(rtu_para_para.para_current_page));

}

void rtu_para::on_pb_next_clicked()
{
    rtu_para_para.para_current_page++;
    if(rtu_para_para.para_total_page == rtu_para_para.para_current_page)
    {
        rtu_para_para.para_current_page = rtu_para_para.para_total_page;
        ui->pb_next->setEnabled(false);
        ui->pb_previous->setEnabled(true);
    }
    else {
        ui->pb_previous->setEnabled(true);
    }
    ui->te_record_page->setText(QString::number(rtu_para_para.para_current_page));


    //打开或创建文件
    QFile file("rtu_para.xml"); //相对路径、绝对路径、资源路径都行
    if(!file.open(QFile::ReadOnly))
        return;

    QDomDocument doc;
    if(!doc.setContent(&file))
    {
        file.close();
        return;
    }
    file.close();

    QDomElement root=doc.documentElement(); //返回根节点
    qDebug()<<root.nodeName();
    QDomNode node=root.firstChild(); //获得第一个子节点
    while(!node.isNull())  //如果节点不空
    {
        if(node.isElement()) //如果节点是元素
        {
            QDomElement e=node.toElement(); //转换为元素，注意元素和节点是两个数据结构，其实差不多
            qDebug()<<e.tagName()<<" "<<e.attribute("id")<<" "<<e.attribute("time"); //打印键值对，tagName和nodeName是一个东西
            QDomNodeList list=e.childNodes();
            for(int i=0;i<list.count();i++) //遍历子元素，count和size都可以用,可用于标签数计数
            {
                QDomNode n=list.at(i);
                if(node.isElement())
                    qDebug()<<n.nodeName()<<":"<<n.toElement().text();
            }
        }
        node=node.nextSibling(); //下一个兄弟节点,nextSiblingElement()是下一个兄弟元素，都差不多
    }
}
