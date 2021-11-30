/********************************************************************************
** Form generated from reading UI file 'ThirdYearI.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDYEARI_H
#define UI_THIRDYEARI_H

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

class Ui_ThirdYearI
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QCheckBox *cbRBP;
    QCheckBox *cbPPJ;
    QCheckBox *cbRG;
    QCheckBox *cbVrv;
    QCheckBox *cbUNM;
    QCheckBox *cbVI;
    QCheckBox *cbIP1;
    QCheckBox *cbPP;
    QCheckBox *cbIzborniR1;
    QCheckBox *cbStat;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbBack;
    QPushButton *pbNext;
    QPushButton *pbEnd;

    void setupUi(QMainWindow *ThirdYearI)
    {
        if (ThirdYearI->objectName().isEmpty())
            ThirdYearI->setObjectName(QString::fromUtf8("ThirdYearI"));
        ThirdYearI->resize(600, 600);
        centralwidget = new QWidget(ThirdYearI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        cbRBP = new QCheckBox(centralwidget);
        cbRBP->setObjectName(QString::fromUtf8("cbRBP"));

        verticalLayout_2->addWidget(cbRBP);

        cbPPJ = new QCheckBox(centralwidget);
        cbPPJ->setObjectName(QString::fromUtf8("cbPPJ"));

        verticalLayout_2->addWidget(cbPPJ);

        cbRG = new QCheckBox(centralwidget);
        cbRG->setObjectName(QString::fromUtf8("cbRG"));

        verticalLayout_2->addWidget(cbRG);

        cbVrv = new QCheckBox(centralwidget);
        cbVrv->setObjectName(QString::fromUtf8("cbVrv"));

        verticalLayout_2->addWidget(cbVrv);

        cbUNM = new QCheckBox(centralwidget);
        cbUNM->setObjectName(QString::fromUtf8("cbUNM"));

        verticalLayout_2->addWidget(cbUNM);

        cbVI = new QCheckBox(centralwidget);
        cbVI->setObjectName(QString::fromUtf8("cbVI"));

        verticalLayout_2->addWidget(cbVI);

        cbIP1 = new QCheckBox(centralwidget);
        cbIP1->setObjectName(QString::fromUtf8("cbIP1"));

        verticalLayout_2->addWidget(cbIP1);

        cbPP = new QCheckBox(centralwidget);
        cbPP->setObjectName(QString::fromUtf8("cbPP"));

        verticalLayout_2->addWidget(cbPP);

        cbIzborniR1 = new QCheckBox(centralwidget);
        cbIzborniR1->setObjectName(QString::fromUtf8("cbIzborniR1"));

        verticalLayout_2->addWidget(cbIzborniR1);

        cbStat = new QCheckBox(centralwidget);
        cbStat->setObjectName(QString::fromUtf8("cbStat"));

        verticalLayout_2->addWidget(cbStat);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbBack = new QPushButton(centralwidget);
        pbBack->setObjectName(QString::fromUtf8("pbBack"));

        horizontalLayout->addWidget(pbBack);

        pbNext = new QPushButton(centralwidget);
        pbNext->setObjectName(QString::fromUtf8("pbNext"));

        horizontalLayout->addWidget(pbNext);


        verticalLayout_2->addLayout(horizontalLayout);

        pbEnd = new QPushButton(centralwidget);
        pbEnd->setObjectName(QString::fromUtf8("pbEnd"));

        verticalLayout_2->addWidget(pbEnd);

        ThirdYearI->setCentralWidget(centralwidget);

        retranslateUi(ThirdYearI);

        QMetaObject::connectSlotsByName(ThirdYearI);
    } // setupUi

    void retranslateUi(QMainWindow *ThirdYearI)
    {
        ThirdYearI->setWindowTitle(QCoreApplication::translate("ThirdYearI", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("ThirdYearI", "Treca godina - informatika", nullptr));
        cbRBP->setText(QCoreApplication::translate("ThirdYearI", "Relacione baze podataka", nullptr));
        cbPPJ->setText(QCoreApplication::translate("ThirdYearI", "Prevo\304\221enje programskih jezika", nullptr));
        cbRG->setText(QCoreApplication::translate("ThirdYearI", "Ra\304\215unarska grafika", nullptr));
        cbVrv->setText(QCoreApplication::translate("ThirdYearI", "Verovatno\304\207a", nullptr));
        cbUNM->setText(QCoreApplication::translate("ThirdYearI", "Uvod u numeri\304\215ku matematiku", nullptr));
        cbVI->setText(QCoreApplication::translate("ThirdYearI", "Ve\305\241ta\304\215ka inteligencija", nullptr));
        cbIP1->setText(QCoreApplication::translate("ThirdYearI", "Istra\305\276ivanje podataka 1", nullptr));
        cbPP->setText(QCoreApplication::translate("ThirdYearI", "Programske paradigme", nullptr));
        cbIzborniR1->setText(QCoreApplication::translate("ThirdYearI", "Izborni predmet R1", nullptr));
        cbStat->setText(QCoreApplication::translate("ThirdYearI", "Statistika", nullptr));
        pbBack->setText(QCoreApplication::translate("ThirdYearI", "Nazad", nullptr));
        pbNext->setText(QCoreApplication::translate("ThirdYearI", "Dalje", nullptr));
        pbEnd->setText(QCoreApplication::translate("ThirdYearI", "Kraj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThirdYearI: public Ui_ThirdYearI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDYEARI_H
