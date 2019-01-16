#include "inc/file.h"

void file::file_create(QString filename)
{
    QFile file(filename);
    if (file.exists())
    {
        return;
    }
    file.open(QIODevice::ReadWrite |QIODevice::Text);
    file.close();
}

bool file::file_write(QString filename,QString writedata)
{
    QFile file(filename);
    if (!file.exists())
    {
        qDebug()<<"data file not exist!!!\n";
        return true;
    }
    file.open(QIODevice::WriteOnly|QIODevice::Append);
    QTextStream write_stream(&file);
    write_stream << writedata;
    file.flush();
    file.close();
    return false;
}

QStringList file::file_read(QString filename)
{
    QFile file(filename);
    QStringList readlist;
    readlist.clear();
    if (!file.exists())
    {
        qDebug()<<"data file not exist!!!\n";
    }

    if (file.open(QIODevice::ReadWrite))
    { QTextStream stream(&file);
        while (!stream.atEnd())
        {
            readlist.push_back(stream.readLine());
        }
        file.close();
    }
    return readlist;
}
