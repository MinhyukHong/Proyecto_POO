#ifndef REGISTRAR_H
#define REGISTRAR_H

#include "student.h"
#include "course.h"
#include <vector>

class Registrar {
public:
    void enroll(Student& student, Course& course);
    const std::vector<Course*>& getCourses() const;

private:
    std::vector<Student*> students;
    std::vector<Course*> courses;
};

#endif