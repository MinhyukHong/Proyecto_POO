#ifndef __PERSONA_H__
#define __PERSONA_H__
#include <string>



class Persona{
private:
    std::string nombre, numTelefono, email;
    bool llamada, publico, fifthyFifthy;
    int ultimaPregunta, dineroAsegurado, tiempoClasificacion;
    std::string creaNombre();
    std::string creaMail(std::string nombre);
    std::string creaTelefono();
public:
    Persona();
    std::string getNombre();
    std::string getNumTelefono();
    std::string getEmail();
    bool getLlamada();
    bool getPublico();
    bool getFifthyFifthy();
    int getUltimaPregunta();
    int getDineroAsegurado();
    int getTiempoClasificacion();
    void setLlamada(bool llamada);
    void setPublico(bool publico);
    void setFifthyFifthy(bool fifthyFifthy);
    void setUltimaPregunta(int ultimaPregunta);
    void setDineroAsegurado(int dineroAsegurado);

    std::string toString();
};

#endif // __PERSONA_H__