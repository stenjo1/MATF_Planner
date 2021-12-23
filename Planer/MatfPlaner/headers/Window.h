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

class Window : public QWidget
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = nullptr, QString filename = "i1o.json");
    ~Window();

    void setFilename(QString filename);
    void setupWindow();

private:
    QString _filename;
    int year;

    Window *previousYear;
    Window *nextYear = nullptr;

    QVBoxLayout *verticalLayout;
    QButtonGroup *buttonGroup;

    QLabel *label;
    QPushButton *nextButton;
    QPushButton *previousButton;
    QPushButton *endButton;

    QVector<QCheckBox*> checkBoxes;

    QString nameLabel(QString filename);

private slots:
    void setupNextWindow();
    void setupPreviousWindow();
    void closeWindow();
};

#endif // WINDOW_H
