#ifndef UTILS_H
#define UTILS_H
#include "headers/InsertExams.h"
#include <QDir>
#include <QFile>
#include <QJsonArray>
#include <QJsonDocument>
#include <QMainWindow>
#include <QMessageBox>
#include <QTextStream>

class Utils : public QObject
{
    Q_OBJECT
  public:
    Utils();

    static QVector<Exam *> readJsonExamsFromFile(const QString &filename);
    static QVector<Subject *> readJsonSubjectsFromFile(QString fileName);
    static QByteArray readJsonFromFile(QString &fileName);
    static void writeJsonExamsToFile(QString filePath, const QVector<Exam *> &exams);
};

#endif // UTILS_H
