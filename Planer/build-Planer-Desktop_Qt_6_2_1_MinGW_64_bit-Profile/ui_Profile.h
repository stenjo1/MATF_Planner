/********************************************************************************
** Form generated from reading UI file 'Profile.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Profile
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *labelName;
    QLabel *label_2;
    QLabel *labelEmail;
    QLabel *label_3;
    QLabel *labelYearOfStudy;
    QLabel *label_5;
    QLabel *labelModule;
    QLabel *label_4;
    QLabel *label_9;
    QLabel *labelESPB;
    QSpacerItem *verticalSpacer_2;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_profile_title;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Profile)
    {
        if (Profile->objectName().isEmpty())
            Profile->setObjectName(QString::fromUtf8("Profile"));
        Profile->resize(648, 652);
        formLayout = new QFormLayout(Profile);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(30, 30, 30, 30);
        label = new QLabel(Profile);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        labelName = new QLabel(Profile);
        labelName->setObjectName(QString::fromUtf8("labelName"));

        formLayout->setWidget(2, QFormLayout::FieldRole, labelName);

        label_2 = new QLabel(Profile);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_2);

        labelEmail = new QLabel(Profile);
        labelEmail->setObjectName(QString::fromUtf8("labelEmail"));

        formLayout->setWidget(4, QFormLayout::FieldRole, labelEmail);

        label_3 = new QLabel(Profile);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_3);

        labelYearOfStudy = new QLabel(Profile);
        labelYearOfStudy->setObjectName(QString::fromUtf8("labelYearOfStudy"));

        formLayout->setWidget(6, QFormLayout::FieldRole, labelYearOfStudy);

        label_5 = new QLabel(Profile);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_5);

        labelModule = new QLabel(Profile);
        labelModule->setObjectName(QString::fromUtf8("labelModule"));

        formLayout->setWidget(8, QFormLayout::FieldRole, labelModule);

        label_4 = new QLabel(Profile);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_4);

        label_9 = new QLabel(Profile);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(12, QFormLayout::LabelRole, label_9);

        labelESPB = new QLabel(Profile);
        labelESPB->setObjectName(QString::fromUtf8("labelESPB"));

        formLayout->setWidget(12, QFormLayout::FieldRole, labelESPB);

        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Minimum);

        formLayout->setItem(9, QFormLayout::SpanningRole, verticalSpacer_2);

        plainTextEdit = new QPlainTextEdit(Profile);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        formLayout->setWidget(10, QFormLayout::FieldRole, plainTextEdit);

        label_profile_title = new QLabel(Profile);
        label_profile_title->setObjectName(QString::fromUtf8("label_profile_title"));
        QFont font;
        font.setPointSize(14);
        label_profile_title->setFont(font);
        label_profile_title->setLayoutDirection(Qt::RightToLeft);
        label_profile_title->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::SpanningRole, label_profile_title);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Minimum);

        formLayout->setItem(1, QFormLayout::SpanningRole, verticalSpacer);


        retranslateUi(Profile);

        QMetaObject::connectSlotsByName(Profile);
    } // setupUi

    void retranslateUi(QWidget *Profile)
    {
        Profile->setWindowTitle(QCoreApplication::translate("Profile", "Form", nullptr));
        label->setText(QCoreApplication::translate("Profile", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Ime:</span></p></body></html>", nullptr));
        labelName->setText(QString());
        label_2->setText(QCoreApplication::translate("Profile", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">E-mail:</span></p></body></html>", nullptr));
        labelEmail->setText(QString());
        label_3->setText(QCoreApplication::translate("Profile", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Godina studija:</span></p></body></html>", nullptr));
        labelYearOfStudy->setText(QString());
        label_5->setText(QCoreApplication::translate("Profile", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Smer:</span></p></body></html>", nullptr));
        labelModule->setText(QString());
        label_4->setText(QCoreApplication::translate("Profile", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Polo\305\276eni predmeti:</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("Profile", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Broj ostvarenih ESPB:</span></p></body></html>", nullptr));
        labelESPB->setText(QString());
        label_profile_title->setText(QCoreApplication::translate("Profile", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt; font-weight:600;\">PROFIL</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Profile: public Ui_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
