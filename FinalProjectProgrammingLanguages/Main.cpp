#include <iostream>
#include "includes/Game.h"
#include "includes/DataStructure/LinkedList.h"
#include "includes/Persona.h"
using namespace std;

int main(){
    cout << "Bienvenido a quien quiere ser millonario." << endl;
    cout << "RESUMEN SEMANAL" << endl;
    Game juego;
    juego.simularSemana();
    juego.mostrarResultados();
    return 0;
}