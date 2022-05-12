#ifndef SCHEDULESUGGESTION_H
#define SCHEDULESUGGESTION_H

#include <QWidget>
#include <algorithm>

#include "Exam.h"
#include "Utils.h"

namespace Ui
{
class ScheduleSuggestion;
}

class ScheduleSuggestion : public QWidget
{
    Q_OBJECT

  signals:
    void scheduleSet();

  public:
    explicit ScheduleSuggestion(QWidget *parent = nullptr);
    ~ScheduleSuggestion();
    void sortExams();

    void setExams(QVector<Exam *> exams);
    void makeFirstSuggestion();

  private slots:
    void on_pbNext_clicked();

    void on_pbConfirm_clicked();

  private:
    Ui::ScheduleSuggestion *ui;
    QVector<Exam *> _exams;
    QVector<Exam *> _suggestedExams;
    void makeSuggestion(int freeDays, int suggestion);
    int _freeDays   = 3;
    int _suggestion = 1;
};

#endif // SCHEDULESUGGESTION_H
