#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <algorithm>

#include "Exam.hpp"

class Schedule{

public:
    Schedule(QVector<Exam*> exams);
    void makeSchedule(QVector<Exam*> exams);


private:
    QVector<Exam*> _exams;


};

#endif // SCHEDULE_H

