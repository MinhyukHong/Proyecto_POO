#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <iostream>
#include <string>
#include <vector>

class Schedule {
public:
    void addCourse(const std::string& courseName);
    void addStudentCourse(const std::string& studentName, const std::string& courseName);
    void print(const std::string& studentName) const;
    void printAll() const;

private:
    std::vector<std::string> courses;
    std::vector<std::pair<std::string, std::string> > studentCourses;
};

#endif