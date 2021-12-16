#include "headers/Utils.h"
#include<QFile>
#include<QJsonDocument>
#include<QDir>
#include <QJsonArray>
#include<QTextStream>

Utils::Utils()
{

}

QDate Utils::fromQStringtoQDate(QString string){
    QDate date;
    if(string.contains('/')){
        date.fromString(string,"dd/MM/YYYY");
    }else if(string.contains('.')){
        date.fromString(string,"dd.MM.YYYY");
    }else if(string.contains('-')){
        date.fromString(string,"dd-MM-YYYY");
    } else {
        //exception handling
    }

    return date;
}


QVector<Exam*> Utils::readJsonObjectsFromFile(const QString &fileName){
    QList<Exam*> exams;
    QFile file(fileName);
       if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
       {
           qDebug() << QString("fail to open the file: %1, %2, %3").arg(__FILE__).arg(__LINE__).arg(__FUNCTION__);
       }
       QByteArray array = file.readAll();
       QJsonParseError jsonParseError;
       QJsonDocument jsonDocument(QJsonDocument::fromJson(array, &jsonParseError));
       if(QJsonParseError::NoError != jsonParseError.error)
       {
           qDebug() << QString("JsonParseError: %1").arg(jsonParseError.errorString());
       }
       QJsonObject rootObject = jsonDocument.object();

       if(!rootObject.keys().contains("_exams"))
       {
           qDebug() << "No target value";
       }
       qDebug() << rootObject.keys();

       QJsonValue jsonValue = rootObject.value("_exams");
       if(!jsonValue.isArray())
       {
           qDebug() << "No target array";
       }
       QJsonArray jsonArray = jsonValue.toArray();

       for(auto iter = jsonArray.constBegin(); iter != jsonArray.constEnd(); ++iter)
       {    Exam *exam = new Exam((*iter).toObject());
           exams.push_back(exam);
       }
       qDebug() << rootObject.keys();
       return exams;
}


void Utils::clearFile(const QString &fileName){
   QFile file(fileName);
   file.open(QIODevice::WriteOnly | QIODevice::Text);
   QTextStream out(&file);
   out.seek(0);
   out<<"{\n\t\"_exams\":[]\n}";
   file.close();

}
