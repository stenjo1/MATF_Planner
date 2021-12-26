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
    QApplication a(argc, argv);
    // to-do: isprazniti listu
    QVector<Exam*> exams = Utils::readJsonExamsFromFile(path);
    Student *student = new Student();
    student->readFromJson();
    if(student->getName().compare("")==0){
        LoginPage lp;
        Calendar w = Calendar(student,exams);
        w.show();
        lp.setStudent(student);
        lp.show();
        return a.exec();
    }else{
        Calendar w = Calendar(student,exams);
        w.show();
        return a.exec();
    }
}
