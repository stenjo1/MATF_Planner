#include "headers/ExamsOverview.h"
#include "ui_ExamsOverview.h"
#include <QMessageBox>

ExamsOverview::ExamsOverview(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ExamsOverview),
    insertExamsWindow(new InsertExams)
{
    ui->setupUi(this);
    ui->listWidget->addItem("test");

    loadExamList();
    connect(insertExamsWindow, &InsertExams::reloadListWidget, this, &ExamsOverview::loadExamList);
    connect(this, &ExamsOverview::loadComboBox, insertExamsWindow, &InsertExams::loadComboBox);
}

ExamsOverview::~ExamsOverview()
{
    delete ui;
}

void ExamsOverview::setStudent(Student* student){
    _student=student;
     insertExamsWindow->setStudent(_student);
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
        QString exam = ui->listWidget->itemFromIndex(index)->text();
        insertExamsWindow->removeExam(exam);
        loadExamList();

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
    QVector<Exam*> allExams = insertExamsWindow->getExams();
    for (Exam* e : allExams) {
        ui->listWidget->addItem(e->getSubject().getName());
    }
}
