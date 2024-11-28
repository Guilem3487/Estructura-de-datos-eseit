//
// Created by gilem on 11/28/24.
//
#include <iostream>

using namespace std;

struct Nodo {
    int dato;
    Nodo *der;
    Nodo *izq;
};

//protos
Nodo *crearNodo(int);
void insertarNodo(Nodo *&, int);
void inOrden(Nodo*);

int main() {
    Nodo *arbol = NULL;
     int data;

    for (int i = 0; i < 3; ++i) {
        std::cout << "enter number: ";
        std::cin >> data;
        insertarNodo(arbol,data);
    }

    std::cout << "Recorrido in order: ";
    inOrden(arbol);
    std::cout << std::endl;

    return 0;

}

Nodo *crearNodo(int n) {
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;
    return nuevo_nodo;
}

void insertarNodo(Nodo *&arbol, int n) {
    if (arbol == NULL) { // Validar que el arbol esta vacio
        Nodo *nuevo_nodo = crearNodo(n);
        arbol = nuevo_nodo; // raiz del arbol
    } else {
        int valorRaiz = arbol->dato; // obtener el valor de la raiz
        if (n < valorRaiz) { // elemento menor que la raiz
            insertarNodo(arbol->izq, n);
        } else { // si el elemento de la raiz es mayor insertar en la derecha
            insertarNodo(arbol->der, n);
        }
    }
}

void inOrden(Nodo *arbol) {
    if (arbol == NULL) {
        return;
    }
    else {
        if (arbol->izq != NULL) {
            std::cout << arbol->izq->dato;
        }
    }
}