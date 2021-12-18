#ifndef INSERTEXAMS_H
#define INSERTEXAMS_H
#include"headers/Exam.h"
#include "headers/Student.h"
#include <QWidget>

namespace Ui {
class InsertExams;
}

class InsertExams : public QWidget
{
    Q_OBJECT

public:
    explicit InsertExams(QWidget *parent = nullptr);
    ~InsertExams();


private slots:
    void on_addExamButton_clicked();

    void on_clearWidgetButton_clicked();

    void on_endInputExamButton_clicked();

private:
    Ui::InsertExams *ui;
    QVector<Exam*> *exams;

};

#endif // INSERTEXAMS_H
