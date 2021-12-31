#include "headers/ScheduleSuggestion.h"
#include "ui_ScheduleSuggestion.h"

ScheduleSuggestion::ScheduleSuggestion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ScheduleSuggestion)
{
    ui->setupUi(this);
    sortExams();
    makeSuggestion(_freeDays, _suggestion);
}

ScheduleSuggestion::~ScheduleSuggestion()
{
    delete ui;
}

void ScheduleSuggestion::setExams(QVector<Exam*> exams){
    _exams = exams;

}

void ScheduleSuggestion::makeSuggestion(int freeDays, int suggestion){

        ui->listWidget->clear();
        ui->label->setText("Predlog rasporeda ispita: " + QString::number(suggestion));

        int n = _exams.length();

        QDate end;
        QSet<QDate> datesOfOralExams;


        _suggestedExams.clear();
        datesOfOralExams.clear();


        if(_exams.length() > 0) {

            end = _exams[0]->getDate().addDays(_exams[0]->getImportanceRate() + freeDays);
            _suggestedExams.append(_exams[0]);
            datesOfOralExams.insert(_exams[0]->getDateOral());

        }

        if(_exams.length() > 1) {

            for (int i = 1; i < n; i++)

             if (_exams[i]->getDate() >= end) {

                 end = _exams[i]->getDate().addDays(_exams[i]->getImportanceRate() + freeDays);
                 _suggestedExams.append(_exams[i]);
                 datesOfOralExams.insert(_exams[i]->getDateOral());

             }

        }

            for(int i = 0; i < _suggestedExams.length(); i++) {

                if(datesOfOralExams.find(_suggestedExams[i]->getDate()) == datesOfOralExams.end()) {
                    ui->listWidget->addItem(_suggestedExams[i]->getSubject().getName() + " " + _suggestedExams[i]->getDate().toString("yyyy.MM.dd") + "\n");
                    ui->listWidget->addItem("[USMENI]" + _suggestedExams[i]->getSubject().getName() + " " + _suggestedExams[i]->getDateOral().toString("yyyy.MM.dd") + "\n");
                }
            }

            _freeDays--;
            _suggestion++;
}


void ScheduleSuggestion::sortExams() {

    std::sort(_exams.begin(), _exams.end(),
    [](Exam* a, Exam* b) {
        return a->getDate().addDays(a->getImportanceRate())  < b->getDate().addDays(b->getImportanceRate());
    });

}

void ScheduleSuggestion::on_pbNext_clicked()
{
    if (_freeDays==0) {
        _freeDays=3;
        _suggestion=1;
    }

    makeSuggestion(_freeDays,_suggestion);
}


void ScheduleSuggestion::on_pbConfirm_clicked()
{
    Utils::writeJsonExamsToFile("/output/schedule.json",_suggestedExams);
    emit scheduleSet();
    hide();
}

