#ifndef DATO_H
#define DATO_H
#include <string>
#include "../Persona.h"

class Dato{
private:
    Persona participante1;
    Persona participante2;
    int totalPremio;
    int emision;

public:
    Dato(Persona participante1, Persona participante2, int emision);

    Persona& getParticipante1();
    Persona& getParticipante2();
    int getTotalPremio();
    int getEmision();
    void calculaPremio();
    std::string toString();
};

#endif // DATO_H
