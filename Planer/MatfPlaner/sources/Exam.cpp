#include "headers/Utils.h"
#include "headers/Exam.h"


Exam::Exam(Subject subject, QDate date, QDate dateOral, QTime time, QTime timeOral, QString url, int importanceRate, int order) {
    _date = date;
    _dateOral = dateOral;
    _time = time;
    _timeOral = timeOral;
    _url = url;
    _subject = subject;
    _order = order;
    _importanceRate = importanceRate;
}

Exam::Exam(QJsonObject obj){

        QString dateString = obj.value("_date").toString();
        _date = QDate::fromString(dateString, Qt::TextDate);
        QString timeString = obj.value("_time").toString();
        _time = QTime::fromString(timeString);
        dateString = obj.value("_dateOral").toString();
        _dateOral = QDate::fromString(dateString, Qt::TextDate);
        timeString = obj.value("_timeOral").toString();
        _timeOral = QTime::fromString(timeString);
        _url = obj.value("_url").toString();
        _order = obj.value("_order").toInt();
        QJsonObject subject =obj.value("_subject").toObject();
        _importanceRate = obj.value("_importanceRate").toInt();
        _subject = Subject(subject);

}

QString Exam::toString(){
    QString s;
    s = getSubject().getName() + "    " + QString::number(getOrder()) + ".rok :" + getDate().toString() + ", " + getTime().toString() + "\n";
    s += "[USMENI]:  " +  QString::number(getOrder()) + ".rok :" + getDateOral().toString() + ", " + getTimeOral().toString() + "\n";
    return s;
}

QJsonObject* Exam::toJson(){

    QJsonObject *examJson = new QJsonObject();
    examJson->insert("_date",_date.toString());
    examJson->insert("_time",_time.toString());
    examJson->insert("_dateOral",_dateOral.toString());
    examJson->insert("_timeOral",_timeOral.toString());
    examJson->insert("_url",_url);
    examJson->insert("_importanceRate",_importanceRate);
    examJson->insert("_subject", *_subject.toJson());
    examJson->insert("_order", _order);

    return examJson;

}

Subject& Exam::getSubject(){
    return _subject;
}

int Exam::getOrder(){
    return _order;
}

QString Exam::getUrl(){
    return _url;
}

QDate Exam::getDate() {
    return _date;
}

QDate Exam::getDateOral() {
    return _dateOral;
}

QTime Exam::getTime(){
    return _time;
}

QTime Exam::getTimeOral(){
    return _timeOral;
}

int Exam::getImportanceRate() {
    return _importanceRate;
}

bool Exam::checkIfDatePassed(){
    if (_date < _date.currentDate())
        return true;

    return false;
}
