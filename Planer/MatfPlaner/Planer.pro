QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
     #sources/MailSender.cpp
     sources/ScheduleSuggestion.cpp \
     sources/Window.cpp \
     sources/ExamsOverview.cpp \
     sources/Profile.cpp \
     sources/Request.cpp \
     sources/Utils.cpp \
     sources/InsertExams.cpp \
     sources/Calendar.cpp \
     sources/Exam.cpp \
     sources/LoginPage.cpp \
     sources/Student.cpp \
     sources/Subject.cpp \
     sources/main.cpp


HEADERS += \
    #headers/MailSender.h
    headers/ScheduleSuggestion.h \
    headers/Window.h \
    headers/Request.h \
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
    forms/LoginPage.ui \
    forms/Profile.ui \
    forms/ExamsOverview.ui \
    forms/ScheduleSuggestion.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    output/schedule.json \
    output/mail.txt \
    resources/images/check.png \
    resources/images/slika.png \
    resources/oi_predmeti.json \
    resources/student_info/exams.json \
    resources/student_info/student.json \
    resources/styles/style.qss \
    resources/styles/style2.qss \
    resources/styles/style3.qss \
    resources/subjects/i1o.json \
    resources/subjects/i2o.json \
    resources/subjects/i3o.json \
    resources/subjects/i4o.json \
    resources/subjects/r1o.json \
    resources/subjects/r2o.json \
    resources/subjects/r3o.json \
    resources/subjects/r4o.json


#unix|win32: LIBS += -L$$PWD/../../../../../../usr/lib/x86_64-linux-gnu/ -lcurl

#INCLUDEPATH += $$PWD/../../../../../../usr/include/x86_64-linux-gnu/curl
#DEPENDPATH += $$PWD/../../../../../../usr/include/x86_64-linux-gnu/curl

#win32:!win32-g++: PRE_TARGETDEPS += $$PWD/../../../../../../usr/lib/x86_64-linux-gnu/curl.lib
#else:unix|win32-g++: PRE_TARGETDEPS += $$PWD/../../../../../../usr/lib/x86_64-linux-gnu/libcurl.a

