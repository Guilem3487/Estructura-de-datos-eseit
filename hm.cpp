
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
void preOrden(Nodo*); //1
void mostrarArbol(Nodo *, int);
void inOrden(Nodo*); //2
void posOrden(Nodo*); //3
void eliminarNodo(Nodo *&arbol, string n);
void eliminarNodoEncontrado(Nodo *&nodo);
Nodo *encontrarMinimo(Nodo *nodo);
bool buscar(Nodo *, string);

int main() {
    menu();
    getchar();
    return 0;
}

void menu() {
    string data, dato;
    int opcion, contador = 0;
    Nodo *arbol = NULL;
    do {
        std::cout << "\t.:MENU:." << endl;
        std::cout << "1. Insertar nuevo apellido" << endl;
        std::cout << "2. Mostrar el arbol" << endl;
        std::cout << "3. Buscar un Nodo en el arbol" << endl;
        std::cout << "4. Recorrido en PreOrden" << endl;
        std::cout << "5. Recorrer el arbol en InOrder" << endl;
        std::cout << "6. Mostrar izquier,derecha y nodo" <<endl;
        std::cout << "7. Eliminar Nodo" <<endl;
        std::cout << "8. Salir" << endl;
        std::cout << "Opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Digite una string: ";
                std::cin >> data;
                insertarNodo(arbol, data);
                break;
            case 2:
                std::cout << "\nMostrando arbol completo: \n\n";
                mostrarArbol(arbol, contador);
                std::cout << "\n";
                std::cout << "Presione Enter para continuar...";
                std::cin.ignore();
                std::cin.get();
                break;
            case 3:
                std::cout << "Digita el nodo a buscar: \n\n";
                std::cin >> dato;
                if (buscar(arbol, dato)) {
                    std::cout << "\nElemento " << dato << " ha sido encontrado en el arbol\n";
                } else {
                    std::cout << "\nElemento no encontrado en el arbol\n";
                }
                std::cout << "\n";
                std::cout << "Presione Enter para continuar...";
                std::cin.ignore();
                std::cin.get();
                break;
            case 4:
                std::cout << "\nRecorrido en PreOrden: ";
                preOrden(arbol);
                std::cout << "\n\n";
                std::cout << "Presione Enter para continuar...";
                std::cin.ignore();
                std::cin.get();
                break;
            case 5:
                std::cout << "\nRecorrido en InOrder: ";
                inOrden(arbol);
                std::cout << "\n\n";
                std::cout << "Presione Enter para continuar...";
                std::cin.ignore();
                std::cin.get();
                break;
            case 6:
                std::cout << "\nRecorrido en posOrder: ";
                posOrden(arbol);
                std::cout << "\n\n";
                std::cout << "Presione Enter para continuar...";
                std::cin.ignore();
                std::cin.get();
                break;
            case 7:
                std::cout << "Digite el nodo a eliminar: ";
                std::cin >> dato;
                eliminarNodo(arbol, dato);
                std::cout << "\nNodo eliminado\n";
                std::cout << "Presione Enter para continuar...";
                std::cin.ignore();
                std::cin.get();
                break;
            case 8:
                std::cout << "Saliendo..." << endl;
                break;
            default:
                std::cout << "Opcion no valida" << endl;
        }
    } while (opcion != 8);
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

void mostrarArbol(Nodo *arbol, int cont) {
    if (arbol == NULL) {
        return;
    } else {
        mostrarArbol(arbol->der, cont + 1);
        for (int i = 0; i < cont; i++) {
            std::cout << "   ";
        }
        std::cout << arbol->dato << endl;
        mostrarArbol(arbol->izq, cont + 1);
    }
}

bool buscar(Nodo *arbol, string n) {
    if (arbol == NULL) { // si el arbol esta vacio
        return false;
    } else if (arbol->dato == n) { // si el nodo es igual al elemento
        return true;
    } else if (n < arbol->dato) { //Esta función hace que los elementos dentro de la lista, aparezcan en orden alfabético
        return buscar(arbol->izq, n);
    } else {
        return buscar(arbol->der, n);
    }
}

void preOrden(Nodo *arbol) {
    if (arbol == NULL) {
        return;
    } else {
        std::cout << arbol->dato << " - ";
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}

void inOrden(Nodo *arbol) {
    if (arbol == NULL) {
        return;
    } else {
        inOrden(arbol->izq);
        std::cout << arbol->dato << " - ";
        inOrden(arbol->der);
    }
}

void posOrden(Nodo *arbol) {
    if (arbol == NULL) {
        return;
    } else {
        posOrden(arbol->izq);
        posOrden(arbol->der);
        std::cout << arbol->dato << " - ";
    }
}

void eliminarNodo(Nodo *&arbol, string n) {
    if (arbol == NULL) {
        return;
    } else if (n < arbol->dato) {
        eliminarNodo(arbol->izq, n);
    } else if (n > arbol->dato) {
        eliminarNodo(arbol->der, n);
    } else {
        eliminarNodoEncontrado(arbol);
    }
}

void eliminarNodoEncontrado(Nodo *&nodo) {
    if (nodo->izq == NULL && nodo->der == NULL) {
        delete nodo;
        nodo = NULL;
    } else if (nodo->izq == NULL) {
        Nodo *aux = nodo;
        nodo = nodo->der;
        delete aux;
    } else if (nodo->der == NULL) {
        Nodo *aux = nodo;
        nodo = nodo->izq;
        delete aux;
    } else {
        Nodo *aux = encontrarMinimo(nodo->der);
        nodo->dato = aux->dato;
        eliminarNodo(nodo->der, aux->dato);
    }
}

Nodo *encontrarMinimo(Nodo *nodo) {
    while (nodo->izq != NULL) {
        nodo = nodo->izq;
    }
    return nodo;
}
//izquierda derecha y raiz
//Numero mayor, más cercano al que iliminamos
//
//para eliminar un nodo, busco solo numeros; si no me sirve, tomo el otro lado "derecha".
//La unica forma en la que podemos tomar en cuenta el nuemero de la derecha, es que un nuemro de la derecha
//es que un numero de la izquierda haya subido.



//Hacer un codigo en el cual ingresemos apellidos, por alfabetico.
// Y mostrar los nodos en standart.
*/