
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
void imprimirSegundoNivel(Nodo*);
void menu();

int main() {
    menu();
    return 0;
}

void menu() {
    int data;
    int opcion;
    Nodo *arbol = NULL;
    do {
        std::cout << "\t.:MENU:." << endl;
        std::cout << "1. Insertar nuevo numero" << endl;
        std::cout << "2. Imprimir nodos del segundo nivel" << endl;
        std::cout << "3. Salir" << endl;
        std::cout << "Opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Digite un numero: ";
                std::cin >> data;
                insertarNodo(arbol, data);
                break;
            case 2:
                std::cout << "\nNodos del segundo nivel: ";
                imprimirSegundoNivel(arbol);
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

void imprimirSegundoNivel(Nodo *arbol) {
    if (arbol == NULL) {
        return;
    }
    if (arbol->izq != NULL) {
        std::cout << arbol->izq->dato << " ";
    }
    if (arbol->der != NULL) {
        std::cout << arbol->der->dato << " ";
    }
}


*/

#include <iostream>
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
int contarNodosExcluyendoRaizYHijos(Nodo*);
void menu();

int main() {
    menu();
    return 0;
}

void menu() {
    int data;
    int opcion;
    Nodo *arbol = NULL;
    do {
        std::cout << "\t.:MENU:." << endl;
        std::cout << "1. Insertar nuevo numero" << endl;
        std::cout << "2. Contar nodos excluyendo raiz y sus hijos" << endl;
        std::cout << "3. Salir" << endl;
        std::cout << "Opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Digite un numero: ";
                std::cin >> data;
                insertarNodo(arbol, data);
                break;
            case 2:
                std::cout << "\nNumero de nodos excluyendo raiz y sus hijos: " << contarNodosExcluyendoRaizYHijos(arbol) << endl;
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

int contarNodos(Nodo *arbol) {
    if (arbol == NULL) {
        return 0;
    }
    return 1 + contarNodos(arbol->izq) + contarNodos(arbol->der);
}

int contarNodosExcluyendoRaizYHijos(Nodo *arbol) {
    int totalNodos = contarNodos(arbol);
    return totalNodos > 3 ? totalNodos - 3 : 0;
}