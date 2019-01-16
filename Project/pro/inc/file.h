#ifndef FILE_H
#define FILE_H

#include <QObject>
#include <QDebug>
#include <QString>
#include <QFile>
#include <QMap>
#include <QStringList>
#include <QTextStream>

class file
{
private:
    QMap<QString,QString> m_map;

public:
    void file_create(QString filename);
    bool file_write(QString filename, QString writedata);
    QStringList file_read(QString filename);
};

#endif // FILE_H
