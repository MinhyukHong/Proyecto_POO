#ifndef LinkedList_H
#define LinkedList_H
#include <string>
#include "Nodo.h"

class LinkedList{
private:
    Nodo* cabeza;
public:
    LinkedList();
    void agregar(Dato* datos);
    void mostrar();
    void eliminar(int emision);
    int length();
};

#endif