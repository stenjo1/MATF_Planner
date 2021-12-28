#include "headers/Subject.h"


Subject::Subject(){

}
Subject::Subject(QString name, int espb){

    _name = name;
    _espb = espb;
}

Subject::Subject(const Subject* other) {
    _name = other->_name;
    _espb = other->_espb;
}
QString Subject::getName() const {
    return _name;
}

Subject::Subject(QJsonValue val){
    _name=val.toObject().value("_name").toString();
    _espb=val.toObject().value("_espb").toInt();
}

QJsonObject* Subject::toJson() const{
    QJsonObject *subjectJson = new QJsonObject();
    subjectJson->insert("_name",_name);
    subjectJson->insert("_espb",_espb);
    return subjectJson;
}

int Subject::getEspb() const{
    return _espb;
}
