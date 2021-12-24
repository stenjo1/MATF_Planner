#include "headers/Student.h"

Student::Student()
{

}

Student::Student(QString name, QString email)
    : _name(name), _email(email)
{

}

Student::Student(QString name,QVector<Subject*> allSubjects,QVector<Exam*> exams){
    _name = name;
    _allSubjects = allSubjects;
    _exams = exams;
}

Student::~Student(){
   for(auto element : _allSubjects){
       delete element;
   }

   for(auto element : _exams){
       delete element;
   }

}

QString& Student::getName(){
    return _name;
}
QString& Student::getEmail(){
    return _email;
}
int Student::getYearOfStudy(){
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
void Student::addSubject(Subject* subj){
    int i=0;

    while(i<_allSubjects.length() && _allSubjects[i]->getName() != subj->getName()){
        i++;
    }

    if(i == _allSubjects.length()){
        _allSubjects.push_back(subj);
    }
}

void Student::removeSubject(Subject *subj)
{
    int i=0;

    while(i<_allSubjects.length() && _allSubjects[i]->getName() != subj->getName()){
        i++;
    }

    if(i < _allSubjects.length()){
        _allSubjects.removeAt(i);
    }
}

void Student::addExam(Exam *exam){
    _exams.push_back(exam);
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

QVector<Subject*>* Student::getAllSubjects()
{
    return &_allSubjects;
}

QJsonArray Student::parseJsonToArray(QString pathname){
    QString content_json;
    QFile file;
    file.setFileName(pathname);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    content_json = file.readAll();
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

    QDir dir("..");
    QString path = dir.absolutePath() + "/MatfPlaner/resources/student.json";

    QFile jsonFile(path);
    jsonFile.open(QFile::WriteOnly);
    QJsonDocument doc(jsonObjStudent);
    jsonFile.write(doc.toJson());
}
