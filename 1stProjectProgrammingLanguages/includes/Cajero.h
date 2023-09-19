#ifndef CAJERO_H
#define CAJERO_H
#include "UserDef.h"
#include <string>

class Cajero : public UserDef {
private:
    std::string claveCajero;
public:
    Cajero(std::string claveCajero, std::string nombre, std::string email);

    void registrarVenta();
    void mostrarContenido();
};

#endif