#include "headers/Schedule.h"


Schedule::Schedule(QVector<Exam*> exams)
{
    _exams = exams;

}


void Schedule::makeSchedule(QVector<Exam*> exams) {

    int n = exams.length();

    std::sort(exams.begin(), exams.end(),
    [](Exam* a, Exam* b) {
        return a->getDate().addDays(a->getImportanceRate() - 3)  < b->getDate().addDays(b->getImportanceRate() - 3);    // 3 test value, try make it better!!!
    });

    int numberOfExams = 1;

    QDate end = exams[0]->getDate().addDays(exams[0]->getImportanceRate() - 3 );


    for (int i = 1; i < n; i++)

     if (exams[i]->getDate() >= end) {

         numberOfExams++;
         end = exams[i]->getDate().addDays(exams[i]->getImportanceRate() - 3);

     }

    std::cout << "[TEST] Broj ispita na koji ce izaci student: " << numberOfExams << "\n";
}
