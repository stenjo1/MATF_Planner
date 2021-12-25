#ifndef EXAMSOVERVIEW_H
#define EXAMSOVERVIEW_H

#include <QWidget>
#include "headers/Student.h"
#include "headers/InsertExams.h"

namespace Ui {
class ExamsOverview;
}

class ExamsOverview : public QWidget
{
    Q_OBJECT

signals:
   void loadComboBox();
   void fillCalendarSignal();
   void loadExamsJson();

public:
    explicit ExamsOverview(QWidget *parent = nullptr);
    ~ExamsOverview();
    void setStudent(Student* student);


private slots:

    void loadExamList();

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_pbAddExam_clicked();

    void on_pbConfirm_clicked();

private:
    Ui::ExamsOverview *ui;
    Student* _student;
    InsertExams* insertExamsWindow;
};

#endif // EXAMSOVERVIEW_H
