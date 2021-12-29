#include "headers/Schedule.h"


Schedule::Schedule(QVector<Exam*> exams)
{
    _exams = exams;

}

Schedule::~Schedule() {

}

void Schedule::makeSchedule() {

    int n = _exams.length();

    std::sort(_exams.begin(), _exams.end(),
    [](Exam* a, Exam* b) {
        return a->getDate().addDays(a->getImportanceRate())  < b->getDate().addDays(b->getImportanceRate());
    });

    QVector<Exam*> suggestedExams;
    QDate end;

    for(int freeDays = 3; freeDays > 0; freeDays--) {

        suggestedExams.empty();



        if(_exams.length() > 0) {

            end = _exams[0]->getDate().addDays(_exams[0]->getImportanceRate() + freeDays);
            suggestedExams.append(_exams[0]);

        }

        if(_exams.length() > 1) {

            for (int i = 1; i < n; i++)

             if (_exams[i]->getDate() >= end) {

                 suggestedExams.append(_exams[i]);

                 end = _exams[i]->getDate().addDays(_exams[i]->getImportanceRate() + freeDays);

             }

        }

        // std::cout << "[TEST] Broj ispita na koji ce izaci student: " << numberOfExams << "\n";

        for(auto e : suggestedExams) {
            std::cout << e->getSubject().getName().toStdString() << "  ";
        }

    }
}
