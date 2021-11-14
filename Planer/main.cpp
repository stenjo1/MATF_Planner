#include "widget.h"
#include "Subject.hpp"
#include <QApplication>
#include<QList>
#include<QFile>
#include<QJsonDocument>
#include <QJsonArray>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
