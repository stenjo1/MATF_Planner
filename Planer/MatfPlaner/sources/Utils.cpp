#include "headers/Utils.h"

Utils::Utils()
{

}

//nepotrebno

//mozda da svuda filename bude isti komad putanje?

QDate Utils::fromQStringtoQDate(QString string){
    QDate date = QDate::fromString(string);

    return date;
}


QVector<Exam*> Utils::readJsonExamsFromFile(const QString &fileName){
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
       //QJsonObject rootObject = jsonDocument.object();

       //if(!rootObject.keys().contains("_exams"))
       //{
       //    qDebug() << "No target value";
       //}

       //QJsonValue jsonValue = rootObject.value("_exams");
       //if(!jsonValue.isArray())
       //{
       //    qDebug() << "No target array";
       //}
       QJsonArray jsonArray = jsonDocument.array();

       for(auto iter = jsonArray.constBegin(); iter != jsonArray.constEnd(); ++iter)
       {
           Exam *exam = new Exam((*iter).toObject());
           exams.push_back(exam);
       }
       return exams;
}

QVector<Subject*> Utils::readJsonSubjectsFromFile(QString fileName){
    QFile file("../MatfPlaner/resources/"+fileName);
    file.open(QFile::ReadOnly);
    QByteArray data = file.readAll();
    file.close();
    QJsonParseError errorPtr;
    QJsonDocument doc = QJsonDocument::fromJson(data, &errorPtr);
        if (doc.isNull()) {
            qDebug() << "Parse failed";
        }
    QJsonObject rootObj = doc.object();
    QVector<Subject*> listSubjects;
    QJsonArray subjArray = rootObj.value("_subjects").toArray();
    foreach(const QJsonValue  &val, subjArray){
            listSubjects.append(new Subject(val));
        }

    return listSubjects;

}

void Utils::clearFile(const QString &fileName){
   QFile file(fileName);
   file.open(QIODevice::WriteOnly | QIODevice::Text);
   QTextStream out(&file);
   out.seek(0);
   out<<"{\n\t\"_exams\":[]\n}";
   file.close();

}
