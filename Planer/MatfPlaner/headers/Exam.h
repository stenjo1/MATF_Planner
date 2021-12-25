#ifndef EXAM_HPP
#define EXAM_HPP

#include "headers/Subject.h"
#include <QDate>
#include <QTime>
#include <QString>

class Exam
{
public:
    Exam(Subject subject, QDate date, QTime time, QString url, int importanceRate, int order);
    Exam(QJsonObject);
    bool writeExamInFile(); // todo: napisati funkciju koja u fajl gde cuvamo ispite dodaje ovaj podatak
   // void setPassed(); // postavlja true ako student polozi ispit (nepotrebno)
    bool checkIfDatePassed(QDate date); //proverava da li je ispit pre datuma proslednjenog kao argument
    bool checkIfDatePassed(); //proverava da li je datum prosao od trenutnog vremena
    QJsonObject* toJson();

    QString getUrl();
    QDate getDate();
    int getImportanceRate();
    Subject& getSubject();
    int getOrder();

private:
    QDate _date;
    QTime _time;
    QString _url;
    Subject _subject;
    int _order;
    int _importanceRate; // broj koji korisnik unosi od 1 do 5
};


#endif // EXAM_HPP
