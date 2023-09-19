#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include "UserDef.h"

class Cliente : public UserDef {
private:
    std::string telefonoContacto;
    std::string direccionContacto;

public:
    Cliente(std::string telefonoContacto, std::string direccionContacto, std::string nombre, std::string email);
    void consultarProductos();
    void mostrarContenido();
};

#endif