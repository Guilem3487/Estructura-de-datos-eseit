//
// Created by gilem on 11/14/24.
//
#include <iostream>

using namespace std;

int main() {
    int nums[10];
    int *dir_num;
    int option;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Ingresar notas" << endl;
        cout << "2. Mostrar notas" << endl;
        cout << "3. ID de memorias" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> option;

        switch (option) {
            case 1:
                // Ingresar notas
                    for (int i = 0; i < 10; ++i) {
                        cout << "Ingrese un numero:";
                        cin >> nums[i];
                    }
            break;
            case 2:
                // Mostrar notas
                    for (int i = 0; i < 10; ++i) {
                        cout << "Posicion: " << i << endl;
                        cout << "numero: " << nums[i] << endl;
                    }
            break;
            case 3:
                // ID de memorias
                    for (int i = 0; i < 10; ++i) {
                        dir_num = &nums[i];
                        cout << "Posicion: " << i << endl;
                        cout << "numero: " << *dir_num << endl;
                        cout << "direccion de memoria: " << dir_num << endl;
                    }
            break;
            case 4:
                // Salir
                    return 0;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
        }
    }

    return 0;
}