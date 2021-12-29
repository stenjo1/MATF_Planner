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


enum Module {
    None,
    Informatika,
    Matematika
};

class Student
{
public:

    Student(QString name,QVector<Subject*> allSubjects,QVector<Exam*> exams);
    Student();
    ~Student();

    void jsonToSubjectList(QJsonArray arr);
    QJsonArray parseJsonToArray(QString pathname);
    void readFromJson();
    void writeToJson();
    void clearStudentFile();

    QString getName() const;
    QString getEmail() const;
    int getYearOfStudy() const;
    QString getModuleString();
    Module moduleFromString(QString string);

    void setName(QString name);
    void setEmail(QString email);
    void setYearOfStudy(int year);
    void setModule(Module m);

    QVector<Subject*> getAllSubjects() const;
    void emptyAllSubjects();

    void addSubject(Subject* subj);
    void removeSubject(Subject* subj);

private:
    QString _name;
    int _yearOfStudy;
    QString _email;
    QVector<Subject*> _allSubjects;
    Module _module;
};

#endif // STUDENT_HPP
