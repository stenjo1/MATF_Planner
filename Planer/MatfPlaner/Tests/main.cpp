#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <QtGui/QGuiApplication>
#include "student_test.cpp"
int main(int argc, char** argv)
{
    QGuiApplication app(argc, argv);
    return Catch::Session().run(argc, argv);
}
