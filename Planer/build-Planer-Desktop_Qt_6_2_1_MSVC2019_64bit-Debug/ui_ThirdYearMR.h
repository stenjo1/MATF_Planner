/********************************************************************************
** Form generated from reading UI file 'ThirdYearMR.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDYEARMR_H
#define UI_THIRDYEARMR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThirdYearMR
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QCheckBox *cbPP;
    QCheckBox *cbDJ;
    QCheckBox *cbViSA;
    QCheckBox *cbLA;
    QCheckBox *cbKF;
    QCheckBox *cbViSB;
    QCheckBox *cbNM;
    QCheckBox *cbKPJ;
    QCheckBox *cbDPJ;
    QCheckBox *cbTMI;
    QCheckBox *cbIzborni;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbBack;
    QPushButton *pbNext;
    QPushButton *pbEnd;

    void setupUi(QWidget *ThirdYearMR)
    {
        if (ThirdYearMR->objectName().isEmpty())
            ThirdYearMR->setObjectName(QString::fromUtf8("ThirdYearMR"));
        ThirdYearMR->resize(600, 600);
        verticalLayout_2 = new QVBoxLayout(ThirdYearMR);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(ThirdYearMR);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cbPP = new QCheckBox(ThirdYearMR);
        cbPP->setObjectName(QString::fromUtf8("cbPP"));

        verticalLayout->addWidget(cbPP);

        cbDJ = new QCheckBox(ThirdYearMR);
        cbDJ->setObjectName(QString::fromUtf8("cbDJ"));

        verticalLayout->addWidget(cbDJ);

        cbViSA = new QCheckBox(ThirdYearMR);
        cbViSA->setObjectName(QString::fromUtf8("cbViSA"));

        verticalLayout->addWidget(cbViSA);

        cbLA = new QCheckBox(ThirdYearMR);
        cbLA->setObjectName(QString::fromUtf8("cbLA"));

        verticalLayout->addWidget(cbLA);

        cbKF = new QCheckBox(ThirdYearMR);
        cbKF->setObjectName(QString::fromUtf8("cbKF"));

        verticalLayout->addWidget(cbKF);

        cbViSB = new QCheckBox(ThirdYearMR);
        cbViSB->setObjectName(QString::fromUtf8("cbViSB"));

        verticalLayout->addWidget(cbViSB);

        cbNM = new QCheckBox(ThirdYearMR);
        cbNM->setObjectName(QString::fromUtf8("cbNM"));

        verticalLayout->addWidget(cbNM);

        cbKPJ = new QCheckBox(ThirdYearMR);
        cbKPJ->setObjectName(QString::fromUtf8("cbKPJ"));

        verticalLayout->addWidget(cbKPJ);

        cbDPJ = new QCheckBox(ThirdYearMR);
        cbDPJ->setObjectName(QString::fromUtf8("cbDPJ"));

        verticalLayout->addWidget(cbDPJ);

        cbTMI = new QCheckBox(ThirdYearMR);
        cbTMI->setObjectName(QString::fromUtf8("cbTMI"));

        verticalLayout->addWidget(cbTMI);

        cbIzborni = new QCheckBox(ThirdYearMR);
        cbIzborni->setObjectName(QString::fromUtf8("cbIzborni"));

        verticalLayout->addWidget(cbIzborni);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbBack = new QPushButton(ThirdYearMR);
        pbBack->setObjectName(QString::fromUtf8("pbBack"));

        horizontalLayout->addWidget(pbBack);

        pbNext = new QPushButton(ThirdYearMR);
        pbNext->setObjectName(QString::fromUtf8("pbNext"));

        horizontalLayout->addWidget(pbNext);


        verticalLayout_2->addLayout(horizontalLayout);

        pbEnd = new QPushButton(ThirdYearMR);
        pbEnd->setObjectName(QString::fromUtf8("pbEnd"));

        verticalLayout_2->addWidget(pbEnd);


        retranslateUi(ThirdYearMR);

        QMetaObject::connectSlotsByName(ThirdYearMR);
    } // setupUi

    void retranslateUi(QWidget *ThirdYearMR)
    {
        ThirdYearMR->setWindowTitle(QCoreApplication::translate("ThirdYearMR", "Form", nullptr));
        label->setText(QCoreApplication::translate("ThirdYearMR", "Treca godina ", nullptr));
        cbPP->setText(QCoreApplication::translate("ThirdYearMR", "Programske paradigme", nullptr));
        cbDJ->setText(QCoreApplication::translate("ThirdYearMR", "Diferencijalne jedna\304\215ine ", nullptr));
        cbViSA->setText(QCoreApplication::translate("ThirdYearMR", "Verovatno\304\207a i statistika A", nullptr));
        cbLA->setText(QCoreApplication::translate("ThirdYearMR", "Leksi\304\215ka analiza i njene primene", nullptr));
        cbKF->setText(QCoreApplication::translate("ThirdYearMR", "Kompleksne funkcije", nullptr));
        cbViSB->setText(QCoreApplication::translate("ThirdYearMR", "Verovatno\304\207a i statistika B", nullptr));
        cbNM->setText(QCoreApplication::translate("ThirdYearMR", "Numeri\304\215ke metode", nullptr));
        cbKPJ->setText(QCoreApplication::translate("ThirdYearMR", "Kompilacija programskih jezika", nullptr));
        cbDPJ->setText(QCoreApplication::translate("ThirdYearMR", "Dizajn programskih jezika", nullptr));
        cbTMI->setText(QCoreApplication::translate("ThirdYearMR", "Teorija mere i integracije", nullptr));
        cbIzborni->setText(QCoreApplication::translate("ThirdYearMR", "Izborni predmet blok MR4", nullptr));
        pbBack->setText(QCoreApplication::translate("ThirdYearMR", "Nazad", nullptr));
        pbNext->setText(QCoreApplication::translate("ThirdYearMR", "Dalje", nullptr));
        pbEnd->setText(QCoreApplication::translate("ThirdYearMR", "Kraj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThirdYearMR: public Ui_ThirdYearMR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDYEARMR_H
