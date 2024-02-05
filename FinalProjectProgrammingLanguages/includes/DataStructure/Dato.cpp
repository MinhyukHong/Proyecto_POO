#include "Dato.h"
#include "../Persona.h"

using namespace std;

Dato::Dato(Persona participante1, Persona participante2, int emision){
    this->participante1 = participante1;
    this->participante2 = participante2;
    this->totalPremio = 0;
    this->emision = emision;
}

string Dato::toString(){
    return "EMISION NUMERO: "+ to_string(this->emision+1)+".\n Participante 1: "+this->participante1.toString()+".\n\n Participante 2: "+this->participante2.toString()+".\n Total de premios: "+to_string(this->totalPremio)+".";
}

Persona& Dato::getParticipante1(){
    return this->participante1;
}

Persona& Dato::getParticipante2(){
    return this->participante2;
}

int Dato::getTotalPremio(){
    return this->totalPremio;
}

int Dato::getEmision(){
    return this->emision;
}

void Dato::calculaPremio(){
    this->totalPremio = this->participante1.getDineroAsegurado() + this->participante2.getDineroAsegurado();
}