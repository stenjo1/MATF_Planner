/********************************************************************************
** Form generated from reading UI file 'SecondYearI.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDYEARI_H
#define UI_SECONDYEARI_H

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

class Ui_SecondYearI
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QCheckBox *cbAISP;
    QCheckBox *cbOOP;
    QCheckBox *cbOS;
    QCheckBox *cbG;
    QCheckBox *cbA2;
    QCheckBox *cbKIAA;
    QCheckBox *cbUVIT;
    QCheckBox *cbA3;
    QCheckBox *cbAlgebra;
    QCheckBox *cbIzborniO3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbBack;
    QPushButton *pbNext;
    QPushButton *pbEnd;

    void setupUi(QMainWindow *SecondYearI)
    {
        if (SecondYearI->objectName().isEmpty())
            SecondYearI->setObjectName(QString::fromUtf8("SecondYearI"));
        SecondYearI->resize(600, 600);
        centralwidget = new QWidget(SecondYearI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        cbAISP = new QCheckBox(centralwidget);
        cbAISP->setObjectName(QString::fromUtf8("cbAISP"));

        verticalLayout->addWidget(cbAISP);

        cbOOP = new QCheckBox(centralwidget);
        cbOOP->setObjectName(QString::fromUtf8("cbOOP"));

        verticalLayout->addWidget(cbOOP);

        cbOS = new QCheckBox(centralwidget);
        cbOS->setObjectName(QString::fromUtf8("cbOS"));

        verticalLayout->addWidget(cbOS);

        cbG = new QCheckBox(centralwidget);
        cbG->setObjectName(QString::fromUtf8("cbG"));

        verticalLayout->addWidget(cbG);

        cbA2 = new QCheckBox(centralwidget);
        cbA2->setObjectName(QString::fromUtf8("cbA2"));

        verticalLayout->addWidget(cbA2);

        cbKIAA = new QCheckBox(centralwidget);
        cbKIAA->setObjectName(QString::fromUtf8("cbKIAA"));

        verticalLayout->addWidget(cbKIAA);

        cbUVIT = new QCheckBox(centralwidget);
        cbUVIT->setObjectName(QString::fromUtf8("cbUVIT"));

        verticalLayout->addWidget(cbUVIT);

        cbA3 = new QCheckBox(centralwidget);
        cbA3->setObjectName(QString::fromUtf8("cbA3"));

        verticalLayout->addWidget(cbA3);

        cbAlgebra = new QCheckBox(centralwidget);
        cbAlgebra->setObjectName(QString::fromUtf8("cbAlgebra"));

        verticalLayout->addWidget(cbAlgebra);

        cbIzborniO3 = new QCheckBox(centralwidget);
        cbIzborniO3->setObjectName(QString::fromUtf8("cbIzborniO3"));

        verticalLayout->addWidget(cbIzborniO3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbBack = new QPushButton(centralwidget);
        pbBack->setObjectName(QString::fromUtf8("pbBack"));

        horizontalLayout->addWidget(pbBack);

        pbNext = new QPushButton(centralwidget);
        pbNext->setObjectName(QString::fromUtf8("pbNext"));

        horizontalLayout->addWidget(pbNext);


        verticalLayout->addLayout(horizontalLayout);

        pbEnd = new QPushButton(centralwidget);
        pbEnd->setObjectName(QString::fromUtf8("pbEnd"));

        verticalLayout->addWidget(pbEnd);

        SecondYearI->setCentralWidget(centralwidget);

        retranslateUi(SecondYearI);

        QMetaObject::connectSlotsByName(SecondYearI);
    } // setupUi

    void retranslateUi(QMainWindow *SecondYearI)
    {
        SecondYearI->setWindowTitle(QCoreApplication::translate("SecondYearI", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("SecondYearI", "Druga godina", nullptr));
        cbAISP->setText(QCoreApplication::translate("SecondYearI", "Algoritmi i strukture podataka", nullptr));
        cbOOP->setText(QCoreApplication::translate("SecondYearI", "Objektno orijentisano programiranje", nullptr));
        cbOS->setText(QCoreApplication::translate("SecondYearI", "Operativni sistemi", nullptr));
        cbG->setText(QCoreApplication::translate("SecondYearI", "Geometrija", nullptr));
        cbA2->setText(QCoreApplication::translate("SecondYearI", "Analiza2", nullptr));
        cbKIAA->setText(QCoreApplication::translate("SecondYearI", "Konstrukcija i analiza algoritama", nullptr));
        cbUVIT->setText(QCoreApplication::translate("SecondYearI", "Uvod u veb i internet tehnologije", nullptr));
        cbA3->setText(QCoreApplication::translate("SecondYearI", "Analiza 3", nullptr));
        cbAlgebra->setText(QCoreApplication::translate("SecondYearI", "Algebra 1", nullptr));
        cbIzborniO3->setText(QCoreApplication::translate("SecondYearI", "Izborni predmet O3", nullptr));
        pbBack->setText(QCoreApplication::translate("SecondYearI", "Nazad", nullptr));
        pbNext->setText(QCoreApplication::translate("SecondYearI", "Dalje", nullptr));
        pbEnd->setText(QCoreApplication::translate("SecondYearI", "Kraj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondYearI: public Ui_SecondYearI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDYEARI_H
