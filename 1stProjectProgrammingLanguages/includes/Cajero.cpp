#include "Cajero.h"
#include <iostream>

using namespace std;

Cajero::Cajero(string claveCajero, string nombre, string email) : UserDef(nombre, email, 2){
    this->claveCajero = claveCajero;
}

void Cajero::registrarVenta(){
    mostrarContenido();
    cout << "Estoy registrando una venta." << endl;
}

void Cajero::mostrarContenido(){
    cout << "Hola, soy " << this->getNombre() << ", mi email es: " << this->getMail() << " y soy un cajero." << endl;
    cout << "Mi clave personal es: " << this->claveCajero << endl;
}