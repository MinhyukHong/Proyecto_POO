#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "schedule.h"

class Student {
public:
    Student(const std::string& name);
    void print();
    std::string getName() const; // 선언만 존재하고, 정의는 student.cpp 파일에 있습니다.
private:
    std::string name;
    Schedule schedule;
};

#endif