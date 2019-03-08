#ifndef XML_RECORD_H
#define XML_RECORD_H

#include <QFile>
#include <QDir>
#include <QLabel>
#include <QMessageBox>
#include <QDomDocument>
#include <QTextStream>
#include <QDebug>

void xml_read(QString FileName);
void xml_write(QString FileName,int8_t type);

#endif // XML_RECORD_H
