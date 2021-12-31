#ifndef EXAMSOVERVIEW_H
#define EXAMSOVERVIEW_H

#include <QWidget>
#include "headers/Student.h"
#include "headers/InsertExams.h"
#include "headers/ScheduleSuggestion.h"

namespace Ui {
class ExamsOverview;
}

class ExamsOverview : public QWidget
{
    Q_OBJECT

signals:
   void loadComboBox();
   void fillCalendarSignal();
   void emptyCalendarSignal(QDate date);

public:
   explicit ExamsOverview(QWidget *parent = nullptr);
    ~ExamsOverview();
    void setStudent(Student* student);


private slots:

    void loadExamList();

    void fillCalendarSlot();

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_pbAddExam_clicked();

    void on_pbConfirm_clicked();


private:
    Ui::ExamsOverview *ui;
    Student* _student;
    InsertExams* insertExamsWindow;
    ScheduleSuggestion* _scheduleSuggestion;
    QVector<Exam*> _allExams;
    QDate removeExam(QString& name);
    void writeToJson(QString filePath);
};

#endif // EXAMSOVERVIEW_H
