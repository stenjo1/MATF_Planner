#ifndef STUDENT_HPP
#define STUDENT_HPP
#include<QString>
#include<vector>
#include "Subject.h"
#include "Exam.h"
#include<QJsonArray>
#include<QFile>
#include<QJsonDocument>
#include<QVector>
#include<QList>

class Student
{
public:
    Student(QString name, QString email);
    Student(QString name,QVector<Subject*> allSubjects,QVector<Exam*> exams);
    Student();
    ~Student();
    void addExam(Exam *exam); //dodaje ispit na studenta
    void jsonToSubjectList(QJsonArray arr); //izvlaci iz json fajla
    QJsonArray parseJsonToArray(QString pathname); //damo ime json fajla koji hocemo da

    void writeToJson();
    // isparsira do qjsonarrayja
    void setName(QString name);
    void setEmail(QString email);
    void setYearOfStudy(int year);

    QString& getName();
    QString& getEmail();
    int getYearOfStudy();
    QVector<Subject*>* getAllSubjects();

    void addSubject(Subject* subj);


private:
    QString _name;
    int _yearOfStudy;
    QString _email;
    QVector<Subject*> _allSubjects;
    QVector<Exam*> _exams;
};

#endif // STUDENT_HPP
