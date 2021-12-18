#ifndef UTILS_H
#define UTILS_H
#include "headers/Exam.h"
#include "headers/InsertExams.h"
#include<QFile>
#include<QJsonDocument>
#include<QDir>
#include <QJsonArray>
#include<QTextStream>
#include <QMessageBox>

class Utils : public QObject
{
    Q_OBJECT
public:
    Utils();
    static QDate fromQStringtoQDate(QString string);
    static QVector<Exam*> readJsonObjectsFromFile(const QString &filename);
    static void clearFile(const QString &filename);
};

#endif // UTILS_H
