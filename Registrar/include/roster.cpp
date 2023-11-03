#include "roster.h"
#include <iostream>

void Roster::addStudent(Student* student) {
    students.push_back(student);
}

void Roster::print() const {
    for (const auto& student : students) {
        std::cout << student->getName() << std::endl;
    }
}

const std::vector<Student*>& Roster::getStudents() const {
    return students;
}