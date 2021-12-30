/********************************************************************************
** Form generated from reading UI file 'InsertExams.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTEXAMS_H
#define UI_INSERTEXAMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InsertExams
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *examLabel;
    QSpacerItem *verticalSpacer_2;
    QComboBox *comboBox;
    QLabel *dateLabel;
    QCheckBox *checkBox1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *dateLineEdit1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *timeLineEdit1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QLineEdit *dateLineEdit11;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLineEdit *timeLineEdit11;
    QSpacerItem *verticalSpacer_4;
    QLabel *label;
    QCheckBox *checkBox2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *dateLineEdit2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *timeLineEdit2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QLineEdit *dateLineEdit21;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QLineEdit *lineEdit_4;
    QLabel *errorLabel;
    QSpacerItem *verticalSpacer_3;
    QLabel *urlLabel;
    QLineEdit *urlLineEdit;
    QSpacerItem *verticalSpacer;
    QLabel *label_7;
    QSlider *horizontalSlider;
    QSpacerItem *horizontalSpacer;
    QPushButton *addExamButton;
    QPushButton *clearWidgetButton;
    QPushButton *endInputExamButton;

    void setupUi(QWidget *InsertExams)
    {
        if (InsertExams->objectName().isEmpty())
            InsertExams->setObjectName(QString::fromUtf8("InsertExams"));
        InsertExams->resize(600, 711);
        verticalLayout = new QVBoxLayout(InsertExams);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_6 = new QLabel(InsertExams);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setPointSize(15);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_6);

        examLabel = new QLabel(InsertExams);
        examLabel->setObjectName(QString::fromUtf8("examLabel"));

        verticalLayout->addWidget(examLabel);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        comboBox = new QComboBox(InsertExams);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QFont font1;
        font1.setPointSize(12);
        comboBox->setFont(font1);

        verticalLayout->addWidget(comboBox);

        dateLabel = new QLabel(InsertExams);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        QFont font2;
        font2.setPointSize(14);
        dateLabel->setFont(font2);

        verticalLayout->addWidget(dateLabel);

        checkBox1 = new QCheckBox(InsertExams);
        checkBox1->setObjectName(QString::fromUtf8("checkBox1"));

        verticalLayout->addWidget(checkBox1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(InsertExams);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        dateLineEdit1 = new QLineEdit(InsertExams);
        dateLineEdit1->setObjectName(QString::fromUtf8("dateLineEdit1"));

        horizontalLayout_2->addWidget(dateLineEdit1);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(InsertExams);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        timeLineEdit1 = new QLineEdit(InsertExams);
        timeLineEdit1->setObjectName(QString::fromUtf8("timeLineEdit1"));

        horizontalLayout_3->addWidget(timeLineEdit1);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_8 = new QLabel(InsertExams);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);

        dateLineEdit11 = new QLineEdit(InsertExams);
        dateLineEdit11->setObjectName(QString::fromUtf8("dateLineEdit11"));

        horizontalLayout->addWidget(dateLineEdit11);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_9 = new QLabel(InsertExams);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_6->addWidget(label_9);

        timeLineEdit11 = new QLineEdit(InsertExams);
        timeLineEdit11->setObjectName(QString::fromUtf8("timeLineEdit11"));

        horizontalLayout_6->addWidget(timeLineEdit11);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        label = new QLabel(InsertExams);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font2);

        verticalLayout->addWidget(label);

        checkBox2 = new QCheckBox(InsertExams);
        checkBox2->setObjectName(QString::fromUtf8("checkBox2"));

        verticalLayout->addWidget(checkBox2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(InsertExams);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        dateLineEdit2 = new QLineEdit(InsertExams);
        dateLineEdit2->setObjectName(QString::fromUtf8("dateLineEdit2"));

        horizontalLayout_4->addWidget(dateLineEdit2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(InsertExams);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        timeLineEdit2 = new QLineEdit(InsertExams);
        timeLineEdit2->setObjectName(QString::fromUtf8("timeLineEdit2"));

        horizontalLayout_5->addWidget(timeLineEdit2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_10 = new QLabel(InsertExams);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_7->addWidget(label_10);

        dateLineEdit21 = new QLineEdit(InsertExams);
        dateLineEdit21->setObjectName(QString::fromUtf8("dateLineEdit21"));

        horizontalLayout_7->addWidget(dateLineEdit21);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_11 = new QLabel(InsertExams);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_8->addWidget(label_11);

        lineEdit_4 = new QLineEdit(InsertExams);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_8->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_8);

        errorLabel = new QLabel(InsertExams);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));

        verticalLayout->addWidget(errorLabel);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        urlLabel = new QLabel(InsertExams);
        urlLabel->setObjectName(QString::fromUtf8("urlLabel"));
        urlLabel->setFont(font2);

        verticalLayout->addWidget(urlLabel);

        urlLineEdit = new QLineEdit(InsertExams);
        urlLineEdit->setObjectName(QString::fromUtf8("urlLineEdit"));

        verticalLayout->addWidget(urlLineEdit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_7 = new QLabel(InsertExams);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font2);

        verticalLayout->addWidget(label_7);

        horizontalSlider = new QSlider(InsertExams);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMouseTracking(true);
        horizontalSlider->setContextMenuPolicy(Qt::DefaultContextMenu);
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(5);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksBelow);
        horizontalSlider->setTickInterval(1);

        verticalLayout->addWidget(horizontalSlider);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        addExamButton = new QPushButton(InsertExams);
        addExamButton->setObjectName(QString::fromUtf8("addExamButton"));

        verticalLayout->addWidget(addExamButton);

        clearWidgetButton = new QPushButton(InsertExams);
        clearWidgetButton->setObjectName(QString::fromUtf8("clearWidgetButton"));

        verticalLayout->addWidget(clearWidgetButton);

        endInputExamButton = new QPushButton(InsertExams);
        endInputExamButton->setObjectName(QString::fromUtf8("endInputExamButton"));

        verticalLayout->addWidget(endInputExamButton);


        retranslateUi(InsertExams);

        QMetaObject::connectSlotsByName(InsertExams);
    } // setupUi

    void retranslateUi(QWidget *InsertExams)
    {
        InsertExams->setWindowTitle(QCoreApplication::translate("InsertExams", "Ispit", nullptr));
        label_6->setText(QCoreApplication::translate("InsertExams", "<html><head/><body><p><span style=\" font-size:26pt;\">Podaci o ispitu</span></p></body></html>", nullptr));
        examLabel->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("InsertExams", "Odabir predmeta:", nullptr));

        dateLabel->setText(QCoreApplication::translate("InsertExams", "Ispit u prvom roku:", nullptr));
        checkBox1->setText(QCoreApplication::translate("InsertExams", "Presko\304\215i unos", nullptr));
        label_2->setText(QCoreApplication::translate("InsertExams", "Datum :", nullptr));
        dateLineEdit1->setPlaceholderText(QCoreApplication::translate("InsertExams", "dd.mm.yyyy.", nullptr));
        label_3->setText(QCoreApplication::translate("InsertExams", "Vreme :           ", nullptr));
        timeLineEdit1->setPlaceholderText(QCoreApplication::translate("InsertExams", "hh:mm", nullptr));
        label_8->setText(QCoreApplication::translate("InsertExams", "Datum usmenog ispita:", nullptr));
        dateLineEdit11->setPlaceholderText(QCoreApplication::translate("InsertExams", "dd.mm.yyyy.", nullptr));
        label_9->setText(QCoreApplication::translate("InsertExams", "Vreme usmenog ispita:", nullptr));
        timeLineEdit11->setPlaceholderText(QCoreApplication::translate("InsertExams", "hh:mm", nullptr));
        label->setText(QCoreApplication::translate("InsertExams", "Ispit u drugom roku:", nullptr));
        checkBox2->setText(QCoreApplication::translate("InsertExams", "Presko\304\215i unos", nullptr));
        label_4->setText(QCoreApplication::translate("InsertExams", "Datum :", nullptr));
        dateLineEdit2->setPlaceholderText(QCoreApplication::translate("InsertExams", "dd.mm.yyyy.", nullptr));
        label_5->setText(QCoreApplication::translate("InsertExams", "Vreme :           ", nullptr));
        timeLineEdit2->setPlaceholderText(QCoreApplication::translate("InsertExams", "hh:mm", nullptr));
        label_10->setText(QCoreApplication::translate("InsertExams", "Datum usmenog ispita:", nullptr));
        dateLineEdit21->setPlaceholderText(QCoreApplication::translate("InsertExams", "dd.mm.yyyy.", nullptr));
        label_11->setText(QCoreApplication::translate("InsertExams", "Vreme usmenog ispita:", nullptr));
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("InsertExams", "hh:mm", nullptr));
        errorLabel->setText(QString());
        urlLabel->setText(QCoreApplication::translate("InsertExams", "URL do stranice za proveravanje rezultata:", nullptr));
        label_7->setText(QCoreApplication::translate("InsertExams", "Va\305\276nost ispita (1-5 rastu\304\207e)", nullptr));
        addExamButton->setText(QCoreApplication::translate("InsertExams", "Dodaj ispit", nullptr));
        clearWidgetButton->setText(QCoreApplication::translate("InsertExams", "O\304\215isti prozor", nullptr));
        endInputExamButton->setText(QCoreApplication::translate("InsertExams", "Zavr\305\241i unos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InsertExams: public Ui_InsertExams {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTEXAMS_H
