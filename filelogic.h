#ifndef FILELOGIC_H
#define FILELOGIC_H

#include <QFile>
#include <QList>
#include <QTextStream>

struct SaveFileRow
{
    QString word;
    int games;
    int wins;
    int streak;
};

class FileLogic
{
public:
    QList<QString> readTextFile(const QString &filePath);
    QList<SaveFileRow> readCsvFile(const QString &filePath);
    void writeCsvFile(const QString &filePath, SaveFileRow row);
    void deleteCsvFile(const QString &filePath);
};

#endif // FILELOGIC_H
