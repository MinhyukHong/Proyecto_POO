#ifndef USERDEF_H
#define USERDEF_H
#include <string>

class UserDef {
private:
    std::string nombre;
    std::string email;
    int perfil;

public:
    UserDef(std::string nombre, std::string email);
    UserDef(std::string nombre, std::string email, int perfil);
    void mostrarContenido();
    void setNombre(std::string nombre);
    void setMail(std::string email);
    void setPerfil(int perfil);
    std::string getNombre();
    std::string getMail();
    int getPerfil();
};

#endif