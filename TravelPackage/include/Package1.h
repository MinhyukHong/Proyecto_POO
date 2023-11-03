#ifndef PACKAGE1_H
#define PACKAGE1_H

#include "vacation.h"

class Package1 : public Vacation {
public:
    void bookHotels() override;
    void bookFlights() override;
    void bookTours() override;
};

#endif