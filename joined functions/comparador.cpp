//
// Created by gilem on 11/27/24.
//
#include <iostream>

using namespace std;

int comparador() {
    int num, *dir_num;

    num = 20;

    dir_num = &num;

    cout << "numero: " << *dir_num << endl;
    cout << "direccion de memoria: " << dir_num << endl;

    return 0;
}

#include <iostream>

int comparador2() {
    int num;
    cout << "Ingrese un numero:";
    cin >> num;

    if (num % 2 == 0) {
        cout << "El numero es par: " << endl;
    } else {
        cout << "El numero es impar: " << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;


//Cuarto paso, array con puntero

int comparador3() {
    int num, *dir_num;

    cout << "Ingrese un numero:";
    cin >> num;

    dir_num = &num;

    if (num % 2 == 0) {
        cout << "El numero " << *dir_num << " es par: " << endl;
    } else {
        cout << "El numero " << *dir_num << " es impar: " << endl;
    }
    cout << "numero: " << *dir_num << endl;
    cout << "direccion de memoria: " << dir_num << endl;

    return 0;
}


#include <iostream>

using namespace std;

int arrays() {
    int nums[5];
    int *dir_num;

    // tomando datos ingresados por el usurio
    for (int i = 0; i < 5; ++i) {
        cout << "Ingrese un numero:";
        cin >> nums[i];
    }

    // imprimir los numeros del array
    for (int i = 0; i < 5; ++i) {
        dir_num = &nums[i];
        cout << "Posicion: " << i << endl;
        cout << "numero: " << *dir_num << endl;
        cout << "direccion de memoria: " << dir_num << endl;
    }

    return 0;
}


/*aplicación de menu,

*ingresar notas
*mostrar notas
*id de memorias
*salir
*/

using namespace std;

int arrays2() {
    int nums[5];
    int *dir_num;

    // tomando datos ingresados por el usurio
    for (int i = 0; i < 5; ++i) {
        cout << "Ingrese un numero:";
        cin >> nums[i];
    }

    // imprimir los numeros del array
    for (int i = 0; i < 10; ++i) {
        dir_num = &nums[i];
        cout << "Posicion: " << i << endl;
        cout << "numero: " << *dir_num << endl;
        cout << "direccion de memoria: " << dir_num << endl;
    }

    return 0;
}