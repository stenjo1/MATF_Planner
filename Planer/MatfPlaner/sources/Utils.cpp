#include "headers/Utils.h"

Utils::Utils()
{

}

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

QVector<Subject*> Utils::readJsonSubjectsFromFile(){

    QDir targetDir("../MatfPlaner/resources");
    QString path = targetDir.absolutePath() + "/i1o.json";
    QFile inFile(path);
    QByteArray data = inFile.readAll();
    inFile.close();
    QJsonParseError errorPtr;
    QJsonDocument doc = QJsonDocument::fromJson(data, &errorPtr);
        if (doc.isNull()) {
            qDebug() << "Parse failed";
        }
    QJsonObject rootObj = doc.object();
    QVector<Subject*> listSubjects;
    QJsonArray subjArray = rootObj.value("firstYearInfSubjects").toArray();
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
