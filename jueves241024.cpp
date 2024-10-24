
//
// Created by gilem on 10/24/24.
//
/*
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>

using namespace std;

void agregar();

int main() {
    agregar();
    return 0;
}

void agregar() {
    ofstream archivo; // agregar mas texto
    string texto;

    archivo.open("Prueba.txt", ios::app); // abrimos el archivo y se agrega el texto justo donde se quedo el marcador

    if (archivo.fail()) {
        std::cout << "No se ha podido abrir el archivo";
        exit(1);
    }

    std::cout << "Digite el texto que quiere añadir: ";
    getline(cin, texto);
    archivo << texto << endl;
    archivo.close();
}


//arboles binarios
// formas de mostrar ordenes


//caracteres especiales
//almacenarlo en otra carpeta

*/