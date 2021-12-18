#ifndef EXAM_HPP
#define EXAM_HPP

#include "headers/Subject.h"
#include <QDate>
#include <QTime>
#include <QString>

class Exam
{
public:
    Exam(Subject subject, QDate date, QTime time, QString url, int importanceRate, bool passed=false, unsigned numbersOfTry=0);
    Exam(QJsonObject);
    bool writeExamInFile(); // todo: napisati funkciju koja u fajl gde cuvamo ispite dodaje ovaj podatak
    void setPassed(); // postavlja true ako student polozi ispit
    bool checkIfDatePassed(QDate date); //proverava da li je ispit pre datuma proslednjenog kao argument
    bool checkIfDatePassed(); //proverava da li je datum prosao od trenutnog vremena
    void writeToFile(QString pathname); // pise sebe u json fajl koji je zadat kao argument

    QString getUrl();
    QDate getDate();
    int getImportanceRate();

private:
    QDate _date;
    QTime _time;
    QString _url;
    Subject _subject;
    bool _passed;
    unsigned _numbersOfTry; //broj izlazaka na ovaj ispit (sta je ovo?)
    int _importanceRate; // broj koji korisnik unosi od 1 do 5
};


#endif // EXAM_HPP
