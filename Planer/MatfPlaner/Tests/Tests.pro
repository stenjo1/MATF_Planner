TEMPLATE = app
QT += gui

CONFIG += c++17
QMAKE_CXXFLAGS = "-Wa,-mbig-obj"

HEADERS += \
    catch.hpp

SOURCES += \
    main.cpp \
    tst_test.cpp


