#ifndef PACKAGE3_H
#define PACKAGE3_H

#include "vacation.h"

class Package3 : public Vacation {
public:
    void bookHotels() override;
    void bookFlights() override;
    void bookTours() override;
};

#endif