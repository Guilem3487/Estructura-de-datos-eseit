//
// Created by gilem on 11/14/24.
#include <iostream>

using namespace std;

int main() {
    int nums[100]; // Increased size to handle more numbers
    int *dir_num;
    int option;
    int num_count = 10; // Default number of numbers

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Ingresar cantidad de numeros" << endl;
        cout << "2. Ingresar notas" << endl;
        cout << "3. Mostrar notas" << endl;
        cout << "4. ID de memorias" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> option;

        switch (option) {
            case 1:
                // Ingresar cantidad de numeros
                cout << "Ingrese la cantidad de numeros: ";
                cin >> num_count;
                if (num_count > 2000000) {
                    cout << "El numero maximo permitido es 100. Se ajustara a 100." << endl;
                    num_count = 100;
                }
                break;
            case 2:
                // Ingresar notas
                for (int i = 0; i < num_count; ++i) {
                    cout << "Ingrese un numero:";
                    cin >> nums[i];
                }
                break;
            case 3:
                // Mostrar notas
                for (int i = 0; i < num_count; ++i) {
                    cout << "Posicion: " << i << endl;
                    cout << "numero: " << nums[i] << endl;
                }
                break;
            case 4:
                // ID de memorias
                for (int i = 0; i < num_count; ++i) {
                    dir_num = &nums[i];
                    cout << "Posicion: " << i << endl;
                    cout << "numero: " << *dir_num << endl;
                    cout << "direccion de memoria: " << dir_num << endl;
                }
                break;
            case 5:
                // Salir
                return 0;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
        }
    }

    return 0;
}
