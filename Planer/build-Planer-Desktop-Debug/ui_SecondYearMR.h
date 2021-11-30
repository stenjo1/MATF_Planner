/********************************************************************************
** Form generated from reading UI file 'SecondYearMR.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDYEARMR_H
#define UI_SECONDYEARMR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondYearMR
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QCheckBox *cbAnaliza2;
    QCheckBox *cbUoar1;
    QCheckBox *cbG2;
    QCheckBox *cbAlgebra1;
    QCheckBox *cbIzborni;
    QCheckBox *cbOOP;
    QCheckBox *cbG3;
    QCheckBox *cbUnm;
    QCheckBox *cbAlgebra2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbBack;
    QPushButton *pbNext;
    QPushButton *pbEnd;

    void setupUi(QWidget *SecondYearMR)
    {
        if (SecondYearMR->objectName().isEmpty())
            SecondYearMR->setObjectName(QString::fromUtf8("SecondYearMR"));
        SecondYearMR->resize(600, 600);
        verticalLayout_2 = new QVBoxLayout(SecondYearMR);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(SecondYearMR);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cbAnaliza2 = new QCheckBox(SecondYearMR);
        cbAnaliza2->setObjectName(QString::fromUtf8("cbAnaliza2"));

        verticalLayout->addWidget(cbAnaliza2);

        cbUoar1 = new QCheckBox(SecondYearMR);
        cbUoar1->setObjectName(QString::fromUtf8("cbUoar1"));

        verticalLayout->addWidget(cbUoar1);

        cbG2 = new QCheckBox(SecondYearMR);
        cbG2->setObjectName(QString::fromUtf8("cbG2"));

        verticalLayout->addWidget(cbG2);

        cbAlgebra1 = new QCheckBox(SecondYearMR);
        cbAlgebra1->setObjectName(QString::fromUtf8("cbAlgebra1"));

        verticalLayout->addWidget(cbAlgebra1);

        cbIzborni = new QCheckBox(SecondYearMR);
        cbIzborni->setObjectName(QString::fromUtf8("cbIzborni"));

        verticalLayout->addWidget(cbIzborni);

        cbOOP = new QCheckBox(SecondYearMR);
        cbOOP->setObjectName(QString::fromUtf8("cbOOP"));

        verticalLayout->addWidget(cbOOP);

        cbG3 = new QCheckBox(SecondYearMR);
        cbG3->setObjectName(QString::fromUtf8("cbG3"));

        verticalLayout->addWidget(cbG3);

        cbUnm = new QCheckBox(SecondYearMR);
        cbUnm->setObjectName(QString::fromUtf8("cbUnm"));

        verticalLayout->addWidget(cbUnm);

        cbAlgebra2 = new QCheckBox(SecondYearMR);
        cbAlgebra2->setObjectName(QString::fromUtf8("cbAlgebra2"));

        verticalLayout->addWidget(cbAlgebra2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbBack = new QPushButton(SecondYearMR);
        pbBack->setObjectName(QString::fromUtf8("pbBack"));

        horizontalLayout->addWidget(pbBack);

        pbNext = new QPushButton(SecondYearMR);
        pbNext->setObjectName(QString::fromUtf8("pbNext"));

        horizontalLayout->addWidget(pbNext);


        verticalLayout_2->addLayout(horizontalLayout);

        pbEnd = new QPushButton(SecondYearMR);
        pbEnd->setObjectName(QString::fromUtf8("pbEnd"));

        verticalLayout_2->addWidget(pbEnd);


        retranslateUi(SecondYearMR);

        QMetaObject::connectSlotsByName(SecondYearMR);
    } // setupUi

    void retranslateUi(QWidget *SecondYearMR)
    {
        SecondYearMR->setWindowTitle(QCoreApplication::translate("SecondYearMR", "Form", nullptr));
        label->setText(QCoreApplication::translate("SecondYearMR", "Druga godina", nullptr));
        cbAnaliza2->setText(QCoreApplication::translate("SecondYearMR", "Analiza 2", nullptr));
        cbUoar1->setText(QCoreApplication::translate("SecondYearMR", "Uvod u organizaciju i arhitekturu racunara 1", nullptr));
        cbG2->setText(QCoreApplication::translate("SecondYearMR", "Geometrija 2", nullptr));
        cbAlgebra1->setText(QCoreApplication::translate("SecondYearMR", "Algebra 1", nullptr));
        cbIzborni->setText(QCoreApplication::translate("SecondYearMR", "Izborni blok MR1", nullptr));
        cbOOP->setText(QCoreApplication::translate("SecondYearMR", "Objektno orijentisano programiranje", nullptr));
        cbG3->setText(QCoreApplication::translate("SecondYearMR", "Geometrija 3", nullptr));
        cbUnm->setText(QCoreApplication::translate("SecondYearMR", "Uvod u numeri\304\215ku matematiku", nullptr));
        cbAlgebra2->setText(QCoreApplication::translate("SecondYearMR", "Algebra 2", nullptr));
        pbBack->setText(QCoreApplication::translate("SecondYearMR", "Nazad", nullptr));
        pbNext->setText(QCoreApplication::translate("SecondYearMR", "Dalje", nullptr));
        pbEnd->setText(QCoreApplication::translate("SecondYearMR", "Kraj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondYearMR: public Ui_SecondYearMR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDYEARMR_H
