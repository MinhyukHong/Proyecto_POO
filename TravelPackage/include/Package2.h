#ifndef PACKAGE2_H
#define PACKAGE2_H

#include "vacation.h"

class Package2 : public Vacation {
public:
    void bookHotels() override;
    void bookFlights() override;
    void bookTours() override;
};

#endif