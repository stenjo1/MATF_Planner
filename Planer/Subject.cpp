#include "Subject.hpp"


Subject::Subject(){

}
Subject::Subject(QString name,unsigned difficulty,unsigned espb,QString url,bool passed=false){
    if (difficulty>100 || difficulty < 0)
    {
        //TODO: greska
    }
    //todo: videti kakve sve greske mogu da budu za url
    _espb = espb;
    _difficulty = difficulty;
    _url = url;
    _name = name;
}

Subject::Subject(QJsonObject obj){
    _name = obj.value("_name").toString();
    _espb = obj.value("_espb").toInt();
    _difficulty = obj.value("_difficulty").toInt();
    _url = obj.value("_url").toString();
}

