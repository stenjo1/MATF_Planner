TEMPLATE = app
QT += gui

CONFIG += c++17
QMAKE_CXXFLAGS = "-Wa,-mbig-obj"

INCLUDEPATH +="C:\Users\saram\Desktop\MatfPlaner\15-Matf-Planer\Planer\MatfPlaner"

HEADERS += \
    ../headers/Student.h \
    ../headers/Subject.h
    catch.hpp

SOURCES += \
    ../sources/Student.cpp \
    ../sources/Subject.cpp \
    main.cpp \
    student_test.cpp


