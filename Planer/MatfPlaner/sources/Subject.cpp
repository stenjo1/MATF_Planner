#include "headers/Subject.h"


Subject::Subject(){

}
Subject::Subject(QString name){

    _name = name;
}

QString Subject::getName(){
    return _name;
}

Subject::Subject(QJsonValue val){
    _name=val.toObject().value("_name").toString();
    _espb=val.toObject().value("_espb").toInt();
}

QJsonObject* Subject::toJson(){
    QJsonObject *subjectJson = new QJsonObject();
    subjectJson->insert("_name",_name);
    subjectJson->insert("_espb",_espb);
    return subjectJson;
}

