#include "headers/ExamsOverview.h"
#include "ui_ExamsOverview.h"
#include <QMessageBox>

ExamsOverview::ExamsOverview(QVector<Exam*>& allExams, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ExamsOverview),
    insertExamsWindow(new InsertExams(allExams)),
    _allExams(allExams)
{
    ui->setupUi(this);
    ui->listWidget->addItem("test");

    loadExamList();
    connect(insertExamsWindow, &InsertExams::reloadListWidget, this, &ExamsOverview::loadExamList);
    connect(this, &ExamsOverview::loadComboBox, insertExamsWindow, &InsertExams::loadComboBox);
    connect(this, &ExamsOverview::loadExamsJson,insertExamsWindow, &InsertExams::writeToJson);
}

ExamsOverview::~ExamsOverview()
{
    delete ui;
    delete schedule;
}

void ExamsOverview::setStudent(Student* student){
    _student=student;
     insertExamsWindow->setStudent(_student);
}

//return exam that has been removed
Exam* ExamsOverview::removeExam(QString& name){

    int index = name.indexOf(" ");
    int order = name.sliced(0,1).toInt();
    name = name.sliced(index+1);

    for (int i=0; i<_allExams.length(); ++i) {
        if (_allExams[i]->getSubject().getName().compare(name) == 0 and order==_allExams[i]->getOrder()) {
            _allExams.remove(i);
            // Calendar::clearCell(_allExams[i]->getDate()); ne umem da napravim neku ovakvu fju
            return _allExams[i];
        }
    }
}

void ExamsOverview::on_listWidget_doubleClicked(const QModelIndex &index)
{
    QMessageBox msgBox;
    msgBox.setIcon(QMessageBox::Question);
    Qt::WindowFlags flags = msgBox.windowFlags();
    msgBox.setParent(this, flags);
    msgBox.setText("Izbaciti ispit iz liste?");
    QPushButton* yesButton = msgBox.addButton("Da",QMessageBox::ButtonRole::YesRole );
    QPushButton* noButton = msgBox.addButton("Ne",QMessageBox::ButtonRole::NoRole );
    msgBox.exec();

    if (msgBox.clickedButton() == yesButton) {
        QString examName = ui->listWidget->itemFromIndex(index)->text();
        Exam* exam  = removeExam(examName);
        loadExamList();

        emit emptyCalendarSignal(exam->getDate());
    }
    else if (msgBox.clickedButton() == noButton) {
        msgBox.close();
    }

}


void ExamsOverview::on_pbAddExam_clicked()
{
    emit loadComboBox();
    insertExamsWindow->show();
}


void ExamsOverview::loadExamList(){

    ui->listWidget->clear();
    for (Exam* e : _allExams) {
        ui->listWidget->addItem(QString::number(e->getOrder()) + ".rok: " + e->getSubject().getName());
    }
}

void ExamsOverview::on_pbConfirm_clicked()
{
    //TO-DO: pozvati pravljenje rasporeda
    schedule = new Schedule(_allExams);

    schedule->makeSchedule();

    emit loadExamsJson();
    emit fillCalendarSignal();
    hide();
}

