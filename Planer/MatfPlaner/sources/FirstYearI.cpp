#include "headers/FirstYearI.h"
#include "ui_FirstYearI.h"

FirstYearI::FirstYearI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FirstYearI),
    _student(new Student),
    secondWindow(new SecondYearI)
{
    ui->setupUi(this);
    secondWindow->setStudent(_student);
    connect(secondWindow, &SecondYearI::backSignal, this, &QWidget::show);
}


FirstYearI::~FirstYearI()
{
    delete ui;
}

void FirstYearI::on_pbBack_clicked()
{
    emit backSignal();
    hide();
}


void FirstYearI::on_pbNext_clicked()
{

    QVector<QCheckBox *> childCheckBoxes = ui->centralwidget->findChildren<QCheckBox *>(QString(), Qt::FindDirectChildrenOnly);
    for (auto child : childCheckBoxes) {
        if (child->isChecked()) {
            _student->addSubject(new Subject(child->text()));
        }
    }
    secondWindow->show();
    hide();
}


void FirstYearI::on_pbEnd_clicked()
{
    hide();
}

void FirstYearI::setStudent(Student* student){
    _student = student;
}


