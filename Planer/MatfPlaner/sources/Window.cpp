#include "headers/Window.h"
#include "headers/Utils.h"

Window::Window(QWidget *parent, QString filename) : QWidget(parent)
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
    //TODO:: style window

    if(_filename.isEmpty()){
        qDebug()<<"First setup filename";
        return;
    }

    verticalLayout = new QVBoxLayout();

    label = new QLabel();
    label->setText(nameLabel(_filename));

    label->setStyleSheet("QLabel {color: black; background-color: white; font-weight:bold; font-size: 30pt}");

    verticalLayout->addWidget(label);

    _subjects = Utils::readJsonSubjectsFromFile(_filename);
    for(auto& subject: _subjects){
        QCheckBox *cb = new QCheckBox(this);
        cb->setText(subject->getName());
        cb->setStyleSheet("QCheckBox {color: black; background-color: white; font-size: 15pt}");
        checkBoxes.append(cb);
    }

    for(auto& cb: checkBoxes){
        verticalLayout->addWidget(cb);
    }

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

    for(auto& cb : checkBoxes){
        for(auto& subject : _subjects){
            if(subject->getName() == cb->text()){
                if(cb->isChecked()){
                    _student->addSubject(subject);
                } else{
                    _student->removeSubject(subject);
                }
            }
        }
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
        case 4: this->hide();
                //test
                //for(auto& subj : *_student->getAllSubjects())
                //    qDebug()<<subj->getName();
                return;
        default: qDebug()<<"SETUP NEXT WINDOW ERROR"; return;
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
    if(year != 1){
        this->previousYear->show();
    }
}

QString Window::nameLabel(QString filename)
{
    QString name = "Predmeti";

    switch (year) {
        case 1: name = "Prva godina"; break;
        case 2: name = "Druga godina"; break;
        case 3: name = "Treca godina"; break;
        case 4: name = "Cetvrta godina"; break;
        default: qDebug()<<"JSON BADLY NAMED"; break;
    }

    return name;
}
