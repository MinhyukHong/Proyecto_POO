#include "Game.h"
#include "DataStructure/LinkedList.h"
#include <iostream>
#include <random>
#include <vector>

using namespace std;

//Funcion que sintetiza la clase random y la generacion de numeros aleatorios en pro del codigo limpio.
int randomGen(int lwrIdx, int highIdx){
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<mt19937::result_type> random(lwrIdx,highIdx);
    return random(rng);
}
//Funcion que genera un numero con coma flotante para el uso de comodines tipo publico y llamada
double ayudaComodin(double lwrIdx, double highIdx){
    random_device dev;
    mt19937 rng(dev());
    // uniform_real_distribution<mt19937::result_type> random(0.0f, 1.0f);
    uniform_real_distribution<double> random(lwrIdx, highIdx);
    return random(rng);
}

Game::Game(){
    LinkedList resumenSemanal;
    this->totalPremios = 0;
}

void Game::simularSemana(){
    for(int i=0;i<5;i++){
        Dato* emision = new Dato(Persona(), Persona(), i);
        juegoParticipante(emision->getParticipante1());
        juegoParticipante(emision->getParticipante2());
        emision->calculaPremio();
        this->resumenSemanal.agregar(emision);
    }
}

void Game::juegoParticipante(Persona& jugador){
    bool continua = true;
    int nivel = 0;
    while(continua && nivel < 15){
        if(jugador.getFifthyFifthy() && jugador.getLlamada() && jugador.getPublico()){
            continua = respondePregunta(4);
        }else{
        int opc1 = randomGen(0,1);
            if(opc1 == 1){
                if(!jugador.getLlamada()){
                    continua = respondePreguntaComodin();
                    jugador.setLlamada(true);
                }else if(!jugador.getPublico()){
                    continua = respondePreguntaComodin();
                    jugador.setPublico(true);
                }
                else{
                    continua = respondePregunta(2);
                    jugador.setFifthyFifthy(true);
                }
            }else{
                continua = respondePregunta(4);
            }
        }
        if(continua){
            nivel++;
            int plantar = randomGen(0,1);
            if(plantar == 1){
                jugador.setUltimaPregunta(nivel);
                int premio = determinarPremio(nivel);
                jugador.setDineroAsegurado(premio);
                this->totalPremios+= premio;
                continua = false;
                return;
            }
        }else{
            jugador.setUltimaPregunta(nivel);
            int premio;
            if(nivel < 5){premio = 0;}
            else if(nivel < 10){premio = 1000000;}
            else {premio = 10000000;}
            this->totalPremios+= premio;
            jugador.setDineroAsegurado(premio);
            continua = false;
            return;
        }
    }
    if(continua){
        jugador.setUltimaPregunta(nivel);
        jugador.setDineroAsegurado(300000000);
        this->totalPremios+=300000000;
    }
}

bool Game::respondePregunta(int cantidad){
    int opcCorrecta = randomGen(1,cantidad);
    int opcParticipante = randomGen(1,opcCorrecta);
    return opcCorrecta == opcParticipante;
}

bool Game::respondePreguntaComodin(){
    int opcCorrecta = randomGen(1,4);
    vector<double> posibilidades = {0.0, 0.0, 0.0, 0.0};
    double porcentajeAcumulado = 1.0;
    int posibleCorrecta = 0;
    double mayor = 0.0;
    for(int i=0;i<4;i++){
        posibilidades[i] = ayudaComodin(0.0, porcentajeAcumulado);
        porcentajeAcumulado-=posibilidades[i];
        if(posibilidades[i] > mayor){posibleCorrecta = i;}
        if(porcentajeAcumulado == 0.0){break;}
    }
    int tomaODeja = randomGen(0,1);
    if(tomaODeja == 0){
        return respondePregunta(4);
    }else{
        return (posibleCorrecta+1) == opcCorrecta;
    }
}

int Game::determinarPremio(int nivel){
    switch (nivel){
    case 1:
        return 100000;
    case 2:
        return 200000;
    case 3:
        return 300000;
    case 4:
        return 500000;
    case 5:
        return 1000000;
    case 6:
        return 2000000;
    case 7:
        return 3000000;
    case 8:
        return 5000000;
    case 9:
        return 7000000;
    case 10:
        return 10000000;
    case 11:
        return 12000000;
    case 12:
        return 20000000;
    case 13:
        return 50000000;
    case 14:
        return 100000000;
    default:
        return 0;
    }
}

void Game::mostrarResultados() {
    this->resumenSemanal.mostrar();
    cout << "TOTAL PREMIOS ESTA SEMANA: $" << this->totalPremios << endl;
}