#ifndef EXAM_HPP
#define EXAM_HPP

#include "headers/Subject.h"
#include <QDate>
#include <QTime>
#include <QString>

class Exam
{
public:
    Exam(Subject subject, QDate date, QDate dateOral, QTime time, QTime timeOral, QString url, int importanceRate, int order);
    Exam(QJsonObject);
    bool writeExamInFile(); // todo: napisati funkciju koja u fajl gde cuvamo ispite dodaje ovaj podatak
   // void setPassed(); // postavlja true ako student polozi ispit (nepotrebno)
    bool checkIfDatePassed(QDate date); //proverava da li je ispit pre datuma proslednjenog kao argument
    bool checkIfDatePassed(); //proverava da li je datum prosao od trenutnog vremena
    QJsonObject* toJson();

    QString getUrl();
    QDate getDate();
    QDate getDateVerbal();
    int getImportanceRate();
    Subject& getSubject();
    int getOrder();
    QTime getTime();
    QTime getTimeVerbal();

private:
    QDate _date;
    QDate _dateOral;
    QTime _time;
    QTime _timeOral;
    QString _url;
    Subject _subject;
    int _order;
    int _importanceRate; // broj koji korisnik unosi od 1 do 5
};


#endif // EXAM_HPP
