#ifndef SCHEDULE_H
#define SCHEDULE_H

#include "Exam.h"
#include <algorithm>

class Schedule
{
public:
    Schedule(QVector<Exam*> exams);
    void makeSchedule(QVector<Exam*> exams);

private:
    QVector<Exam*> _exams;
};

#endif // SCHEDULE_H
