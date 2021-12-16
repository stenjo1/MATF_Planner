#ifndef EXAM_HPP
#define EXAM_HPP

#include "headers/Subject.hpp"
#include <QDate>
#include <QString>

class Exam
{
public:
    Exam(QDate date,QString url,Subject subject, int importantRate, bool passed=false, unsigned numbersOfTry=0);
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
    QString _url;
    Subject _subject;
    bool _passed;
    unsigned _numbersOfTry; //broj izlazaka na ovaj ispit
    int _importanceRate; // broj koji korisnik unosi od 5 do 10 TODO
};


#endif // EXAM_HPP
