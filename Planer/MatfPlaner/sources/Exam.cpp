#include "headers/Exam.hpp"

Exam::Exam(QDate date,QString url,Subject subject, bool passed, unsigned numbersOfTry)
{
    _date = date;
    _url = url;
    _subject = subject;
    _numbersOfTry = numbersOfTry;
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


bool Exam::seeChangesInUrl(){
//vraca true ako je fajl promenjen
    return true;
}
