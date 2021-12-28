#include "headers/Window.h"


Window::Window(QWidget *parent) : QWidget(parent)
{
    //TODO:: check if new should be here
}

Window::~Window()
{
    //TODO:: delete windows
    delete verticalLayout;
    delete label;
    delete nextButton;
    delete previousButton;
    for(auto& cb : checkBoxes){
        delete cb;
    }
}

void Window::setFilename(QString filename)
{
    _filename = filename;

    //TODO:: here?
    year = _filename.at(1).digitValue();
    if (year == -1){
        qDebug()<<"JSON BADLY NAMED";
    }
}

void Window::setStudent(Student* student)
{
    _student = student;
}

void Window::setupWindow()
{
    if(_filename.isEmpty()){
        qDebug()<<"First setup filename";
        return;
    }

    verticalLayout = new QVBoxLayout();
    verticalLayout->setContentsMargins(30,30,30,30);

    label = new QLabel();
    label->setText(nameLabel());
    label->setStyleSheet("QLabel { background-color: transparent;"
                         "         font-size: 50px; "
                         "         text-transform: uppercase;"
                         "        }");

    verticalLayout->addWidget(label);

    _subjects = Utils::readJsonSubjectsFromFile(_filename);
    for(auto& subject: _subjects){
        QCheckBox *cb = new QCheckBox(this);
        cb->setText(subject->getName());
        checkBoxes.append(cb);
    }

    for(auto& cb: checkBoxes){
        verticalLayout->addWidget(cb);
    }

    verticalLayout->addSpacing(40);

    nextButton = new QPushButton();
    if(year == 4){
        nextButton->setText("Kraj");
    } else{
        nextButton->setText("Dalje");
    }

    previousButton = new QPushButton();
    previousButton->setText("Nazad");

    //TODO:: check how to add button group to layout
    buttonGroup = new QButtonGroup();
    buttonGroup->addButton(nextButton);
    buttonGroup->addButton(previousButton);

    verticalLayout->addWidget(nextButton);
    verticalLayout->addWidget(previousButton);

    connect(nextButton, &QPushButton::clicked, this, &Window::setupNextWindow);
    connect(previousButton, &QPushButton::clicked, this, &Window::setupPreviousWindow);

    setLayout(verticalLayout);
    setMinimumSize(800, 600);
}

void Window::setupNextWindow()
{
    //add checked subjs and remove unchecked
    //mozda moze efikasnije ali sam pokrila situaciju da on ode dalje i onda se vrati i odluci da nesto uncheckira nzm

    for(int i=0; i<checkBoxes.size(); ++i){
//        for(auto& subject : _subjects){
//            qDebug()<<"sledeci subject";
//            if(subject->getName().compare(cb->text()) == 0){
//                qDebug()<<"uradio getName";
                if(checkBoxes[i]->isChecked()){
                    _student->addSubject(_subjects[i]);
                    qDebug()<<"checked";
                } else{
                    _student->removeSubject(_subjects[i]);
                    qDebug()<<"unchecked";
                }
              //  break;
            }




    //setup next window
    QString newFilename = _filename;

    switch (year) {
        case 1: newFilename.replace('1', '2');
                break;
        case 2: newFilename.replace('2', '3');
                break;
        case 3: newFilename.replace('3', '4');
                break;
        case 4: //stigao je do kraja tj napravio je profil
                //nek zapamti sad to u json
                _student->writeToJson();
                //test
//                for(auto& subj : _student->getAllSubjects())
//                  qDebug()<<subj->getName();
                this->hide();
                return;
      //  default: qDebug()<<"SETUP NEXT WINDOW ERROR"; return;
    }

    if(nextYear == nullptr){
        nextYear = new Window();
        nextYear->setFilename(newFilename);
        nextYear->setupWindow();
        nextYear->setStudent(_student);
    }

    nextYear->previousYear = this;
    this->hide();
    nextYear->show();
}

void Window::setupPreviousWindow()
{
    this->hide();
    if(year == 1){
        emit showLogin();
    }
    else {
        this->previousYear->show();
    }
//    if (year!=1){
//        this->previousYear->show();
//    }
}

QString Window::nameLabel()
{
    QString name = "Predmeti";

    switch (year) {
        case 1: name = "Prva godina"; break;
        case 2: name = "Druga godina"; break;
        case 3: name = "Treća godina"; break;
        case 4: name = "Četvrta godina"; break;
        default: qDebug()<<"JSON BADLY NAMED"; break;
    }

    return name;
}
