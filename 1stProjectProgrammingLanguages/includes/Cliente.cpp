#include <iostream>
#include "cliente.h"
using namespace std;

Cliente::Cliente(string telefonoContacto, string direccionContacto, string nombre, string email) : UserDef(nombre, email, 1){
    this->telefonoContacto = telefonoContacto;
    this->direccionContacto = direccionContacto;
}

void Cliente::consultarProductos(){
    mostrarContenido();
    cout << "Estoy viendo los productos." << endl;
}

void Cliente::mostrarContenido(){
    cout << "Hola, soy " << this->getNombre() << ", mi email es: " << this->getMail() << " y soy un cliente." << endl;
    cout << "Mi telefono de contacto es: " << this->telefonoContacto << " y mi direccion es: " << this->direccionContacto << "." << endl;
}