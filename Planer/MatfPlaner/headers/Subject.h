#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include<iostream>
#include<QJsonObject>
#include<QString>

class Subject{
    public:
        Subject(QString name, int espb);
        Subject();
        Subject(const Subject* other);
        QJsonObject* toJson() const;
        Subject(QJsonValue val);
        QString getName() const;
        int getEspb() const;

    private:
        int _espb;
        bool _passed;
        QString _name;
};

#endif
