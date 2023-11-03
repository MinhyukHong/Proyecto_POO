#ifndef ROSTER_H
#define ROSTER_H

#include <vector>
#include "student.h"

class Roster {
public:
    void addStudent(Student* student);
    void print() const;
    const std::vector<Student*>& getStudents() const;

private:
    std::vector<Student*> students;
};

#endif