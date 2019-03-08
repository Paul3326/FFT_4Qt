#include "inc/xml_record.h"
#include "inc/global.h"

void xml_write(QString FileName,int8_t type)
{
    //打开或创建文件
    QFile xmlfile(FileName);
    if(!xmlfile.open(QFile::WriteOnly|QFile::Truncate)) //Truncate表示清空原来的内容
    {
        QMessageBox::warning(nullptr, "warning", "创建xml文件失败!");
        return;
    }

    QDomDocument doc;
    //写入xml头部
    QDomProcessingInstruction instruction; //添加处理命令
    instruction=doc.createProcessingInstruction("xml","version=\"1.0\" encoding=\"UTF-8\"");
    doc.appendChild(instruction);

    if(RTU_PARA == type)
    {
        //添加根节点
        QDomElement root=doc.createElement("RTU_DATA");
        doc.appendChild(root);
        //添加第一个子节点及其子元素
        QDomElement book=doc.createElement(FileName);
        book.setAttribute("id",rtu_para_para.para_current_page);
        QDomAttr time=doc.createAttribute("time");
        time.setValue(rtu_para_para.localTime);
        book.setAttributeNode(time);
        QDomElement title=doc.createElement("title"); //创建子元素
        QDomText text; //设置括号标签中间的值
        text=doc.createTextNode("C++ primer");
        book.appendChild(title);
        title.appendChild(text);
        QDomElement author=doc.createElement("author"); //创建子元素
        text=doc.createTextNode("Stanley Lippman");
        author.appendChild(text);
        book.appendChild(author);
        root.appendChild(book);

        //添加第二个子节点及其子元素，部分变量只需重新赋值
        book=doc.createElement("book");
        book.setAttribute("id",2);
        time=doc.createAttribute("time");
        time.setValue("2007/5/25");
        book.setAttributeNode(time);
        title=doc.createElement("title");
        text=doc.createTextNode("Thinking in Java");
        book.appendChild(title);
        title.appendChild(text);
        author=doc.createElement("author");
        text=doc.createTextNode("Bruce Eckel");
        author.appendChild(text);
        book.appendChild(author);
        root.appendChild(book);

        //输出到文件
        QTextStream out_stream(&xmlfile);
        doc.save(out_stream,4); //缩进4格
        xmlfile.close();

        qDebug()<<"Save file OK!!!";
    }
}

