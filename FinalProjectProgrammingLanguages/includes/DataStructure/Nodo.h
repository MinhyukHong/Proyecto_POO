#ifndef NODO_H
#define NODO_H

#include "Dato.h"

class Nodo {
public:
    Nodo(Dato* datos);

    Dato* getDatos() const;
    void setDatos(Dato* datos);
    Nodo* getSiguiente() const;
    void setSiguiente(Nodo* nodo);

private:
    Dato* datos;
    Nodo* siguiente;
};

#endif // NODO_H
