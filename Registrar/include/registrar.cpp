#include "registrar.h"

void Registrar::enroll(Student& student, Course& course) {
    students.push_back(&student);
    courses.push_back(&course);
    course.addStudent(&student);
}