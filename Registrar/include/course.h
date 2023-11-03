#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "roster.h"

class Course {
public:
    Course(const std::string& name, int units);
    void addStudent(Student* student);
    void print() const;
    const Roster& getRoster() const;

private:
    std::string name;
    int units;
    Roster roster;
};

#endif