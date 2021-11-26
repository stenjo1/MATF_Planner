/********************************************************************************
** Form generated from reading UI file 'FourthYearMR.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOURTHYEARMR_H
#define UI_FOURTHYEARMR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FourthYearMR
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QCheckBox *cbURBP;
    QCheckBox *cbMLUR;
    QCheckBox *cbOS;
    QCheckBox *cbMNMR;
    QCheckBox *cbAR1;
    QCheckBox *cbIzborni1;
    QCheckBox *cbPBP;
    QCheckBox *cbIFM;
    QCheckBox *cbRM;
    QCheckBox *cbTA;
    QCheckBox *cbIzborni2;
    QCheckBox *cbIzborni3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbBack;
    QPushButton *pbEnd;

    void setupUi(QWidget *FourthYearMR)
    {
        if (FourthYearMR->objectName().isEmpty())
            FourthYearMR->setObjectName(QString::fromUtf8("FourthYearMR"));
        FourthYearMR->resize(607, 561);
        verticalLayout = new QVBoxLayout(FourthYearMR);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(FourthYearMR);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        cbURBP = new QCheckBox(FourthYearMR);
        cbURBP->setObjectName(QString::fromUtf8("cbURBP"));

        verticalLayout->addWidget(cbURBP);

        cbMLUR = new QCheckBox(FourthYearMR);
        cbMLUR->setObjectName(QString::fromUtf8("cbMLUR"));

        verticalLayout->addWidget(cbMLUR);

        cbOS = new QCheckBox(FourthYearMR);
        cbOS->setObjectName(QString::fromUtf8("cbOS"));

        verticalLayout->addWidget(cbOS);

        cbMNMR = new QCheckBox(FourthYearMR);
        cbMNMR->setObjectName(QString::fromUtf8("cbMNMR"));

        verticalLayout->addWidget(cbMNMR);

        cbAR1 = new QCheckBox(FourthYearMR);
        cbAR1->setObjectName(QString::fromUtf8("cbAR1"));

        verticalLayout->addWidget(cbAR1);

        cbIzborni1 = new QCheckBox(FourthYearMR);
        cbIzborni1->setObjectName(QString::fromUtf8("cbIzborni1"));

        verticalLayout->addWidget(cbIzborni1);

        cbPBP = new QCheckBox(FourthYearMR);
        cbPBP->setObjectName(QString::fromUtf8("cbPBP"));

        verticalLayout->addWidget(cbPBP);

        cbIFM = new QCheckBox(FourthYearMR);
        cbIFM->setObjectName(QString::fromUtf8("cbIFM"));

        verticalLayout->addWidget(cbIFM);

        cbRM = new QCheckBox(FourthYearMR);
        cbRM->setObjectName(QString::fromUtf8("cbRM"));

        verticalLayout->addWidget(cbRM);

        cbTA = new QCheckBox(FourthYearMR);
        cbTA->setObjectName(QString::fromUtf8("cbTA"));

        verticalLayout->addWidget(cbTA);

        cbIzborni2 = new QCheckBox(FourthYearMR);
        cbIzborni2->setObjectName(QString::fromUtf8("cbIzborni2"));

        verticalLayout->addWidget(cbIzborni2);

        cbIzborni3 = new QCheckBox(FourthYearMR);
        cbIzborni3->setObjectName(QString::fromUtf8("cbIzborni3"));

        verticalLayout->addWidget(cbIzborni3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbBack = new QPushButton(FourthYearMR);
        pbBack->setObjectName(QString::fromUtf8("pbBack"));

        horizontalLayout->addWidget(pbBack);

        pbEnd = new QPushButton(FourthYearMR);
        pbEnd->setObjectName(QString::fromUtf8("pbEnd"));

        horizontalLayout->addWidget(pbEnd);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(FourthYearMR);

        QMetaObject::connectSlotsByName(FourthYearMR);
    } // setupUi

    void retranslateUi(QWidget *FourthYearMR)
    {
        FourthYearMR->setWindowTitle(QCoreApplication::translate("FourthYearMR", "Form", nullptr));
        label->setText(QCoreApplication::translate("FourthYearMR", "\304\214etvrta godina", nullptr));
        cbURBP->setText(QCoreApplication::translate("FourthYearMR", "Uvod u relacione baze podataka", nullptr));
        cbMLUR->setText(QCoreApplication::translate("FourthYearMR", "Matemati\304\215ka logika u ra\304\215unarstvu", nullptr));
        cbOS->setText(QCoreApplication::translate("FourthYearMR", "Operativni sistemi", nullptr));
        cbMNMR->setText(QCoreApplication::translate("FourthYearMR", "Metodika nastave matematike i ra\304\215unarstva", nullptr));
        cbAR1->setText(QCoreApplication::translate("FourthYearMR", "Arhitektura ra\304\215unara 1", nullptr));
        cbIzborni1->setText(QCoreApplication::translate("FourthYearMR", "Izborni blok MR5", nullptr));
        cbPBP->setText(QCoreApplication::translate("FourthYearMR", "Programiranje baza podataka", nullptr));
        cbIFM->setText(QCoreApplication::translate("FourthYearMR", "Istorija i filozofija matematike", nullptr));
        cbRM->setText(QCoreApplication::translate("FourthYearMR", "Ra\304\215unarske mre\305\276e", nullptr));
        cbTA->setText(QCoreApplication::translate("FourthYearMR", "Teorija algoritama", nullptr));
        cbIzborni2->setText(QCoreApplication::translate("FourthYearMR", "Izborni blok MR6", nullptr));
        cbIzborni3->setText(QCoreApplication::translate("FourthYearMR", "Izborni blok MR7", nullptr));
        pbBack->setText(QCoreApplication::translate("FourthYearMR", "Nazad", nullptr));
        pbEnd->setText(QCoreApplication::translate("FourthYearMR", "Kraj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FourthYearMR: public Ui_FourthYearMR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOURTHYEARMR_H
