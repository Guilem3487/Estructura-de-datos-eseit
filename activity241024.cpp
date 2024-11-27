
 //
// Created by gilem on 10/24/24.
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>

using namespace std;

void agregar(const string& filename);
void lectura(const string& filename);

int main() {
    string filename;
    cout << "ingresar nombre de archivo: ";
    getline(cin, filename);

    agregar(filename);
    lectura(filename);
    return 0;
}

void agregar(const string& filename) {
    ofstream archivo; // agregar mas texto
    string texto;

    archivo.open(filename, ios::app); // abrimos el archivo y se agrega el texto justo donde se quedo el marcador

    if (archivo.fail()) {
        std::cout << "No se ha podido abrir el archivo";
        exit(1);
    }

    std::cout << "Digite el texto que quiere añadir: ";
    getline(cin, texto);
    archivo << texto << endl;
    archivo.close();
}

void lectura(const string& filename) {
    ifstream archivo; // lectura de texto
    string texto;
    archivo.open(filename, ios::in); // modo lectura abrir el archivo

    if (archivo.fail()) {
        std::cout << "No se puede abrir el archivo";
        exit(1);
    }

    while (!archivo.eof()) { // mientras no sea el final del archivo no finalice la tarea
        getline(archivo, texto); // variable que guarda el texto del archivo
        std::cout << texto << endl;
    }
    archivo.close();
}

//arboles y logica aplicada.
// o 5 o 0.
// puntos para a la nota final
//ajustar variables previamente creadas para el parcial.
