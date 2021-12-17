#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include<iostream>
#include<QJsonObject>
#include<QString>

class Subject{
    public:
        Subject(QString name,unsigned difficulty,int espb,QString url,bool passed);
        Subject();
        QJsonObject* toJson();
        Subject(QJsonObject);

    private:
        unsigned _difficulty;
        int _espb;
        QString _url; // ovde cemo da vidimo da li ima neka biblioteka za hendlovanje urla
        bool _passed;
        QString _name;


};

#endif
