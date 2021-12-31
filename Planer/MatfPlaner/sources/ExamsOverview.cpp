#include "headers/ExamsOverview.h"
#include "ui_ExamsOverview.h"
#include <QMessageBox>

ExamsOverview::ExamsOverview(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ExamsOverview),
    _scheduleSuggestion(new ScheduleSuggestion()),
    _allExams()

{
    ui->setupUi(this);
    insertExamsWindow = new InsertExams(_allExams);

    _allExams = Utils::readJsonExamsFromFile("/resources/student_info/exams.json");
    loadExamList();
    connect(insertExamsWindow, &InsertExams::reloadListWidget, this, &ExamsOverview::loadExamList);
    connect(this, &ExamsOverview::loadComboBox, insertExamsWindow, &InsertExams::loadComboBox);
    connect(_scheduleSuggestion, &ScheduleSuggestion::scheduleSet, this, &ExamsOverview::fillCalendarSlot);
    connect(this, &ExamsOverview::makeFirstSuggestion, _scheduleSuggestion, &ScheduleSuggestion::makeFirstSuggestion);
}

ExamsOverview::~ExamsOverview()
{
    delete ui;
    delete insertExamsWindow;
    delete _scheduleSuggestion;
}

void ExamsOverview::fillCalendarSlot(){
    emit fillCalendarSignal();
}
void ExamsOverview::setStudent(Student* student){
    _student=student;
     insertExamsWindow->setStudent(_student);
}

//returns date of the exam that has been removed
QDate ExamsOverview::removeExam(QString& name){

    QDate date;
    int index = name.indexOf(" ");
    int order = name.sliced(0,1).toInt();
    name = name.sliced(index+1);

    for (int i=0; i<_allExams.length(); ++i) {
        if (_allExams[i]->getSubject().getName().compare(name) == 0 and order==_allExams[i]->getOrder()) {
            date = _allExams[i]->getDate();
            _allExams.remove(i);
            break;
        }
    }
    return date;
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
        QDate date  = removeExam(examName);
        loadExamList();

        emit emptyCalendarSignal(date);
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
    Utils::writeJsonExamsToFile("/resources/student_info/exams.json", _allExams);

    _scheduleSuggestion->setExams(_allExams);
    emit makeFirstSuggestion();
    _scheduleSuggestion->show();


    hide();
}

