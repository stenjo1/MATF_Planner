#include "headers/Utils.h"

Utils::Utils() {}

QVector<Exam *> Utils::readJsonExamsFromFile(const QString &fileName)
{

    QList<Exam *> exams;
    QDir dir("../MatfPlaner/");
    QFile file(dir.absolutePath() + fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << QString("fail to open the file: %1, %2, %3").arg(__FILE__).arg(__LINE__).arg(__FUNCTION__);
    }
    QByteArray array = file.readAll();
    QJsonParseError jsonParseError;
    QJsonDocument jsonDocument(QJsonDocument::fromJson(array, &jsonParseError));
    if (QJsonParseError::NoError != jsonParseError.error) {
        qDebug() << QString("JsonParseError: %1").arg(jsonParseError.errorString());
    }

    QJsonArray jsonArray = jsonDocument.array();

    for (auto iter = jsonArray.constBegin(); iter != jsonArray.constEnd(); ++iter) {
        Exam *exam = new Exam((*iter).toObject());
        exams.push_back(exam);
    }
    return exams;
}

QVector<Subject *> Utils::readJsonSubjectsFromFile(QString fileName)
{
    QDir dir("../MatfPlaner/resources/");
    QFile file(dir.absolutePath() + fileName);

    if (!file.open(QFile::ReadOnly)) {
        qDebug() << "UTILS::READ SUBJECTS FILE::Could not opet file";
    }
    QByteArray data = file.readAll();
    file.close();
    QJsonParseError errorPtr;
    QJsonDocument doc = QJsonDocument::fromJson(data, &errorPtr);
    if (doc.isNull()) {
        qDebug() << "Parse failed";
    }
    QJsonObject rootObj = doc.object();
    QVector<Subject *> listSubjects;
    QJsonArray subjArray = rootObj.value("_subjects").toArray();
    for (const auto &val : subjArray) {
        listSubjects.append(new Subject(val));
    }

    return listSubjects;
}

QByteArray Utils::readJsonFromFile(QString &fileName)
{
    QDir dir("../MatfPlaner/resources");
    QString path = dir.absolutePath() + fileName;

    QFile file(path);
    QByteArray data = QByteArray("");
    if (!file.open(QFile::ReadOnly)) {
        qDebug() << file.errorString();
    } else {
        data = file.readAll();
    }

    return data;
}

void Utils::writeJsonExamsToFile(QString filePath, const QVector<Exam *> &exams)
{

    QJsonArray allExamsJson;
    for (auto exam : exams) {
        QJsonObject *examObj = exam->toJson();
        allExamsJson.append(*examObj);
    }

    QDir dir("../MatfPlaner");
    QString path = dir.absolutePath() + filePath;

    QFile jsonFile(path);
    if (!jsonFile.open(QFile::WriteOnly)) {
        qDebug() << "UTILS::WRITE TO EXAMS:: Could not open json file";
    }
    QJsonDocument doc(allExamsJson);
    jsonFile.write(doc.toJson());
    jsonFile.close();
}
