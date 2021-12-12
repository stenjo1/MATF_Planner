QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
     sources/MailSender.cpp \
     sources/Request.cpp \
     sources/Utils.cpp \
     sources/InsertExams.cpp \
     sources/Calendar.cpp \
     sources/Exam.cpp \
     sources/FirstYearI.cpp \
     sources/FirstYearM.cpp \
     sources/FourthYearI.cpp \
     sources/FourthYearMR.cpp \
     sources/LoginPage.cpp \
     sources/SecondYearI.cpp \
     sources/SecondYearMR.cpp \
     sources/Student.cpp \
     sources/Subject.cpp \
     sources/ThirdYearI.cpp \
     sources/ThirdYearMR.cpp \
     sources/main.cpp


HEADERS += \
    headers/MailSender.h \
    headers/Request.h \
    headers/Utils.h \
    headers/InsertExams.h \
    headers/Calendar.h \
    headers/Exam.hpp \
    headers/FirstYearI.h \
    headers/FirstYearM.h \
    headers/FourthYearI.h \
    headers/FourthYearMR.h \
    headers/LoginPage.h \
    headers/SecondYearI.h \
    headers/SecondYearMR.h \
    headers/Student.hpp \
    headers/Subject.hpp \
    headers/ThirdYearI.h \
    headers/ThirdYearMR.h \


FORMS += \
    forms/InsertExams.ui \
    forms/Calendar.ui \
    forms/FirstYearI.ui \
    forms/FirstYearM.ui \
    forms/FourthYearI.ui \
    forms/FourthYearMR.ui \
    forms/LoginPage.ui \
    forms/SecondYearI.ui \
    forms/SecondYearMR.ui \
    forms/ThirdYearI.ui \
    forms/ThirdYearMR.ui \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    resources/MailFile \
    resources/exams.json \
    resources/i1o.json \
    resources/i2o.json \
    resources/i3o.json \
    resources/oi_predmeti.json

unix|win32: LIBS += -L$$PWD/../../../../../../usr/lib/x86_64-linux-gnu/ -lcurl

INCLUDEPATH += $$PWD/../../../../../../usr/include/x86_64-linux-gnu/curl
DEPENDPATH += $$PWD/../../../../../../usr/include/x86_64-linux-gnu/curl

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/../../../../../../usr/lib/x86_64-linux-gnu/curl.lib
else:unix|win32-g++: PRE_TARGETDEPS += $$PWD/../../../../../../usr/lib/x86_64-linux-gnu/libcurl.a
