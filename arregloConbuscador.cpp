
//
// Created by gilem on 11/27/24.
#include <iostream>
#include <algorithm> // for the sort function

using namespace std;

void pedirNúmeros(int* &arr, int &n) {
    cout << "Ingrese la cantidad de números: ";
    cin >> n;
    arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void ordenarNúmeros(int* arr, int n) {
    sort(arr, arr + n);
}

void mostrarNúmeros(const int* arr, int n) {
    cout << "Números en el arreglo: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool buscarNumero(const int* arr, int n, int num) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == num) {
            return true;
        }
    }
    return false;
}

void arregloConbuscador() {
    int* números = nullptr;
    int n = 0;
    int option;
    int numBuscar;

    while (true) {
        cout << "Menú:" << endl;
        cout << "1. Ingresar números" << endl;
        cout << "2. Mostrar números" << endl;
        cout << "3. Buscar número" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> option;

        switch (option) {
            case 1:
                pedirNúmeros(números, n);
            break;
            case 2:
                ordenarNúmeros(números, n);
                mostrarNúmeros(números, n);
            break;
            case 3:
                cout << "Ingrese el número a buscar: ";
            cin >> numBuscar;
            if (buscarNumero(números, n, numBuscar)) {
                cout << "El número " << numBuscar << " está en el arreglo." << endl;
            } else {
                cout << "El número " << numBuscar << " no está en el arreglo." << endl;
            }
            break;
            case 4:
                delete[] números;
            return;
            default:
                cout << "Opción inválida. Intente de nuevo." << endl;
        }
    }
}