#ifndef UTILS_H
#define UTILS_H
#include<QDate>
#include "headers/Exam.hpp"
class Utils
{
public:
    Utils();
    static QDate fromQStringtoQDate(QString string);
    static QVector<Exam*> readJsonObjectsFromFile(const QString &filename);
    static void clearFile(const QString &filename);
};

#endif // UTILS_H
