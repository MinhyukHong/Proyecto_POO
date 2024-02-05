#include "Nodo.h"

Nodo::Nodo(Dato* datos): datos(datos), siguiente(nullptr) {}

Dato* Nodo::getDatos() const {
    return datos;
}

Nodo* Nodo::getSiguiente() const {
    return siguiente;
}

void Nodo::setSiguiente(Nodo* nodo) {
    siguiente = nodo;
}
void Nodo::setDatos(Dato* datos) {
    this->datos = datos;
}
