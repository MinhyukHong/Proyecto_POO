#include <iostream>
#include "registrar.h"
#include "student.h"
#include "course.h"
#include "schedule.h"
#include "roster.h"

int main()
{
    Registrar registrar;

    Student student1("John");
    Student student2("Mary");
    Student student3("Ann");

    Course course1("CIS101", 4);
    Course course2("CIS102", 3);
    Course course3("CIS103", 3);

    registrar.enroll(student1, course1);
    registrar.enroll(student1, course2);
    registrar.enroll(student2, course1);
    registrar.enroll(student2, course3);
    registrar.enroll(student3, course1);

    Schedule schedule;
    schedule.addCourse("CIS101");
    schedule.addCourse("CIS102");
    schedule.addCourse("CIS103");

    schedule.addStudentCourse(student1.getName(), "CIS101");
    schedule.addStudentCourse(student1.getName(), "CIS102");
    schedule.addStudentCourse(student2.getName(), "CIS101");
    schedule.addStudentCourse(student2.getName(), "CIS103");
    schedule.addStudentCourse(student3.getName(), "CIS101");

    schedule.print(student1.getName());
    schedule.print(student2.getName());
    schedule.print(student3.getName());

    std::cout << std::endl;

    course1.print();
    course2.print();
    course3.print();

    std::cout << std::endl;

    return 0;
}