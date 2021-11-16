/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *studentName;
    QLabel *studentSurname;
    QLabel *yearOfStudy;
    QLabel *studentEmail;
    QLabel *department;
    QLineEdit *surnameLineEdit;
    QLineEdit *emailLineEdit;
    QLineEdit *yearOfStudyLineEdit;
    QLineEdit *departmentLineEdit;
    QLineEdit *nameLineEdit;
    QLabel *titleOfPage;
    QPushButton *nextPushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        formLayoutWidget = new QWidget(Widget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(130, 350, 321, 141));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        studentName = new QLabel(formLayoutWidget);
        studentName->setObjectName(QString::fromUtf8("studentName"));
        QFont font;
        font.setPointSize(13);
        studentName->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, studentName);

        studentSurname = new QLabel(formLayoutWidget);
        studentSurname->setObjectName(QString::fromUtf8("studentSurname"));
        studentSurname->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, studentSurname);

        yearOfStudy = new QLabel(formLayoutWidget);
        yearOfStudy->setObjectName(QString::fromUtf8("yearOfStudy"));
        yearOfStudy->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, yearOfStudy);

        studentEmail = new QLabel(formLayoutWidget);
        studentEmail->setObjectName(QString::fromUtf8("studentEmail"));
        studentEmail->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, studentEmail);

        department = new QLabel(formLayoutWidget);
        department->setObjectName(QString::fromUtf8("department"));
        department->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, department);

        surnameLineEdit = new QLineEdit(formLayoutWidget);
        surnameLineEdit->setObjectName(QString::fromUtf8("surnameLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, surnameLineEdit);

        emailLineEdit = new QLineEdit(formLayoutWidget);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, emailLineEdit);

        yearOfStudyLineEdit = new QLineEdit(formLayoutWidget);
        yearOfStudyLineEdit->setObjectName(QString::fromUtf8("yearOfStudyLineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, yearOfStudyLineEdit);

        departmentLineEdit = new QLineEdit(formLayoutWidget);
        departmentLineEdit->setObjectName(QString::fromUtf8("departmentLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, departmentLineEdit);

        nameLineEdit = new QLineEdit(formLayoutWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameLineEdit);

        titleOfPage = new QLabel(Widget);
        titleOfPage->setObjectName(QString::fromUtf8("titleOfPage"));
        titleOfPage->setGeometry(QRect(200, 260, 191, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Black")});
        font1.setPointSize(18);
        font1.setBold(true);
        titleOfPage->setFont(font1);
        titleOfPage->setLayoutDirection(Qt::LeftToRight);
        titleOfPage->setTextFormat(Qt::RichText);
        titleOfPage->setScaledContents(false);
        nextPushButton = new QPushButton(Widget);
        nextPushButton->setObjectName(QString::fromUtf8("nextPushButton"));
        nextPushButton->setGeometry(QRect(460, 600, 111, 31));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        studentName->setText(QCoreApplication::translate("Widget", "Ime", nullptr));
        studentSurname->setText(QCoreApplication::translate("Widget", "Prezime", nullptr));
        yearOfStudy->setText(QCoreApplication::translate("Widget", "godina studiranja", nullptr));
        studentEmail->setText(QCoreApplication::translate("Widget", "email", nullptr));
        department->setText(QCoreApplication::translate("Widget", "smer", nullptr));
        titleOfPage->setText(QCoreApplication::translate("Widget", "MATFPLANER", nullptr));
        nextPushButton->setText(QCoreApplication::translate("Widget", "slede\304\207a", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
