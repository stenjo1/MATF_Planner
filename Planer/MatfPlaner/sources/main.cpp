#include "headers/Calendar.h"
#include "headers/Student.h"
#include "headers/Utils.h"
#include <QApplication>
#include <QVector>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString examsPath = "/output/schedule.json";
    QString stylePath = "/styles/style3.qss";

    QString styleSheetData = QString(Utils::readJsonFromFile(stylePath));
    a.setStyleSheet(styleSheetData);

    QVector<Exam *> exams = Utils::readJsonExamsFromFile(examsPath);
    Student *student      = new Student();
    student->readFromJson();
    if (student->getName().compare("") == 0) {
        Calendar w = Calendar(student, exams);
        w.show();
        w.getLoginPage()->show();
        return a.exec();
    } else {
        Calendar w = Calendar(student, exams);
        w.show();
        w.checkIfExamIsClose();
        return a.exec();
    }

    // delete student;
}
