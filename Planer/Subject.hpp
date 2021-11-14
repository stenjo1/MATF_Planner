#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include<iostream>
#include<QJsonObject>
#include<QString>

class Subject{
    public:
        Subject(QString name,unsigned difficulty,unsigned espb,QString url,bool passed);
        Subject();
        Subject(QJsonObject);

    private:
        unsigned _difficulty;
        unsigned _espb;
        QString _url; // ovde cemo da vidimo da li ima neka biblioteka za hendlovanje urla
        bool _passed;
        QString _name;


};

#endif
