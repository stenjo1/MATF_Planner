#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <vector>
#include <algorithm>

#include "Exam.hpp"

class Schedule{

public:
    Schedule(std::vector<Exam*> exams);
    void makeSchedule(std::vector<Exam*> exams);


private:
    std::vector<Exam*> _exams;


};

#endif // SCHEDULE_H

