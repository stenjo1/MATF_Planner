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
    explicit InsertExams(QWidget *parent = nullptr);
    ~InsertExams();
    void setStudent(Student* student);
     QVector<Exam*> getExams();
     void removeExam(QString& name);

public slots:

     void loadComboBox();
private slots:
    void on_addExamButton_clicked();

    void on_clearWidgetButton_clicked();

    void on_endInputExamButton_clicked();

    void on_comboBox_activated(int index);

private:
    Ui::InsertExams *ui;
    QVector<Exam*> _exams;
    Student* _student;
    void writeToJson();

};

#endif // INSERTEXAMS_H
