#ifndef XML_RECORD_H
#define XML_RECORD_H

#include <QFile>
#include <QDir>
#include <QLabel>
#include <QMessageBox>
#include <QDomDocument>
#include <QTextStream>
#include <QDebug>

void xml_write(QString FileName);
void xml_add(QString FileName);
void xml_show(QString FileName,uint8_t pagenumber);
void xml_delete(QString FileName,uint8_t pagenumber);
#endif // XML_RECORD_H
