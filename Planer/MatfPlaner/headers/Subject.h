#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include<iostream>
#include<QJsonObject>
#include<QString>

class Subject{
    public:
        Subject(QString name);
        Subject();
        QJsonObject* toJson();
        Subject(QJsonValue val);
        QString getName();

    private:
        int _espb;
        bool _passed;
        QString _name;
};

#endif
