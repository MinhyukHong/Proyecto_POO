#include "course.h"
#include <iostream>

Course::Course(const std::string& name, int units) : name(name), units(units) {}

void Course::addStudent(Student* student) {
    roster.addStudent(student);
}

void Course::print() const {
    std::cout << "Course Name: " << name << std::endl;
    std::cout << "Number of Units: " << units << std::endl;
    std::cout << "List of Students" << std::endl;
    for (const auto& student : roster.getStudents()) {
        std::cout << student->getName() << std::endl;
    }
    std::cout << std::endl;
}

const Roster& Course::getRoster() const {
    return roster;
}