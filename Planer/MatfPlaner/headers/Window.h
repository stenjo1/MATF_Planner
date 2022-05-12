#ifndef WINDOW_H
#define WINDOW_H

#include <QObject>
#include <QVector>
#include <QWidget>

#include <QButtonGroup>
#include <QCheckBox>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

#include "headers/Student.h"
#include "headers/Utils.h"


class Window : public QWidget
{
    Q_OBJECT

  signals:
    void showLogin();

  public:
    explicit Window(QWidget *parent = nullptr);
    ~Window();

    void setFilename(QString filename);
    void setStudent(Student *student);
    void setupWindow();

  private:
    QString _filename;
    int year;

    Window *previousYear;
    Window *nextYear = nullptr;

    Student *_student;
    QVector<Subject *> _subjects;

    QVBoxLayout *verticalLayout;

    QLabel *label;
    QLabel *infoLabel;
    QPushButton *nextButton;
    QPushButton *previousButton;

    QVector<QCheckBox *> checkBoxes;

    QString nameLabel();

  private slots:
    void setupNextWindow();
    void setupPreviousWindow();
};

#endif // WINDOW_H
