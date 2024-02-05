#ifndef __GAME_H__
#define __GAME_H__

#include "./DataStructure/LinkedList.h"

class Game{
private:
    LinkedList resumenSemanal;
    int totalPremios;
    int determinarPremio(int nivel);
    void juegoParticipante(Persona& persona);
    bool respondePregunta(int cantidad);
    bool respondePreguntaComodin();
public:
    Game();
    void simularSemana();
    void mostrarResultados();

};

#endif // __GAME_H__