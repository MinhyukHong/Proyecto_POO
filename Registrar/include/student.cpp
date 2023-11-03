#include "student.h"
#include <iostream>

Student::Student(const std::string& name) : name(name) {}

void Student::print() {
    std::cout << "Student name: " << name << std::endl;
    std::cout << "List of Courses\n" << std::endl;
    schedule.print(name);
    std::cout << std::endl;
}

std::string Student::getName() const {
    return name;
}