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

    if(0 == rtu_para_para.para_total_page)
    {
        ui->lb_record_page->setText(QString::number(0));
        ui->pb_add->setText("取消");
        ui->pb_save->setEnabled(true);
        ui->pb_next->setEnabled(false);
        ui->pb_previous->setEnabled(false);
        ui->pb_delete->setEnabled(false);
        ui->pb_tel_para->setEnabled(false);
        rtu_para_para.Add_Cancle_Button.count = 0;
    }
}

rtu_para::~rtu_para()
{
    delete ui;
}

void rtu_para::on_pb_add_clicked()
{
    rtu_para_para.para_current_page = rtu_para_para.para_total_page;
    rtu_para_para.Add_Cancle_Button.count++;
    rtu_para_para.Add_Cancle_Button.count %= 2;
    if(rtu_para_para.Add_Cancle_Button.count)
    {
        ui->pb_add->setText("取消");
        ui->pb_save->setEnabled(true);
        ui->pb_next->setEnabled(false);
        ui->pb_previous->setEnabled(false);
        ui->pb_delete->setEnabled(false);
        ui->pb_tel_para->setEnabled(false);
    }
    else
    {
        ui->pb_add->setText("增加");
        ui->pb_save->setEnabled(false);
        ui->pb_next->setEnabled(true);
        ui->pb_previous->setEnabled(true);
        ui->pb_delete->setEnabled(true);
        ui->pb_tel_para->setEnabled(true);
    }
}

void rtu_para::on_pb_save_clicked()
{
    ui->pb_add->setText("增加");
    ui->pb_save->setEnabled(false);
    ui->pb_previous->setEnabled(true);
    ui->pb_delete->setEnabled(true);
    ui->pb_tel_para->setEnabled(true);

    QDateTime local(QDateTime::currentDateTime());
    rtu_para_para.localTime = local.toString("yyyy/MM/dd-hh:mm:ss");
    qDebug()<<rtu_para_para.localTime;

    rtu_para_para.rtu_station_name = ui->cb_rtu_station->currentText();
    if((nullptr == rtu_para_para.rtu_station_name)||(rtu_para_para.rtu_station_name.length() <= 0))
    {
        QMessageBox::warning(nullptr, "提示", "变电站名称输入有误!",QMessageBox::tr("知道了"));
        return;
    }
    rtu_para_para.rtu_location = ui->cb_position->currentText();
    if((nullptr == rtu_para_para.rtu_location)||(rtu_para_para.rtu_location.length() <= 0))
    {
        QMessageBox::warning(nullptr, "提示", "装置安装位置输入有误!",QMessageBox::tr("知道了"));
        return;
    }
    rtu_para_para.rtu_factory_number = ui->cb_rtu_number->currentText();
    if((nullptr == rtu_para_para.rtu_factory_number)||(rtu_para_para.rtu_factory_number.length() <= 0))
    {
        QMessageBox::warning(nullptr, "提示", "出厂编号输入有误!",QMessageBox::tr("知道了"));
        return;
    }
    rtu_para_para.rtu_manufacturer = ui->cb_rtu_producer->currentText();
    if((nullptr == rtu_para_para.rtu_manufacturer)||(rtu_para_para.rtu_manufacturer.length() <= 0))
    {
        QMessageBox::warning(nullptr, "提示", "制造厂家输入有误!",QMessageBox::tr("知道了"));
        return;
    }
    rtu_para_para.rtu_line_name = ui->te_rtu_line->toPlainText();
    if((nullptr == rtu_para_para.rtu_line_name)||(rtu_para_para.rtu_line_name.length() <= 0))
    {
        QMessageBox::warning(nullptr, "提示", "线路名称输入有误!",QMessageBox::tr("知道了"));
        return;
    }

    rtu_para_para.rtu_grade = ui->cb_rtu_grade->currentText();
    if((nullptr == rtu_para_para.rtu_grade)||(rtu_para_para.rtu_grade.length() <= 0))
    {
        QMessageBox::warning(nullptr, "提示", "等级输入有误!",QMessageBox::tr("知道了"));
        return;
    }
    rtu_para_para.rtu_type = ui->cb_rtu_type->currentText();
    if((nullptr == rtu_para_para.rtu_type)||(rtu_para_para.rtu_type.length() <= 0))
    {
        QMessageBox::warning(nullptr, "提示", "RTU型号输入有误!",QMessageBox::tr("知道了"));
        return;
    }
    rtu_para_para.rtu_PT_ratio = ui->te_PT_Ratio->toPlainText();
    if((nullptr == rtu_para_para.rtu_PT_ratio)||(rtu_para_para.rtu_PT_ratio.length() <= 0))
    {
        QMessageBox::warning(nullptr, "提示", "PT变比输入有误!",QMessageBox::tr("知道了"));
        return;
    }
    rtu_para_para.rtu_CT_ratio = ui->te_CT_Ratio->toPlainText();
    if((nullptr == rtu_para_para.rtu_CT_ratio)||(rtu_para_para.rtu_CT_ratio.length() <= 0))
    {
        QMessageBox::warning(nullptr, "提示", "CT变比输入有误!",QMessageBox::tr("知道了"));
        return;
    }
    rtu_para_para.rtu_check_number = ui->te_check_number->toPlainText();
    if((nullptr == rtu_para_para.rtu_check_number)||(rtu_para_para.rtu_check_number.length() <= 0))
    {
        QMessageBox::warning(nullptr, "提示", "检验证号输入有误!",QMessageBox::tr("知道了"));
        return;
    }
    rtu_para_para.rtu_com_protocol = ui->cb_rtu_protocl->currentText();
    if((nullptr == rtu_para_para.rtu_com_protocol)||(rtu_para_para.rtu_com_protocol.length() <= 0))
    {
        QMessageBox::warning(nullptr, "提示", "通讯协议输入有误!",QMessageBox::tr("知道了"));
        return;
    }
    rtu_para_para.rtu_PT_voltage = ui->cb_twice_v->currentText();
    if((nullptr == rtu_para_para.rtu_PT_voltage)||(rtu_para_para.rtu_PT_voltage.length() <= 0))
    {
        QMessageBox::warning(nullptr, "提示", "PT二次电压输入有误!",QMessageBox::tr("知道了"));
        return;
    }
    rtu_para_para.rtu_CT_current = ui->cb_twice_a->currentText();
    if((nullptr == rtu_para_para.rtu_CT_current)||(rtu_para_para.rtu_CT_current.length() <= 0))
    {
        QMessageBox::warning(nullptr, "提示", "CT二次电流输入有误!",QMessageBox::tr("知道了"));
        return;
    }
    rtu_para_para.rtu_connection_mode = ui->cb_rtu_lineway->currentText();
    if((nullptr == rtu_para_para.rtu_connection_mode)||(rtu_para_para.rtu_connection_mode.length() <= 0))
    {
        QMessageBox::warning(nullptr, "提示", "接线方式输入有误!",QMessageBox::tr("知道了"));
        return;
    }
    rtu_para_para.rtu_error_check_scheme = ui->cb_error_check->currentText();
    if((nullptr == rtu_para_para.rtu_error_check_scheme)||(rtu_para_para.rtu_error_check_scheme.length() <= 0))
    {
        QMessageBox::warning(nullptr, "提示", "误差检定方案输入有误!",QMessageBox::tr("知道了"));
        return;
    }
    rtu_para_para.rtu_delt_check_scheme = ui->cb_variable_check->currentText();
    if((nullptr == rtu_para_para.rtu_delt_check_scheme)||(rtu_para_para.rtu_delt_check_scheme.length() <= 0))
    {
        QMessageBox::warning(nullptr, "提示", "改变量检定方案输入有误!",QMessageBox::tr("知道了"));
        return;
    }
    rtu_para_para.rtu_dc_voltage_in = ui->cb_dc_V->currentText();
    if((nullptr == rtu_para_para.rtu_dc_voltage_in)||(rtu_para_para.rtu_dc_voltage_in.length() <= 0))
    {
        QMessageBox::warning(nullptr, "提示", "直流电压输入输入有误!",QMessageBox::tr("知道了"));
        return;
    }
    rtu_para_para.rtu_dc_current_in = ui->cb_dc_A->currentText();
    if((nullptr == rtu_para_para.rtu_grade)||(rtu_para_para.rtu_grade.length() <= 0))
    {
        QMessageBox::warning(nullptr, "提示", "直流电流输入输入有误!",QMessageBox::tr("知道了"));
        return;
    }
    rtu_para_para.rtu_checkerone = ui->cb_checker1->currentText();
    if((nullptr == rtu_para_para.rtu_checkerone)||(rtu_para_para.rtu_checkerone.length() <= 0))
    {
        QMessageBox::warning(nullptr, "提示", "检定员1输入有误!",QMessageBox::tr("知道了"));
        return;
    }
    rtu_para_para.rtu_checkertwo = ui->cb_checker2->currentText();
    if((nullptr == rtu_para_para.rtu_checkertwo)||(rtu_para_para.rtu_checkertwo.length() <= 0))
    {
        QMessageBox::warning(nullptr, "提示", "检定员2输入有误!",QMessageBox::tr("知道了"));
        return;
    }
    rtu_para_para.rtu_temperature = ui->cb_temper->currentText();
    if((nullptr == rtu_para_para.rtu_temperature)||(rtu_para_para.rtu_temperature.length() <= 0))
    {
        QMessageBox::warning(nullptr, "提示", "环境温度输入有误!",QMessageBox::tr("知道了"));
        return;
    }
    rtu_para_para.rtu_humidity =ui->cb_humdity->currentText();
    if((nullptr == rtu_para_para.rtu_humidity)||(rtu_para_para.rtu_humidity.length() <= 0))
    {
        QMessageBox::warning(nullptr, "提示", "相对温度输入有误!",QMessageBox::tr("知道了"));
        return;
    }
    rtu_para_para.rtu_uid = ui->te_uid_number->toPlainText();
    if((nullptr == rtu_para_para.rtu_uid)||(rtu_para_para.rtu_uid.length() <= 0))
    {
        QMessageBox::warning(nullptr, "提示", "字第号输入有误!",QMessageBox::tr("知道了"));
        return;
    }

    xml_write("rtu_para.xml");

    rtu_para_para.para_total_page++;
    rtu_para_para.para_current_page++;
    rtu_para_para.Add_Cancle_Button.count++;
    ui->lb_record_page->setText(QString::number(rtu_para_para.para_total_page));
}

void rtu_para::on_pb_previous_clicked()
{
    rtu_para_para.para_current_page--;
    if(rtu_para_para.para_current_page < 1)
    {
        rtu_para_para.para_current_page = 1;
    }

    if(rtu_para_para.para_current_page == 1)
    {
        rtu_para_para.para_current_page = 1;
        ui->pb_previous->setEnabled(false);
        ui->pb_next->setEnabled(true);
    }
    else
    {
        ui->pb_next->setEnabled(true);
    }

    ui->lb_record_page->setText(QString::number(rtu_para_para.para_current_page));
    xml_show("rtu_para.xml");
}

void rtu_para::on_pb_next_clicked()
{
    rtu_para_para.para_current_page++;
    if(rtu_para_para.para_current_page > rtu_para_para.para_total_page)
    {
        rtu_para_para.para_current_page = rtu_para_para.para_total_page;
    }

    if(rtu_para_para.para_total_page == rtu_para_para.para_current_page)
    {
        rtu_para_para.para_current_page = rtu_para_para.para_total_page;
        ui->pb_next->setEnabled(false);
        ui->pb_previous->setEnabled(true);
    }
    else {
        ui->pb_previous->setEnabled(true);
    }
    ui->lb_record_page->setText(QString::number(rtu_para_para.para_current_page));
    xml_show("rtu_para.xml");
}
