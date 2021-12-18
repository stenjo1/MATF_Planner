#include "headers/Utils.h"
#include "headers/Exam.h"


Exam::Exam(Subject subject, QDate date, QTime time, QString url, int importanceRate, bool passed, unsigned numbersOfTry) {
    _date = date;
    _time = time;
    _url = url;
    _subject = subject;
    _numbersOfTry = numbersOfTry;
    _importanceRate = importanceRate;
}

Exam::Exam(QJsonObject obj){
       QString _dateString = obj.value("_date").toString();
        _date = Utils::fromQStringtoQDate(_dateString);
        _url = obj.value("_url").toString();
        QJsonObject subject =obj.value("_subject").toObject();
        _subject = Subject(subject);
}

void Exam::setPassed(){_passed = true;}
bool Exam::checkIfDatePassed(){
    if (_date < _date.currentDate())
        return true;

    return false;
}

bool Exam::checkIfDatePassed(QDate date){
    if (_date < date)
        return true;

    return false;
}

QString Exam::getUrl(){
    return _url;
}

QDate Exam::getDate() {
    return _date;
}

int Exam::getImportanceRate() {
    return _importanceRate;
}
