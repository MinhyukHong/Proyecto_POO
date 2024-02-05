#include <iostream>
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList() : cabeza(nullptr){}

void LinkedList::agregar(Dato* datos){
    Nodo* nuevoNodo = new Nodo(datos);
    if(!cabeza){
        cabeza = nuevoNodo;
    }else{
        Nodo* actual = cabeza;
        while(actual->getSiguiente()){
            actual = actual->getSiguiente();
        }
        actual->setSiguiente(nuevoNodo);
    }
}

void LinkedList::mostrar(){
    Nodo* actual = cabeza;
    string msg = "";
    while (actual) {
        msg = msg+actual->getDatos()->toString() + "\n\n\n";
        actual = actual->getSiguiente();
    }
    cout << msg << endl;
}

void LinkedList::eliminar(int emision){
    if(!cabeza){
        return;
    }else if (cabeza->getDatos()->getEmision() == emision){
        if(cabeza->getSiguiente()){
            Nodo* aux = cabeza;
            cabeza = aux->getSiguiente();
            delete aux;
        }
        else{delete cabeza;}
        return;
    }else{
        Nodo* actual = cabeza->getSiguiente();
        Nodo* anterior = cabeza;
        while(actual->getSiguiente()){
            if(actual->getDatos()->getEmision() == emision){
                anterior->setSiguiente(actual->getSiguiente());
                delete actual;
                return;
            }
            anterior = actual;
            actual = actual->getSiguiente();
        }
        if(actual->getDatos()->getEmision() == emision){
            anterior->setSiguiente(nullptr);
            delete actual;
        }else{
            cout << "No se ha encontrado la emision" << endl;
        }
        return;
    }
}

int LinkedList::length(){
    int i = 0;
    if(cabeza){
        i++;
        Nodo* actual = cabeza;
        while(actual->getSiguiente()){
            actual = actual->getSiguiente();
            i++;
        }
    }
    return i;
}