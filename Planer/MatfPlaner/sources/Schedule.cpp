#include "headers/Schedule.h"


Schedule::Schedule()
{
}

Schedule::~Schedule() {

}

void Schedule::setExams(QVector<Exam*> exams){
    _exams = exams;

}

void Schedule::makeSchedule() {

    int n = _exams.length();

    std::sort(_exams.begin(), _exams.end(),
    [](Exam* a, Exam* b) {
        return a->getDate().addDays(a->getImportanceRate())  < b->getDate().addDays(b->getImportanceRate());
    });


    QVector<Exam*> suggestedExams;
    QDate end;
    QSet<QDate> datesOfOralExams;
    int suggestion = 1;

    for(int freeDays = 3; freeDays > 0; freeDays--) {

        std::cout << suggestion << ". predlog" << "\n";


        suggestedExams.clear();
        datesOfOralExams.clear();


        if(_exams.length() > 0) {

            end = _exams[0]->getDate().addDays(_exams[0]->getImportanceRate() + freeDays);
            suggestedExams.append(_exams[0]);
            datesOfOralExams.insert(_exams[0]->getDateOral());

        }

        if(_exams.length() > 1) {

            for (int i = 1; i < n; i++)

             if (_exams[i]->getDate() >= end) {

                 end = _exams[i]->getDate().addDays(_exams[i]->getImportanceRate() + freeDays);
                 suggestedExams.append(_exams[i]);
                 datesOfOralExams.insert(_exams[i]->getDateOral());

             }

        }

        // std::cout << "[TEST] Broj ispita na koji ce izaci student: " << numberOfExams << "\n";

//        for(int i = 0; i < suggestedExams.length(); i++) {

//            if(datesOfOralExams.find(suggestedExams[i]->getDate()) == datesOfOralExams.end()) {

//                std::cout << suggestedExams[i]->getSubject().getName().toStdString() << " " << suggestedExams[i]->getDate().toString("yyyy.MM.dd").toStdString() << "\n";
//                std::cout << "[USMENI]" << suggestedExams[i]->getSubject().getName().toStdString() << " " << suggestedExams[i]->getDateOral().toString("yyyy.MM.dd").toStdString() << "\n";
//            }

//        }

//        std::cout << "\n";

        suggestion++;

    }

}


