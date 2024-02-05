#include "Persona.h"
#include <vector>
#include <string>
#include <random>
#include <iostream>

using namespace std;

//Funcion que sintetiza la clase random y la generacion de numeros aleatorios en pro del codigo limpio.
int randomGenPersona(int lwrIdx, int highIdx){
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<mt19937::result_type> random(lwrIdx,highIdx);
    return random(rng);
}

//Genera nombre aleatorio
string Persona::creaNombre(){
    vector<string> nombres = {"Santiago", "Juan", "Andres", "Edison", "Oscar", "Eduardo", "Felipe", "Samuel", "Mateo", "Sofia","Salome","Andrea","Susana","Juliana","Maria","Nelly","Anderson","Jesus", "Jose", "Bernardo","Daniel", "Miguel", "Edwin", "Diego", "Cecilia", "Roberto", "Carolina", "Franciso", "Leidy", "Mauicio", "Jacobo", "Leon", "Alejandra", "Catalina", "Nidia", "Cristiano"};
    vector<string> apellidos = {"Idarraga", "Cardona", "Escobar", "Valencia", "Garcia", "Solis", "Usma", "Villa", "Garcia", "Ceballos", "Duarte", "Rojas", "Arcila", "Alzate", "Lopez", "Carrero", "Duque", "Mier", "Castillo", "Aguirre", "Zapata", "Ocampo", "Salazar", "Mosquera", "Candelo", "Andrade", "Alvez", "Angel", "Mejia", "Ronaldo", "Barrera", "Burgos", "Hincapie", "Sepulveda", "Padilla", "Uribe"};
    return nombres[randomGenPersona(0, nombres.size()-1)] + "_" + apellidos[randomGenPersona(0, apellidos.size()-1)];
}

//Genera nombre aleatorio a partir del nombre
string Persona::creaMail(string nombre){
    vector<string> mail = {"@gmail.com", "@hotmail.com", "@eafit.edu.co", "@yahoo.com"};
    return nombre + mail[randomGenPersona(0, mail.size()-1)];
}

//Genera numero de telefono alateorio
string Persona::creaTelefono(){
    string telefonoContacto = "";
    for(int i=0; i<=10; i++){
        telefonoContacto = telefonoContacto + to_string(randomGenPersona(0,9));
    }
    return telefonoContacto;
}

Persona::Persona(){
    this->nombre = creaNombre();
    this->email = creaMail(this->nombre);
    this->numTelefono = creaTelefono();
    this->llamada = false;
    this->fifthyFifthy = false;
    this->publico = false;
    this->tiempoClasificacion = randomGenPersona(1, 60);
    this->dineroAsegurado = 0;
    this->ultimaPregunta = 0;
}

string Persona::getNombre(){
    return this->nombre;
}

string Persona::getEmail(){
    return this->email;
}

string Persona::getNumTelefono(){
    return this->numTelefono;
}

bool Persona::getFifthyFifthy(){
    return this->fifthyFifthy;
}

bool Persona::getLlamada(){
    return this->llamada;
}

bool Persona::getPublico(){
    return this->publico;
}

int Persona::getDineroAsegurado(){
    return this->dineroAsegurado;
}

int Persona::getUltimaPregunta(){
    return this->ultimaPregunta;
}

int Persona::getTiempoClasificacion(){
    return this->tiempoClasificacion;
}

void Persona::setLlamada(bool llamada){
    this->llamada = llamada;
}

void Persona::setPublico(bool publico){
    this->publico = publico;
}

void Persona::setFifthyFifthy(bool fifthyFifthy){
    this->fifthyFifthy = fifthyFifthy;
}

void Persona::setUltimaPregunta(int ultimaPregunta){
    this->ultimaPregunta = ultimaPregunta;
}

void Persona::setDineroAsegurado(int dineroAsegurado){
    this->dineroAsegurado = dineroAsegurado;
}

string Persona::toString(){
    string mensaje = "[Datos: "+this->nombre+ ", " + this->email + ", " + this->numTelefono + "]\n";
    string comodines = "";
    if(!this->fifthyFifthy && !this->publico && !this->llamada){
        comodines = "[No utilizo comodines]\n";
        return mensaje + comodines + "[Ultima pregunta: "+to_string(this->ultimaPregunta)+"]\n[Premio: $"+to_string(this->dineroAsegurado)+"]";
    }
    comodines = "[Comodines:";
    if(this->llamada){
        comodines = comodines+" Utilizo la llamada";
    }
    if(this->publico){
        comodines = comodines+" Utilizo ayuda del publico";
    }
    if(this->fifthyFifthy){
        comodines = comodines+" Utilizo el 50/50";
    }
    return mensaje + comodines+"]\n[Ultima pregunta: "+to_string(this->ultimaPregunta)+"]\n[Premio: $"+to_string(this->dineroAsegurado)+"]";
}