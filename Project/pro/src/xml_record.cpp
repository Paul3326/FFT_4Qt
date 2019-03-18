#include "inc/xml_record.h"
#include "inc/global.h"

//写xml
void xml_write(QString FileName)
{
    QFile xmlfile(FileName);
    if(!xmlfile.open(QFile::WriteOnly|QFile::Truncate))
        return;

    if(QString::compare(FileName,"rtu_para.xml",Qt::CaseSensitive) == 0)
    {
        QDomDocument doc;
        QDomProcessingInstruction instruction;
        instruction=doc.createProcessingInstruction("xml","version=\"1.0\" encoding=\"UTF-8\"");
        doc.appendChild(instruction);

        //添加根节点
        QDomElement root=doc.createElement(FileName);
        doc.appendChild(root);
        //添加子节点及其子元素
        QDomElement para=doc.createElement("RTU_DATA");

        para.setAttribute("id",rtu_para_para.para_current_page);
        QDomAttr time=doc.createAttribute("time");
        time.setValue(rtu_para_para.localTime);
        para.setAttributeNode(time);

        QDomElement station_name=doc.createElement("变电站名称"); //创建子元素
        QDomText text;
        text=doc.createTextNode("CLOU");
        para.appendChild(station_name);
        station_name.appendChild(text);

        QDomElement location=doc.createElement("装置安装位置"); //创建子元素
        text=doc.createTextNode("深南中路");
        location.appendChild(text);
        para.appendChild(location);
        root.appendChild(para);

        QDomElement product_num=doc.createElement("出厂编号"); //创建子元素
        text=doc.createTextNode("123456");
        product_num.appendChild(text);
        para.appendChild(product_num);
        root.appendChild(para);

        QDomElement product_owner=doc.createElement("制造厂家"); //创建子元素
        text=doc.createTextNode("上海一家");
        product_owner.appendChild(text);
        para.appendChild(product_owner);
        root.appendChild(para);

        QDomElement Line_name=doc.createElement("线路名称"); //创建子元素
        text=doc.createTextNode("高压线");
        Line_name.appendChild(text);
        para.appendChild(Line_name);
        root.appendChild(para);

        QDomElement Grade=doc.createElement("精度等级"); //创建子元素
        text=doc.createTextNode("0.05");
        Grade.appendChild(text);
        para.appendChild(Grade);
        root.appendChild(para);

        QDomElement RTU_type=doc.createElement("RTU型号"); //创建子元素
        text=doc.createTextNode("123");
        RTU_type.appendChild(text);
        para.appendChild(RTU_type);
        root.appendChild(para);

        QDomElement PT_ratio=doc.createElement("电压变比"); //创建子元素
        text=doc.createTextNode("1:1");
        PT_ratio.appendChild(text);
        para.appendChild(PT_ratio);
        root.appendChild(para);

        QDomElement CT_ratio=doc.createElement("电流变比"); //创建子元素
        text=doc.createTextNode("1:1");
        CT_ratio.appendChild(text);
        para.appendChild(CT_ratio);
        root.appendChild(para);

        QDomElement Check_num=doc.createElement("检验证号"); //创建子元素
        text=doc.createTextNode("1234567890");
        Check_num.appendChild(text);
        para.appendChild(Check_num);
        root.appendChild(para);

        QDomElement Com_protocl=doc.createElement("通讯协议"); //创建子元素
        text=doc.createTextNode("标准协议1");
        Com_protocl.appendChild(text);
        para.appendChild(Com_protocl);
        root.appendChild(para);

        QDomElement PT_V=doc.createElement("PT二次电压"); //创建子元素
        text=doc.createTextNode("57.7");
        PT_V.appendChild(text);
        para.appendChild(PT_V);
        root.appendChild(para);

        QDomElement CT_A=doc.createElement("CT二次电流"); //创建子元素
        text=doc.createTextNode("1.0");
        CT_A.appendChild(text);
        para.appendChild(CT_A);
        root.appendChild(para);

        QDomElement Line_type=doc.createElement("接线方式"); //创建子元素
        text=doc.createTextNode("三相四线");
        Line_type.appendChild(text);
        para.appendChild(Line_type);
        root.appendChild(para);

        QDomElement Error_Scheme=doc.createElement("误差检定方案"); //创建子元素
        text=doc.createTextNode("误差检定方案1");
        Error_Scheme.appendChild(text);
        para.appendChild(Error_Scheme);
        root.appendChild(para);

        QDomElement Delt_Scheme=doc.createElement("改变量检定方案"); //创建子元素
        text=doc.createTextNode("改变量检定方案1");
        Delt_Scheme.appendChild(text);
        para.appendChild(Delt_Scheme);
        root.appendChild(para);

        QDomElement In_DcV=doc.createElement("直流电压输入"); //创建子元素
        text=doc.createTextNode("25V");
        In_DcV.appendChild(text);
        para.appendChild(In_DcV);
        root.appendChild(para);

        QDomElement In_DcA=doc.createElement("直流电流输入"); //创建子元素
        text=doc.createTextNode("1A");
        In_DcA.appendChild(text);
        para.appendChild(In_DcA);
        root.appendChild(para);

        QDomElement Checker1=doc.createElement("检验员1"); //创建子元素
        text=doc.createTextNode("李丽丽");
        Checker1.appendChild(text);
        para.appendChild(Checker1);
        root.appendChild(para);

        QDomElement Checker2=doc.createElement("检验员2"); //创建子元素
        text=doc.createTextNode("王明明");
        Checker2.appendChild(text);
        para.appendChild(Checker2);
        root.appendChild(para);

        QDomElement Temper=doc.createElement("相对温度"); //创建子元素
        text=doc.createTextNode("25");
        Temper.appendChild(text);
        para.appendChild(Temper);
        root.appendChild(para);

        QDomElement Humidity=doc.createElement("相对湿度"); //创建子元素
        text=doc.createTextNode("35");
        Humidity.appendChild(text);
        para.appendChild(Humidity);
        root.appendChild(para);

        QDomElement Number=doc.createElement("字第号"); //创建子元素
        text=doc.createTextNode("008521");
        Number.appendChild(text);
        para.appendChild(Number);
        root.appendChild(para);

        QTextStream out_stream(&xmlfile);
        doc.save(out_stream,4);
        xmlfile.close();

        qDebug()<<"Save file OK!!!";
    }
}


//增加xml内容
void xml_add(QString FileName)
{
    //打开文件
    QFile xmlfile(FileName); //相对路径、绝对路径、资源路径都可以
    if(!xmlfile.open(QFile::ReadOnly))
        return;

    //增加一个一级子节点以及元素
    QDomDocument doc;
    if(!doc.setContent(&xmlfile))
    {
        xmlfile.close();
        return;
    }
    xmlfile.close();

    if(QString::compare(FileName,"rtu_para.xml",Qt::CaseSensitive) == 0)
    {
        QDomDocument doc;
        QDomProcessingInstruction instruction;
        instruction=doc.createProcessingInstruction("xml","version=\"1.0\" encoding=\"UTF-8\"");
        doc.appendChild(instruction);

        //添加根节点
        QDomElement root=doc.createElement(FileName);
        doc.appendChild(root);
        //添加子节点及其子元素
        QDomElement para=doc.createElement("RTU_DATA");

        para.setAttribute("id",rtu_para_para.para_current_page);
        QDomAttr time=doc.createAttribute("time");
        time.setValue(rtu_para_para.localTime);
        para.setAttributeNode(time);

        QDomElement station_name=doc.createElement("变电站名称"); //创建子元素
        QDomText text;
        text=doc.createTextNode(rtu_para_para.rtu_station_name);
        para.appendChild(station_name);
        station_name.appendChild(text);

        QDomElement location=doc.createElement("装置安装位置"); //创建子元素
        text=doc.createTextNode(rtu_para_para.rtu_location);
        location.appendChild(text);
        para.appendChild(location);
        root.appendChild(para);

        QDomElement product_num=doc.createElement("出厂编号"); //创建子元素
        text=doc.createTextNode(rtu_para_para.rtu_check_number);
        product_num.appendChild(text);
        para.appendChild(product_num);
        root.appendChild(para);

        QDomElement product_owner=doc.createElement("制造厂家"); //创建子元素
        text=doc.createTextNode(rtu_para_para.rtu_manufacturer);
        product_owner.appendChild(text);
        para.appendChild(product_owner);
        root.appendChild(para);

        QDomElement Line_name=doc.createElement("线路名称"); //创建子元素
        text=doc.createTextNode(rtu_para_para.rtu_line_name);
        Line_name.appendChild(text);
        para.appendChild(Line_name);
        root.appendChild(para);

        QDomElement Grade=doc.createElement("精度等级"); //创建子元素
        text=doc.createTextNode(rtu_para_para.rtu_grade);
        Grade.appendChild(text);
        para.appendChild(Grade);
        root.appendChild(para);

        QDomElement RTU_type=doc.createElement("RTU型号"); //创建子元素
        text=doc.createTextNode(rtu_para_para.rtu_type);
        RTU_type.appendChild(text);
        para.appendChild(RTU_type);
        root.appendChild(para);

        QDomElement PT_ratio=doc.createElement("电压变比"); //创建子元素
        text=doc.createTextNode(rtu_para_para.rtu_PT_ratio);
        PT_ratio.appendChild(text);
        para.appendChild(PT_ratio);
        root.appendChild(para);

        QDomElement CT_ratio=doc.createElement("电流变比"); //创建子元素
        text=doc.createTextNode(rtu_para_para.rtu_CT_ratio);
        CT_ratio.appendChild(text);
        para.appendChild(CT_ratio);
        root.appendChild(para);

        QDomElement Check_num=doc.createElement("检验证号"); //创建子元素
        text=doc.createTextNode(rtu_para_para.rtu_check_number);
        Check_num.appendChild(text);
        para.appendChild(Check_num);
        root.appendChild(para);

        QDomElement Com_protocl=doc.createElement("通讯协议"); //创建子元素
        text=doc.createTextNode(rtu_para_para.rtu_com_protocol);
        Com_protocl.appendChild(text);
        para.appendChild(Com_protocl);
        root.appendChild(para);

        QDomElement PT_V=doc.createElement("PT二次电压"); //创建子元素
        text=doc.createTextNode(rtu_para_para.rtu_PT_voltage);
        PT_V.appendChild(text);
        para.appendChild(PT_V);
        root.appendChild(para);

        QDomElement CT_A=doc.createElement("CT二次电流"); //创建子元素
        text=doc.createTextNode(rtu_para_para.rtu_CT_current);
        CT_A.appendChild(text);
        para.appendChild(CT_A);
        root.appendChild(para);

        QDomElement Line_type=doc.createElement("接线方式"); //创建子元素
        text=doc.createTextNode(rtu_para_para.rtu_connection_mode);
        Line_type.appendChild(text);
        para.appendChild(Line_type);
        root.appendChild(para);

        QDomElement Error_Scheme=doc.createElement("误差检定方案"); //创建子元素
        text=doc.createTextNode(rtu_para_para.rtu_error_check_scheme);
        Error_Scheme.appendChild(text);
        para.appendChild(Error_Scheme);
        root.appendChild(para);

        QDomElement Delt_Scheme=doc.createElement("改变量检定方案"); //创建子元素
        text=doc.createTextNode(rtu_para_para.rtu_delt_check_scheme);
        Delt_Scheme.appendChild(text);
        para.appendChild(Delt_Scheme);
        root.appendChild(para);

        QDomElement In_DcV=doc.createElement("直流电压输入"); //创建子元素
        text=doc.createTextNode(rtu_para_para.rtu_dc_voltage_in);
        In_DcV.appendChild(text);
        para.appendChild(In_DcV);
        root.appendChild(para);

        QDomElement In_DcA=doc.createElement("直流电流输入"); //创建子元素
        text=doc.createTextNode(rtu_para_para.rtu_dc_current_in);
        In_DcA.appendChild(text);
        para.appendChild(In_DcA);
        root.appendChild(para);

        QDomElement Checker1=doc.createElement("检验员1"); //创建子元素
        text=doc.createTextNode(rtu_para_para.rtu_checkerone);
        Checker1.appendChild(text);
        para.appendChild(Checker1);
        root.appendChild(para);

        QDomElement Checker2=doc.createElement("检验员2"); //创建子元素
        text=doc.createTextNode(rtu_para_para.rtu_checkertwo);
        Checker2.appendChild(text);
        para.appendChild(Checker2);
        root.appendChild(para);

        QDomElement Temper=doc.createElement("相对温度"); //创建子元素
        text=doc.createTextNode(rtu_para_para.rtu_temperature);
        Temper.appendChild(text);
        para.appendChild(Temper);
        root.appendChild(para);

        QDomElement Humidity=doc.createElement("相对湿度"); //创建子元素
        text=doc.createTextNode(rtu_para_para.rtu_humidity);
        Humidity.appendChild(text);
        para.appendChild(Humidity);
        root.appendChild(para);

        QDomElement Number=doc.createElement("字第号"); //创建子元素
        text=doc.createTextNode(rtu_para_para.rtu_uid);
        Number.appendChild(text);
        para.appendChild(Number);
        root.appendChild(para);
    }
    if(!xmlfile.open(QFile::WriteOnly|QFile::Truncate)) //先读进来，再重写，如果不用truncate就是在后面追加内容，就无效了
        return;
    //输出到文件
    QTextStream out_stream(&xmlfile);
    doc.save(out_stream,4); //缩进4格
    xmlfile.close();
}

void xml_show(QString FileName,uint8_t pagenumber)
{
    //打开或创建文件
    QFile xmlfile(FileName);
    if(!xmlfile.open(QFile::ReadOnly))
        return;

    QDomDocument doc;
    if(!doc.setContent(&xmlfile))
    {
        xmlfile.close();
        return;
    }
    xmlfile.close();

    if(pagenumber > rtu_para_para.para_total_page)
        return;

    QDomElement root=doc.documentElement(); //返回根节点
    qDebug()<<root.nodeName();
    QDomNode node=root.firstChild(); //获得第一个子节点
    while(!node.isNull())  //如果节点不空
    {
        if(node.isElement()) //如果节点是元素
        {
            QDomElement e=node.toElement();
            qDebug()<<e.tagName()<<" "<<e.attribute("id")<<" "<<e.attribute("time");
            QDomNodeList list=e.childNodes();
            for(int i=0;i<list.count();i++) //遍历子元素
            {
                QDomNode n=list.at(i);
                if(node.isElement())
                    qDebug()<<n.nodeName()<<":"<<n.toElement().text();
            }
        }
        node=node.nextSibling(); //下一个兄弟节点
    }

}

//删减xml内容
void xml_delete(QString FileName,uint8_t pagenumber)
{
    QFile xmlfile(FileName);
    if(!xmlfile.open(QFile::ReadOnly))
        return;
    QDomDocument doc;
    if(!doc.setContent(&xmlfile))
    {
        xmlfile.close();
        return;
    }
    xmlfile.close();

    QDomElement root=doc.documentElement();
    QDomNodeList list=doc.elementsByTagName(QString::number(pagenumber)); //定位xml
    for(int i=0;i<list.count();i++)
    {
        QDomElement e=list.at(i).toElement();
        if(e.attribute(QString::number(rtu_para_para.para_current_page))    \
                == pagenumber)
            root.removeChild(list.at(i));
    }

    if(!xmlfile.open(QFile::WriteOnly|QFile::Truncate))
        return;
    QTextStream out_stream(&xmlfile);
    doc.save(out_stream,4);
    xmlfile.close();
}
