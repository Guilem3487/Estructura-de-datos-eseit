#include <iostream>

using namespace std;

//Forward declarations for functions
void arregloConbuscador();
int comparador();
int comparador2();
int arrays();
int arrays2();
void comparador3();

int main() {

    int option;

    while (true) {
        std::cout << "Menú" << endl;
        std::cout << "1. llamar función arreglo con buscador" << endl;
        std::cout << "2. comparador" << endl;
        std::cout << "3. comparador 2" << endl;
        std::cout << "4. comparador 3" << endl;
        std::cout << "5. arrays" << endl;
        std::cout << "6. array 2" << endl;
        std::cout << "7. salir" << endl;
        std::cout << "Seleccionar opción ";
        std::cin >> option;

        switch (option) {

            case 1:
                arregloConbuscador();
                break;
            case 2:
                comparador();
            break;
            case 3:
                comparador2();
            break;
            case 4:
                comparador3();
            case 5:
            arrays();
            break;
            case 6:
            arrays2();
            break;
            case 7:
                return 0;
            default:
                std::cout << "opción invalida, por favor intente de nuevo" << endl;
        }
    }
}
