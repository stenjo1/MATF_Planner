/********************************************************************************
** Form generated from reading UI file 'FirstYearM.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTYEARM_H
#define UI_FIRSTYEARM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstYearM
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QCheckBox *cbAnaliza1;
    QCheckBox *cbLinearna;
    QCheckBox *cbP2;
    QCheckBox *cbLogika;
    QCheckBox *cbJezik;
    QCheckBox *cbG1;
    QCheckBox *cbP1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbBack;
    QPushButton *pbNext;
    QPushButton *pbEnd;

    void setupUi(QMainWindow *FirstYearM)
    {
        if (FirstYearM->objectName().isEmpty())
            FirstYearM->setObjectName(QString::fromUtf8("FirstYearM"));
        FirstYearM->resize(600, 600);
        centralwidget = new QWidget(FirstYearM);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setPointSize(22);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cbAnaliza1 = new QCheckBox(centralwidget);
        cbAnaliza1->setObjectName(QString::fromUtf8("cbAnaliza1"));
        cbAnaliza1->setChecked(false);

        verticalLayout->addWidget(cbAnaliza1);

        cbLinearna = new QCheckBox(centralwidget);
        cbLinearna->setObjectName(QString::fromUtf8("cbLinearna"));

        verticalLayout->addWidget(cbLinearna);

        cbP2 = new QCheckBox(centralwidget);
        cbP2->setObjectName(QString::fromUtf8("cbP2"));

        verticalLayout->addWidget(cbP2);

        cbLogika = new QCheckBox(centralwidget);
        cbLogika->setObjectName(QString::fromUtf8("cbLogika"));

        verticalLayout->addWidget(cbLogika);

        cbJezik = new QCheckBox(centralwidget);
        cbJezik->setObjectName(QString::fromUtf8("cbJezik"));

        verticalLayout->addWidget(cbJezik);

        cbG1 = new QCheckBox(centralwidget);
        cbG1->setObjectName(QString::fromUtf8("cbG1"));

        verticalLayout->addWidget(cbG1);

        cbP1 = new QCheckBox(centralwidget);
        cbP1->setObjectName(QString::fromUtf8("cbP1"));

        verticalLayout->addWidget(cbP1);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbBack = new QPushButton(centralwidget);
        pbBack->setObjectName(QString::fromUtf8("pbBack"));

        horizontalLayout->addWidget(pbBack);

        pbNext = new QPushButton(centralwidget);
        pbNext->setObjectName(QString::fromUtf8("pbNext"));

        horizontalLayout->addWidget(pbNext);


        verticalLayout_3->addLayout(horizontalLayout);

        pbEnd = new QPushButton(centralwidget);
        pbEnd->setObjectName(QString::fromUtf8("pbEnd"));

        verticalLayout_3->addWidget(pbEnd);

        FirstYearM->setCentralWidget(centralwidget);

        retranslateUi(FirstYearM);

        QMetaObject::connectSlotsByName(FirstYearM);
    } // setupUi

    void retranslateUi(QMainWindow *FirstYearM)
    {
        FirstYearM->setWindowTitle(QCoreApplication::translate("FirstYearM", "MainWindow", nullptr));
        label_6->setText(QCoreApplication::translate("FirstYearM", "Prva godina ", nullptr));
        cbAnaliza1->setText(QCoreApplication::translate("FirstYearM", "Analiza 1", nullptr));
        cbLinearna->setText(QCoreApplication::translate("FirstYearM", "Linearna algebra", nullptr));
        cbP2->setText(QCoreApplication::translate("FirstYearM", "Programiranje 2", nullptr));
        cbLogika->setText(QCoreApplication::translate("FirstYearM", "Uvod u matematicku logiku", nullptr));
        cbJezik->setText(QCoreApplication::translate("FirstYearM", "Strani jezik", nullptr));
        cbG1->setText(QCoreApplication::translate("FirstYearM", "Geometrija 1", nullptr));
        cbP1->setText(QCoreApplication::translate("FirstYearM", "Programiranje 1", nullptr));
        pbBack->setText(QCoreApplication::translate("FirstYearM", "Nazad", nullptr));
        pbNext->setText(QCoreApplication::translate("FirstYearM", "Dalje", nullptr));
        pbEnd->setText(QCoreApplication::translate("FirstYearM", "Kraj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirstYearM: public Ui_FirstYearM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTYEARM_H
