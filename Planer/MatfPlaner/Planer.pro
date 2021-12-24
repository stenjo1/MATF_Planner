QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
#     sources/ThirdYearI.cpp \
#     sources/ThirdYearMR.cpp \
#     sources/SecondYearI.cpp \
#     sources/SecondYearMR.cpp \
#     sources/FirstYearI.cpp \
#     sources/FirstYearM.cpp \
#     sources/FourthYearI.cpp \
#     sources/FourthYearMR.cpp \
     #sources/MailSender.cpp
     sources/Window.cpp \
     sources/ExamsOverview.cpp \
     sources/Profile.cpp \
     sources/Request.cpp \
     sources/Schedule.cpp \
     sources/Utils.cpp \
     sources/InsertExams.cpp \
     sources/Calendar.cpp \
     sources/Exam.cpp \
     sources/LoginPage.cpp \
     sources/Student.cpp \
     sources/Subject.cpp \
     sources/main.cpp


HEADERS += \
#    headers/FirstYearI.h \
#    headers/FirstYearM.h \
#    headers/FourthYearI.h \
#    headers/FourthYearMR.h \
#    headers/SecondYearI.h \
#    headers/SecondYearMR.h \
#    headers/ThirdYearI.h \
#    headers/ThirdYearMR.h \
    #headers/MailSender.h
    headers/Window.h \
    headers/Request.h \
    headers/Schedule.h \
    headers/Utils.h \
    headers/InsertExams.h \
    headers/Calendar.h \
    headers/Exam.h \
    headers/LoginPage.h \
    headers/Student.h \
    headers/Subject.h \
    headers/Profile.h \
    headers/ExamsOverview.h




FORMS += \
    forms/InsertExams.ui \
    forms/Calendar.ui \
#    forms/FirstYearI.ui \
#    forms/FirstYearM.ui \
#    forms/FourthYearI.ui \
#    forms/FourthYearMR.ui \
    forms/LoginPage.ui \
#    forms/SecondYearI.ui \
#    forms/SecondYearMR.ui \
#    forms/ThirdYearI.ui \
#    forms/ThirdYearMR.ui \
    forms/Profile.ui \
    forms/ExamsOverview.ui

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
    resources/i4o.json \
    resources/oi_predmeti.json \
    resources/r1o.json \
    resources/r2o.json \
    resources/r3o.json \
    resources/r4o.json \
    resources/student.json

#unix|win32: LIBS += -L$$PWD/../../../../../../usr/lib/x86_64-linux-gnu/ -lcurl

#INCLUDEPATH += $$PWD/../../../../../../usr/include/x86_64-linux-gnu/curl
#DEPENDPATH += $$PWD/../../../../../../usr/include/x86_64-linux-gnu/curl

#win32:!win32-g++: PRE_TARGETDEPS += $$PWD/../../../../../../usr/lib/x86_64-linux-gnu/curl.lib
#else:unix|win32-g++: PRE_TARGETDEPS += $$PWD/../../../../../../usr/lib/x86_64-linux-gnu/libcurl.a

