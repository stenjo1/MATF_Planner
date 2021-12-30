/********************************************************************************
** Form generated from reading UI file 'Calendar.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALENDAR_H
#define UI_CALENDAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calendar
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pbLogin;
    QPushButton *pbProfile;
    QLabel *label;
    QTextEdit *textEdit;
    QPushButton *pbSendMail;
    QPushButton *pbCheckUrl;
    QVBoxLayout *verticalLayout_3;
    QCalendarWidget *calendarWidget;
    QPushButton *pbNewExam;

    void setupUi(QWidget *Calendar)
    {
        if (Calendar->objectName().isEmpty())
            Calendar->setObjectName(QString::fromUtf8("Calendar"));
        Calendar->setWindowModality(Qt::NonModal);
        Calendar->resize(1123, 770);
        Calendar->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(Calendar);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pbLogin = new QPushButton(Calendar);
        pbLogin->setObjectName(QString::fromUtf8("pbLogin"));

        verticalLayout_2->addWidget(pbLogin);

        pbProfile = new QPushButton(Calendar);
        pbProfile->setObjectName(QString::fromUtf8("pbProfile"));

        verticalLayout_2->addWidget(pbProfile);

        label = new QLabel(Calendar);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        textEdit = new QTextEdit(Calendar);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(textEdit);

        pbSendMail = new QPushButton(Calendar);
        pbSendMail->setObjectName(QString::fromUtf8("pbSendMail"));

        verticalLayout_2->addWidget(pbSendMail);

        pbCheckUrl = new QPushButton(Calendar);
        pbCheckUrl->setObjectName(QString::fromUtf8("pbCheckUrl"));

        verticalLayout_2->addWidget(pbCheckUrl);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        calendarWidget = new QCalendarWidget(Calendar);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setKerning(true);
        calendarWidget->setFont(font);
        calendarWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        calendarWidget->setAcceptDrops(false);
        calendarWidget->setAutoFillBackground(true);
        calendarWidget->setGridVisible(false);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        calendarWidget->setNavigationBarVisible(true);

        verticalLayout_3->addWidget(calendarWidget);

        pbNewExam = new QPushButton(Calendar);
        pbNewExam->setObjectName(QString::fromUtf8("pbNewExam"));

        verticalLayout_3->addWidget(pbNewExam);


        horizontalLayout->addLayout(verticalLayout_3);


        retranslateUi(Calendar);

        QMetaObject::connectSlotsByName(Calendar);
    } // setupUi

    void retranslateUi(QWidget *Calendar)
    {
        Calendar->setWindowTitle(QCoreApplication::translate("Calendar", "Form", nullptr));
        pbLogin->setText(QCoreApplication::translate("Calendar", "Pravljenje profila", nullptr));
        pbProfile->setText(QCoreApplication::translate("Calendar", "Profil", nullptr));
        label->setText(QCoreApplication::translate("Calendar", "Obave\305\241tenja", nullptr));
        pbSendMail->setText(QCoreApplication::translate("Calendar", "Po\305\241alji raspored ", nullptr));
        pbCheckUrl->setText(QCoreApplication::translate("Calendar", "Proveri rezultate", nullptr));
        pbNewExam->setText(QCoreApplication::translate("Calendar", "Unesi ispit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calendar: public Ui_Calendar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALENDAR_H
