/*
#include <iostream>
#include <string>

using namespace std;

struct Nodo {
    string dato;
    Nodo *der;
    Nodo *izq;
};

//protos
Nodo *crearNodo(string);
void insertarNodo(Nodo *&, string);
void menu();
void posOrden(Nodo*);

int main() {
    menu();
    getchar();
    return 0;
}

void menu() {
    string data, dato;
    int opcion;
    Nodo *arbol = NULL;
    do {
        std::cout << "\t.:MENU:." << endl;
        std::cout << "1. Insertar nuevo apellido" << endl;
        std::cout << "2. Recorrer el arbol en PosOrder" << endl;
        std::cout << "3. Salir" << endl;
        std::cout << "Opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Digite una string: ";
                std::cin >> data;
                insertarNodo(arbol, data);
                break;

            case 2:
                std::cout << "\nRecorrido en PosOrder: ";
                posOrden(arbol);
                std::cout << "\n\n";
                std::cout << "Presione Enter para continuar...";
                std::cin.ignore();
                std::cin.get();
                break;
            case 3:
                std::cout << "Saliendo..." << endl;
                break;
            default:
                std::cout << "Opcion no valida" << endl;
        }
    } while (opcion != 3);
}

Nodo *crearNodo(string n) {
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;
    return nuevo_nodo;
}

void insertarNodo(Nodo *&arbol, string n) {
    if (arbol == NULL) { // Validar que el arbol esta vacio
        Nodo *nuevo_nodo = crearNodo(n);
        arbol = nuevo_nodo; // raiz del arbol
    } else {
        string valorRaiz = arbol->dato; // obtener el valor de la raiz
        if (n < valorRaiz) { // elemento menor que la raiz
            insertarNodo(arbol->izq, n);
        } else { // si el elemento de la raiz es mayor insertar en la derecha
            insertarNodo(arbol->der, n);
        }
    }
}

void posOrden(Nodo *arbol) {
    if (arbol == NULL) {
        return;
    } else {
        posOrden(arbol->der);
        std::cout << arbol->dato << " - ";
        posOrden(arbol->izq);

    }
}
*/