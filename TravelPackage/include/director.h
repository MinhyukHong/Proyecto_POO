#ifndef DIRECTOR_H
#define DIRECTOR_H
#include <string>
#include <iostream>
#include "vacation.h"
using namespace std;

class Director {
public:
    static Vacation* vacation;
    static void book(int type);
};
#endif
