#ifndef ADMIN_H
#define ADMIN_H
#include "UserDef.h"
#include "Cajero.h"
#include "Cliente.h"
#include <string>
#include <vector>

class Admin : public UserDef {
private:
    std::string claveAdmin;
    std::vector<Cajero> cajeros;
    std::vector<Cliente> clientes;
public:
    Admin(std::string claveAdmin, std::string nombre, std::string email);

    Cliente crearNuevoClienteMan();
    Cajero crearNuevoCajeroMan();
    Cliente crearNuevoClienteAuto();
    Cajero crearNuevoCajeroAuto();
    void mostrarPersonal();
    void mostrarClientes();
    void mostrarContenido();
};

#endif