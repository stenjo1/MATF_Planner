#ifndef UTILS_H
#define UTILS_H
#include "headers/InsertExams.h"
#include<QFile>
#include<QJsonDocument>
#include<QDir>
#include <QJsonArray>
#include<QTextStream>
#include <QMessageBox>
#include <QMainWindow>

class Utils : public QObject
{
    Q_OBJECT
public:
    Utils();
    static QDate fromQStringtoQDate(QString string);
    static QVector<Exam*> readJsonExamsFromFile(const QString &filename);
    static void clearExamFile(const QString &filename);
    static QVector<Subject*> readJsonSubjectsFromFile(QString fileName);
};

#endif // UTILS_H
