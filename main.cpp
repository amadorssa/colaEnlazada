#include "Cola.hpp"
#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>

using namespace std;

void clearScreen() {
    system("clear");
}

int main() {
    Cola<int> cola;

    int segundos = 0;
    cout << "De 0 a cuantos segundos quieres que se genere un numero y se añada a la cola?" << endl;
    cin >> segundos;

    for (int i = 0; i < 100; ++i) {
        // Esperar el número de segundos especificado por el usuario
        this_thread::sleep_for(chrono::seconds(segundos));

        // Generar un número aleatorio entre 1 y 10
        int numero = rand() % 10 + 1;

        // Añadir el número a la cola
        cola.Agregar(numero);

        // Limpiar la pantalla antes de imprimir la cola
        clearScreen();

        // Mostrar el número de iteración y la cola
        cout << "Iteración: " << i << endl;
        cola.Imprimir();
    }

    return 0;
}
