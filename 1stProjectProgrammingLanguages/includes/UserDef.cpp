#include "UserDef.h"
#include <iostream>
using namespace std;
UserDef::UserDef(string nombre, string email){
    this->nombre = nombre;
    this->email = email;
    this->perfil = 0;
}
UserDef::UserDef(string nombre, string email, int perfil){
    this->nombre = nombre;
    this->email = email;
    this->perfil = perfil;
}

void UserDef::mostrarContenido(){
    cout << "Hola, soy " << this->nombre << " y mi email es: " << this->email << "." << endl;
}

void UserDef::setNombre(string nombre){
    this->nombre = nombre;
}
void UserDef::setMail(string email){
    this->email = email;
}
void UserDef::setPerfil(int perfil){
    this->perfil = perfil;
}
string UserDef::getNombre(){
    return this->nombre;
}
string UserDef::getMail(){
    return this->email;
}
int UserDef::getPerfil(){
    return this->perfil;
}