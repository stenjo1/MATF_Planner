#include "Student.hpp"

Student::Student()
{

}

Student::Student(QString name,QString surrname){
    _name = name;
    _surrname = surrname;
}

Student::Student(QString name,QString surrname,std::vector<Subject*> allSubjects,std::vector<Exam*> exams){
    _name = name;
    _surrname = surrname;
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


void Student::parseJsonToArray(QString pathname){
    QString content_json;
    QFile file;
    file.setFileName(pathname);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    content_json = file.readAll();
    QJsonDocument sd = QJsonDocument::fromJson(content_json.toUtf8());
    QJsonArray array = sd.array();
}
