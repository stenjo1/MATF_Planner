#include "headers/Subject.hpp"
#include <QApplication>
#include<QList>
#include<QFile>
#include<QJsonDocument>
#include <QJsonArray>
#include "headers/Calendar.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calendar w;
    w.show();
    return a.exec();
}
