#ifndef SCHEDULE_H
#define SCHEDULE_H

#include"headers/Exam.h"

class Schedule
{
public:
    Schedule();
    Schedule(QVector<Exam*> exams);
    void makeSchedule(QVector<Exam*> exams);

private:
    QVector<Exam*> _exams;

};

#endif // SCHEDULE_H
