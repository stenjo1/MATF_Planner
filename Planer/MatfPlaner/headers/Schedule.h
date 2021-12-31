#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <algorithm>

#include "Exam.h"
#include "Utils.h"

class Schedule{

public:
    Schedule();
    ~Schedule();
    void makeSchedule();

    void setExams(QVector<Exam*> exams);

private:
    QVector<Exam*> _exams;
};

#endif // SCHEDULE_H
