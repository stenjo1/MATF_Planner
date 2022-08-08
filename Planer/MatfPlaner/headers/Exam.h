#ifndef EXAM_HPP
#define EXAM_HPP

#include "headers/Subject.h"
#include <QDate>
#include <QString>
#include <QTime>

class Exam
{
  public:
    Exam(Subject subject, QDate date, QDate dateOral, QTime time, QTime timeOral, QString url, int importanceRate, int order);
    explicit Exam(QJsonObject);
    QJsonObject *toJson();

    QString getUrl();
    QDate getDate();
    QDate getDateOral();
    int getImportanceRate();
    Subject &getSubject();
    int getOrder();
    QTime getTime();
    QTime getTimeOral();
    bool checkIfDatePassed();
    QString toString();

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
