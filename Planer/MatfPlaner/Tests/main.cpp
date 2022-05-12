#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "student_test.cpp"
#include <QtGui/QGuiApplication>
int main(int argc, char **argv)
{
    QGuiApplication app(argc, argv);
    return Catch::Session().run(argc, argv);
}
