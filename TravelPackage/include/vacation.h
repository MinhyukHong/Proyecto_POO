#ifndef VACATION_H
#define VACATION_H

class Vacation {
public:
    virtual void bookHotels() = 0;
    virtual void bookFlights() = 0;
    virtual void bookTours() = 0;
    virtual ~Vacation() {}
};

#endif