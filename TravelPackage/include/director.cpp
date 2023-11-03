#include "director.h"
#include <iostream>
#include "Package1.h"
#include "Package2.h"
#include "Package3.h"

using namespace std;

Vacation* Director::vacation = nullptr;

void Director::book(int packageType) {
    if (packageType == 1) {
        vacation = new Package1();
        cout << "This is information about your vacation:" << endl;
        vacation->bookHotels();
        vacation->bookFlights();
        cout << "Run:" << endl;
    } else if (packageType == 2) {
        vacation = new Package2();
        cout << "This is information about your vacation:" << endl;
        vacation->bookHotels();
        vacation->bookTours();
    } else if (packageType == 3) {
        vacation = new Package3();
        vacation->bookHotels();
        vacation->bookFlights();
        vacation->bookTours();
    } else {
        cout << "Invalid vacation type." << endl;
        return;
    }

    delete vacation;
}
