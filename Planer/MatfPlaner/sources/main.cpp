#include <QApplication>
#include <QList>
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>
#include <QVector>
#include "headers/Calendar.h"
#include "headers/Student.h"
#include "headers/Utils.h"

int main(int argc, char *argv[])
{
    QDir targetDir("../MatfPlaner/resources");
    QString path = targetDir.absolutePath() + "/exams.json";
    const QString JSON_FILE = path;
    QApplication a(argc, argv);
    // to-do: isprazniti listu
    QVector<Exam*> exams = Utils::readJsonExamsFromFile(JSON_FILE);
//    if(exams.isEmpty()){
//        LoginPage lp;
//        lp.show();
//        return a.exec();
//    } else {
        Calendar w = Calendar(exams);
        w.show();
        return a.exec();
  //  }
}
