#ifndef STUDENT_HPP
#define STUDENT_HPP
#include<QString>
#include<vector>
#include "Subject.h"
#include "Exam.h"
#include<QJsonArray>
#include<QDir>
#include<QFile>
#include<QJsonDocument>
#include<QVector>


enum Module {None, Informatika, Matematika};

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
    void readFromJson();
    void writeToJson();
    void clearStudentFile();
    // isparsira do qjsonarrayja
    void setName(QString name);
    void setEmail(QString email);
    void setYearOfStudy(int year);
    void setModule(Module m);
    void emptyAllSubjects();

    QString getName() const;
    QString getEmail() const;
    QString getModuleString();
    int getYearOfStudy() const;
    QVector<Subject*> getAllSubjects() const;

    void addSubject(Subject* subj);
    void removeSubject(Subject* subj);

private:
    QString _name;
    int _yearOfStudy;
    QString _email;
    QVector<Subject*> _allSubjects;
    QVector<Exam*> _exams;
    Module _module;
};

#endif // STUDENT_HPP
