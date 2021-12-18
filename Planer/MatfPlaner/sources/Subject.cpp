#include "headers/Subject.hpp"


Subject::Subject(){

}
Subject::Subject(QString name){

    _name = name;
}

Subject::Subject(QJsonObject obj){
    _name = obj.value("_name").toString();
    _espb = obj.value("_espb").toInt();
}

QJsonObject* Subject::toJson(){
    QJsonObject *subjectJson = new QJsonObject();
    subjectJson->insert("_name",_name);
    subjectJson->insert("_espb",_espb);
    return subjectJson;
}

