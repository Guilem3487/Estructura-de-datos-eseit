//
// Created by gilem on 11/21/24.
//

#include "Cl211124.h"
#include <iostream>
using namespace std;
int hallarMax(int*,int); //prototipo de función
void intercambio(float *, float*);
void intercambio(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}
    //segundo ejercicio

int main() {
    float num1 = 20.8, num2 = 6.78, num3 = 45, num4 = 564, num5 = 645, num6 = 9786;

    std::cout << "Primer numero: " <<num1 << std::endl;
    std::cout << "Segundo numero: " <<num2 << std::endl;

    void intercambio(float *, float*); //llamada de la función de intercambio
    /*
      std::cout << "\nEl intercambio es: \n\n";
      std::cout << "El nuevo valor de num 1: "<<num2<< std::endl;
      std::cout << "El nuevo valor del num 2: "<<num4<<std::endl;
      std::cout << "El nuevo valor de num 3: "<<num3<< std::endl;
      std::cout << "El nuevo valor del num 4: "<<num1<<std::endl;
      std::cout << "El nuevo valor de num 5: "<<num6<< std::endl;
      std::cout << "El nuevo valor del num 6: "<<num5<<std::endl;
      getchar();
    */
    std::cout << "Valores iniciales:" << std::endl;
    std::cout << "num1: " << num1 << ", num2: " << num2 << ", num3: " << num3 << ", num4: " << num4 << ", num5: " << num5 << ", num6: " << num6 << std::endl;

    //intercambio de valores
    intercambio(&num1, &num2); // num1 <-> num2
    intercambio(&num2, &num4); // num2 <-> num4
    intercambio(&num4, &num1); // num4 <-> num1
    intercambio(&num5, &num6); // num5 <-> num6

    std::cout << "\nValores después del intercambio:" << std::endl;
    std::cout << "num1: " << num1 << ", num2: " << num2 << ", num3: " << num3 << ", num4: " << num4 << ", num5: " << num5 << ", num6: " << num6 << std::endl;

    const int nElementos = 5;
    int numeros[nElementos]={4354,4,43,656,565};
    std::cout << "El número mayor es: " << hallarMax(numeros, nElementos) << std::endl;

    getchar();

    return 0;
}

int hallarMax(int *dirvec, int nElementos) {
    int max = 0;
    for (int i = 0; i < nElementos; i++) {
        if (*(dirvec + i) > max) {
            max = *(dirvec + i);
        }
    }
    return max;
}
// segundo debe ser primero,
// cuarto, segundo
// tercero tercero
// primero cuarto
// sexto quinto
// segundo sexto

// 2, 4, 3, 1 ,6, 5

//Dos ejercicios con este tipo.
// 1. perdir al usuario n numeros, almacenarlos en un arreglo dinamico, luego
//ordenar los números, en orden ascendentes, y mostrarlos en pantalla.

// 2. hacer una función para almacenar n numeros, en un arreglo dinamico, y luego en otra función,
//buscar un número en particular.

