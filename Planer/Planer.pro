QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Exam.cpp \
    FirstYearI.cpp \
    FirstYearM.cpp \
    LoginPage.cpp \
    SecondYearI.cpp \
    Student.cpp \
    Subject.cpp \
    main.cpp

HEADERS += \
    Exam.hpp \
    FirstYearI.h \
    FirstYearM.h \
    LoginPage.h \
    SecondYearI.h \
    Student.hpp \
    Subject.hpp

FORMS += \
    FirstYearI.ui \
    FirstYearM.ui \
    LoginPage.ui \
    SecondYearI.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    i1o.json \
    i2o.json \
    i3o.json \
    oi_predmeti.json
