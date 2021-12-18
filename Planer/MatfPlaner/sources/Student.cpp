#include "headers/Student.hpp"

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

void Student::addSubject(Subject* subj){
    _allSubjects.push_back(subj);
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

    QFile jsonFile("../MatfPlaner/resources/student.json");
    jsonFile.open(QFile::WriteOnly);
    QJsonDocument doc(jsonObjStudent);
    jsonFile.write(doc.toJson());
}
