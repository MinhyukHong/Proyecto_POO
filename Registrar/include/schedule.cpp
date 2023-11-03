#include "schedule.h"
#include <iostream>

void Schedule::addCourse(const std::string& courseName) {
    courses.push_back(courseName);
}

void Schedule::addStudentCourse(const std::string& studentName, const std::string& courseName) {
    studentCourses.push_back(std::make_pair(studentName, courseName));
}

void Schedule::print(const std::string& studentName) const {
    if (studentName.empty()) {
        printAll();
    } else {
        std::cout << "Student name: " << studentName << std::endl;
        std::cout << "List of Courses" << std::endl;
        for (const auto& studentCourse : studentCourses) {
            if (studentCourse.first == studentName) {
                std::cout << studentCourse.second << std::endl;
            }
        }
        std::cout << std::endl;
    }
}

void Schedule::printAll() const {
    for (const auto& studentCourse : studentCourses) {
        std::cout << "Student name: " << studentCourse.first << std::endl;
        std::cout << "List of Courses" << std::endl;
        std::cout << studentCourse.second << std::endl;
        std::cout << std::endl;
    }
}