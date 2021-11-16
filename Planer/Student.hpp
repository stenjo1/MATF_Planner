#ifndef STUDENT_HPP
#define STUDENT_HPP
#include<QString>
#include<vector>
#include "Subject.hpp"
#include "Exam.hpp"
#include<QJsonArray>
#include<QFile>
#include<QJsonDocument>
#include<QVector>

class Student
{
public:
    Student(QString name,QString surrname);
    Student(QString name,QString surrname,std::vector<Subject*> allSubjects,std::vector<Exam*> exams);
    Student();
    ~Student();
    void addExam(Exam *exam); //dodaje ispit na studenta
    void jsonToSubjectList(QJsonArray arr); //izvlaci iz json fajla
    void parseJsonToArray(QString pathname); //damo ime json fajla koji hocemo da
                                            // isparsira do qjsonarrayja

private:
    QString _name;
    QString _surrname;
    QString _yearOfStudy;
    QString _email;
    std::vector<Subject*> _allSubjects;
    std::vector<Exam*> _exams;

};

#endif // STUDENT_HPP
