#include "headers/Student.h"

Student::Student()
{

}

Student::~Student(){
   for(auto element : _allSubjects){
       delete element;
   }
}


void Student::setName(QString name){
    _name = name;
}

void Student::setEmail(QString email){
    _email = email;
}

void Student::setYearOfStudy(int year){
    _yearOfStudy = year;
}

void Student::setModule(Module m){
    _module = m;
}

QVector<Subject*> Student::getAllSubjects() const
{
    return _allSubjects;
}


QString Student::getName() const{
    return _name;
}
QString Student::getEmail() const{
    return _email;
}
int Student::getYearOfStudy() const{
    return _yearOfStudy;
}
QString Student::getModuleString() {
    if(_module == Module::Informatika)
        return QString("Informatika");
    else if (_module == Module::Matematika)
        return QString("Matematika");
    else
        return QString("/");

}

Module Student::moduleFromString(QString string) {
    if (string.compare("Informatika") == 0)
        return Module::Informatika;
    else if (string.compare("Matematika") == 0)
        return Module::Matematika;
    else
        return Module::None;
}



void Student::addSubject(Subject *subj){
    int i=0;

    while(i<_allSubjects.length() && (_allSubjects[i]->getName().compare(subj->getName()) != 0 )){
        i++;
    }

    if(i == _allSubjects.length()){
        _allSubjects.push_back(new Subject(subj));
    }
}

void Student::removeSubject(Subject *subj)
{
    int i=0;

    while(i<_allSubjects.length() && (_allSubjects[i]->getName().compare(subj->getName()) != 0 )){
        i++;
    }

    if(i < _allSubjects.length()){
        _allSubjects.removeAt(i);
    }
}

void Student::emptyAllSubjects(){
    for (auto s : _allSubjects)
        delete s;
    _allSubjects.resize(0);
}


void Student::jsonToSubjectList(QJsonArray arr){

   auto begin =  arr.begin();
   auto end = arr.end();
   while(begin != end){
       Subject *sub =new Subject((*begin).toObject());
       _allSubjects.push_back(sub);
       begin++;
   }
}



QJsonArray Student::parseJsonToArray(QString pathname){
    QString content_json;
    QFile file;
    file.setFileName(pathname);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    content_json = file.readAll();
    file.close();
    QJsonDocument sd = QJsonDocument::fromJson(content_json.toUtf8());
    QJsonArray array = sd.array();

    return array;
}

void Student::writeToJson()
{
    QJsonArray allSubjectsJson;
    for(auto subject:_allSubjects){
        QJsonObject *subjObj = subject->toJson();
        allSubjectsJson.append(*subjObj);
    }


    QJsonObject jsonObjStudent;
    jsonObjStudent.insert("_name",_name);
    jsonObjStudent.insert("_yearOfStudy",_yearOfStudy);
    jsonObjStudent.insert("_email",_email);
    jsonObjStudent.insert("_allSubjects",allSubjectsJson);
    jsonObjStudent.insert("_module",getModuleString());


    QDir dir("..");
    QString path = dir.absolutePath() + "/MatfPlaner/resources/student.json";
    QFile jsonFile(path);
    jsonFile.open(QFile::WriteOnly);
    QJsonDocument doc(jsonObjStudent);
    jsonFile.write(doc.toJson());
}

void Student::readFromJson(){

    QDir targetDir("../MatfPlaner/resources");
    QString path = targetDir.absolutePath() + "/student.json";
    // to-do: isprazniti listu
    QFile file(path);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QByteArray array = file.readAll();
    if(array.isEmpty())
        _name = "";
    file.close();
    QJsonParseError jsonParseError;
    QJsonDocument jsonDocument(QJsonDocument::fromJson(array, &jsonParseError));
    if(QJsonParseError::NoError != jsonParseError.error)
    {
        qDebug() << QString("JsonParseError: %1").arg(jsonParseError.errorString());
    }
    QJsonObject rootObj = jsonDocument.object();
    _name = rootObj.value("_name").toString();
    _email = rootObj.value("_email").toString();
    _yearOfStudy = rootObj.value("_yearOfStudy").toInt();
    _module = moduleFromString(rootObj.value("_module").toString());
    jsonToSubjectList(rootObj.value("_allSubjects").toArray());


}

void Student::clearStudentFile(){
    QDir targetDir("../MatfPlaner/resources");
    QString path = targetDir.absolutePath() + "/student.json";
    QFile file(path);
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
    out.seek(0);
    out<<"{}";
    file.close();
}
