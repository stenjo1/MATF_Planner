#include "headers/Utils.h"
#include "headers/Exam.h"


Exam::Exam(Subject subject, QDate date, QTime time, QString url, int importanceRate, int order) {
    _date = date;
    _time = time;
    _url = url;
    _subject = subject;
    _order = order;
    _importanceRate = importanceRate;
}

Exam::Exam(QJsonObject obj){
    //TODO:: fix exams.json or utils func
    //Kratko objasnjenje
    //Json fajl je formatiran tako da ima listu kljuceva(ime ispita) i vrednosti(json objekat)
    //Ovde se prosledjuje objekat koji ima samo jedan kljuc i vrednost tipa exam1 : {}
    //tako da je vrednost zapravo novi json objekat
    //koji se onda tek moze parsirati

    //ako se drzimo starog json formata moralo bi nesto ovako
    //morala sam u jsonu umesto exam1 exam2 da stavim samo exam
    //takodje promenila sam datume

    //ovo sada je sa ispravljenim jsonom i funkcijom za citanje
        QString dateString = obj.value("_date").toString();
        _date = QDate::fromString(dateString, Qt::TextDate);
        QString timeString = obj.value("_time").toString();
        _time = QTime::fromString(timeString);
        //msm da je ova funkcija nepotrebna u utils
        //_date = Utils::fromQStringtoQDate(_dateString);
        _url = obj.value("_url").toString();
        QJsonObject subject =obj.value("_subject").toObject();
        _subject = Subject(subject);

}

bool Exam::checkIfDatePassed(){
    if (_date < _date.currentDate())
        return true;

    return false;
}

Subject& Exam::getSubject(){
    return _subject;
}

bool Exam::checkIfDatePassed(QDate date){
    if (_date < date)
        return true;

    return false;
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

QTime Exam::getTime(){
    return _time;
}

int Exam::getImportanceRate() {
    return _importanceRate;
}

QJsonObject* Exam::toJson(){

    QJsonObject *examJson = new QJsonObject();
    examJson->insert("_date",_date.toString());
    examJson->insert("_time",_time.toString());
    examJson->insert("_url",_url);
    examJson->insert("_importanceRate",_importanceRate);
    examJson->insert("_subject", *_subject.toJson());

    return examJson;

}
