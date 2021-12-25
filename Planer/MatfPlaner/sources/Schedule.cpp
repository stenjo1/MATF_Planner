#include "headers/Schedule.h"


Schedule::Schedule(QVector<Exam*> exams)
{
    _exams = exams;

}

Schedule::~Schedule() {
    for (auto e : _exams) {
        delete e;
    }
}

void Schedule::makeSchedule() {

    int n = _exams.length();
    const int freeDays = 2; // minimum days between two exams

    std::sort(_exams.begin(), _exams.end(),
    [](Exam* a, Exam* b) {
        return a->getDate().addDays(a->getImportanceRate() + freeDays)  < b->getDate().addDays(b->getImportanceRate() + freeDays);
    });

    // int numberOfExams = 1;

    QDate end = _exams[0]->getDate().addDays(_exams[0]->getImportanceRate() + freeDays);

    QVector<Exam*> suggestedExams;

    suggestedExams.append(_exams[0]);

    for (int i = 1; i < n; i++)

     if (_exams[i]->getDate() >= end) {

         suggestedExams.append(_exams[i]);

         end = _exams[i]->getDate().addDays(_exams[i]->getImportanceRate() + freeDays);

     }

    // std::cout << "[TEST] Broj ispita na koji ce izaci student: " << numberOfExams << "\n";

    for(auto e : suggestedExams) {
        std::cout << e->getSubject().getName().toStdString() << "  ";
    }
}
