#include "catch.hpp"
#include "../headers/Student.h"

TEST_CASE("Testing student class", "[student]")
{
    SECTION("If nothing is passed as parameter, student constructor creates student with empty strings for name and email"){
        Student student;
        QString expectedName = "";
        QString expectedEmail = "";
        QString name = student.getName();
        QString email = student.getEmail();

        REQUIRE_FALSE(name.compare(expectedName));
        REQUIRE_FALSE(email.compare(expectedEmail));

    }

    SECTION("If nothing is passed as parameter, student constructor creates student with empty name")
    {
        Student student;
        QString expectedName = "";

        QString name = student.getName();

        REQUIRE_FALSE(name.compare(expectedName));
    }

    SECTION("In order to read from student.json, that file should exist"){
        Student student;
        QDir targetDir("../MatfPlaner/resources");
        QString path = targetDir.absolutePath() + "/student.json";
        QFile jsonFile(path);
        REQUIRE(jsonFile.exists());

    }

    SECTION("If content of student.json is \"{}\" , then student name and email are empty"){
        Student student;
        QDir targetDir("../MatfPlaner/resources");
        QString path = targetDir.absolutePath() + "/student.json";
        std::string content;
        QFile jsonFile(path);
        jsonFile.open(QIODevice::ReadOnly | QIODevice::Text);
        content = jsonFile.readAll().toStdString();
        jsonFile.close();
        student.clearStudentFile();
        student.readFromJson();
        if(content.compare("{}")){
            REQUIRE_FALSE(student.getName().compare(""));
        }


    }
}
