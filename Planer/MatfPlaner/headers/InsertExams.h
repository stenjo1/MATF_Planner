#ifndef INSERTEXAMS_H
#define INSERTEXAMS_H
#include"headers/Exam.hpp"
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
    void addExam();

private slots:
    void on_addExamButton_clicked();

    void on_clearWidgetButton_clicked();

    void on_endInputExamButton_clicked();

private:
    Ui::InsertExams *ui;
    QList<Exam*> *exams;
};

#endif // INSERTEXAMS_H
