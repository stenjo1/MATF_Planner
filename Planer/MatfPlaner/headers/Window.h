#ifndef WINDOW_H
#define WINDOW_H

#include <QObject>
#include <QWidget>
#include <QVector>

#include <QVBoxLayout>
#include <QCheckBox>
#include <QButtonGroup>
#include <QPushButton>
#include <QLabel>

#include "headers/Student.h"

class Window : public QWidget
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = nullptr, QString filename = "i1o.json");
    ~Window();

    void setFilename(QString filename);
    void setStudent(Student* student);
    void setupWindow();

private:
    QString _filename;
    int year;

    Window *previousYear;
    Window *nextYear = nullptr;

    Student* _student;
    QVector<Subject*> _subjects;

    QVBoxLayout *verticalLayout;
    QButtonGroup *buttonGroup;

    QLabel *label;
    QPushButton *nextButton;
    QPushButton *previousButton;

    QVector<QCheckBox*> checkBoxes;

    QString nameLabel(QString filename);

private slots:
    void setupNextWindow();
    void setupPreviousWindow();
};

#endif // WINDOW_H
