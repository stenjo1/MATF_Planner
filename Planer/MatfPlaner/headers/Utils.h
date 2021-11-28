#ifndef UTILS_H
#define UTILS_H
#include<QDate>

class Utils
{
public:
    Utils();
    static QDate fromQStringtoQDate(QString string);
};

#endif // UTILS_H
