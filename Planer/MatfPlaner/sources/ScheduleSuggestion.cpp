#include "headers/ScheduleSuggestion.h"
#include "ui_ScheduleSuggestion.h"

ScheduleSuggestion::ScheduleSuggestion(QWidget *parent) : QWidget(parent), ui(new Ui::ScheduleSuggestion)
{
    ui->setupUi(this);
    sortExams();
}

ScheduleSuggestion::~ScheduleSuggestion()
{
    delete ui;
}

void ScheduleSuggestion::setExams(QVector<Exam *> exams)
{
    _exams = exams;
}

void ScheduleSuggestion::makeFirstSuggestion()
{
    makeSuggestion(3, 1);
}

void ScheduleSuggestion::makeSuggestion(int freeDays, int suggestion)
{

    ui->listWidget->clear();
    ui->label->setText("Predlog rasporeda ispita: " + QString::number(suggestion));


    int n = _exams.length();

    QDate end;
    QSet<QDate> datesOfOralExams;


    _suggestedExams.clear();
    datesOfOralExams.clear();

    if (suggestion == 3) {

        for (int i = 0; i < n; i++) {
            _suggestedExams.append(_exams[i]);
        }


    } else if (_exams.length() > 0) {


        end = _exams[0]->getDate().addDays(_exams[0]->getImportanceRate() + freeDays);
        _suggestedExams.append(_exams[0]);
        datesOfOralExams.insert(_exams[0]->getDateOral());

        for (int i = 1; i < n; i++)

            if (_exams[i]->getDate().addDays(_exams[i]->getImportanceRate() + freeDays) >= end) {

                end = _exams[i]->getDate().addDays(_exams[i]->getImportanceRate() + freeDays);
                _suggestedExams.append(_exams[i]);
                datesOfOralExams.insert(_exams[i]->getDateOral());
            }
    }

    for (int i = 0; i < _suggestedExams.length(); i++) {

        if (datesOfOralExams.find(_suggestedExams[i]->getDate()) == datesOfOralExams.end()) {
            ui->listWidget->addItem(_suggestedExams[i]->getSubject().getName() + " " + _suggestedExams[i]->getDate().toString("dd.MM.yyyy") + "\n");
            ui->listWidget->addItem("[USMENI]" + _suggestedExams[i]->getSubject().getName() + " " +
                                    _suggestedExams[i]->getDateOral().toString("dd.MM.yyyy") + "\n");
        }
    }

    if (_freeDays > 0)
        _freeDays--;
    else
        _freeDays = 3;
    if (_suggestion < 4)
        _suggestion++;
    else
        _suggestion = 1;
}


void ScheduleSuggestion::sortExams()
{

    std::sort(_exams.begin(), _exams.end(),
              [](Exam *a, Exam *b) { return a->getDate().addDays(a->getImportanceRate()) < b->getDate().addDays(b->getImportanceRate()); });
}

void ScheduleSuggestion::on_pbNext_clicked()
{
    if (_suggestion == 4) {
        _freeDays   = 3;
        _suggestion = 1;
    }

    makeSuggestion(_freeDays, _suggestion);
}


void ScheduleSuggestion::on_pbConfirm_clicked()
{
    Utils::writeJsonExamsToFile("/output/schedule.json", _suggestedExams);
    emit scheduleSet();
    hide();
}
