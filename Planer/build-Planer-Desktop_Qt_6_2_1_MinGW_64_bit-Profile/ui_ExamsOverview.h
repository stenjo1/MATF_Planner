/********************************************************************************
** Form generated from reading UI file 'ExamsOverview.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMSOVERVIEW_H
#define UI_EXAMSOVERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExamsOverview
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_overview_title;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_overview_ispit;
    QListWidget *listWidget;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pbAddExam;
    QPushButton *pbConfirm;

    void setupUi(QWidget *ExamsOverview)
    {
        if (ExamsOverview->objectName().isEmpty())
            ExamsOverview->setObjectName(QString::fromUtf8("ExamsOverview"));
        ExamsOverview->resize(581, 619);
        verticalLayout = new QVBoxLayout(ExamsOverview);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(30, 30, 30, 30);
        label_overview_title = new QLabel(ExamsOverview);
        label_overview_title->setObjectName(QString::fromUtf8("label_overview_title"));
        label_overview_title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_overview_title);

        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);

        label_overview_ispit = new QLabel(ExamsOverview);
        label_overview_ispit->setObjectName(QString::fromUtf8("label_overview_ispit"));
        QFont font;
        font.setPointSize(14);
        label_overview_ispit->setFont(font);

        verticalLayout->addWidget(label_overview_ispit);

        listWidget = new QListWidget(ExamsOverview);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        label_2 = new QLabel(ExamsOverview);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pbAddExam = new QPushButton(ExamsOverview);
        pbAddExam->setObjectName(QString::fromUtf8("pbAddExam"));

        verticalLayout->addWidget(pbAddExam);

        pbConfirm = new QPushButton(ExamsOverview);
        pbConfirm->setObjectName(QString::fromUtf8("pbConfirm"));

        verticalLayout->addWidget(pbConfirm);


        retranslateUi(ExamsOverview);

        QMetaObject::connectSlotsByName(ExamsOverview);
    } // setupUi

    void retranslateUi(QWidget *ExamsOverview)
    {
        ExamsOverview->setWindowTitle(QCoreApplication::translate("ExamsOverview", "Pregled ispita", nullptr));
        label_overview_title->setText(QCoreApplication::translate("ExamsOverview", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:600;\">PREGLED ISPITA</span></p></body></html>", nullptr));
        label_overview_ispit->setText(QCoreApplication::translate("ExamsOverview", "Uneti su ispiti iz slede\304\207ih predmeta:", nullptr));
        label_2->setText(QCoreApplication::translate("ExamsOverview", "Napomena: Mo\305\276ete ukloniti uneti ispit duplim klikom na taj ispit u listi iznad.", nullptr));
        pbAddExam->setText(QCoreApplication::translate("ExamsOverview", "Unesi ispit", nullptr));
        pbConfirm->setText(QCoreApplication::translate("ExamsOverview", "Potvrdi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExamsOverview: public Ui_ExamsOverview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMSOVERVIEW_H
