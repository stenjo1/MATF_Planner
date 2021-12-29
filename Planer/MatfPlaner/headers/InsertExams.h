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

signals:
    void reloadListWidget();
public:
    explicit InsertExams(QVector<Exam*>& allExams, QWidget *parent = nullptr);
    ~InsertExams();
    void setStudent(Student* student);
    // QVector<Exam*> getExams();
     void removeExam(QString& name);

public slots:
     void writeToJson();
     void loadComboBox();
private slots:
    void on_addExamButton_clicked();

    void on_clearWidgetButton_clicked();

    void on_endInputExamButton_clicked();


private:
    Ui::InsertExams *ui;
    QVector<Exam*>& _exams;
    Student* _student;

};

#endif // INSERTEXAMS_H
