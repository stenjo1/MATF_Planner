TEMPLATE = app
QT += gui

CONFIG += c++17
#QMAKE_CXXFLAGS = "-Wa,-mbig-obj"


HEADERS += \
    headers/Student.h \
    headers/Subject.h \
    tests/catch.hpp

SOURCES += \
    sources/Student.cpp \
    sources/Subject.cpp \
    tests/main.cpp \
    tests/student_test.cpp


