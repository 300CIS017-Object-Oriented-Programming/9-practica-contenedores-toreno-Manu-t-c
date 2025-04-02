#include <iostream>
#include "Torneo.h"

using namespace std;
void mostrarTorneoMenu() {
    int opc = 0;
    cout << "1. Registrar un videojuego\n";
    cout << "2. Registrar un jugador\n";
    cout << "3. inscribirse en un videojuego \n";
    cout << "4. Agregar un videojuego \n";
    cout << "5. Agregar un jugador \n";
    cout << "-1. Volver\n";
    cin >> opc;
}

void mostrarVideojuegosMenu() {
    int opc = 0;
    cout << "1. Mostrar información del videojuego\n";
    cout << "-1. Volver\n";
    cin >> opc;
}

void mostrarJugadorMenu() {
    int opc = 0;
    cout << "1. Mostrar Nickname y ranking\n";
    cout << "2. Ver videojuegos inscritos\n";
    cout << "3. Inscribirse \n";
    cout << "-1. Volver\n";
    cin >> opc;

    cin>>(opc);
}

void mostrarMenu(Torneo &torneoMenu) {

    int opc = 0;
    do
    {
        cout << "\n ****Bienvenidos ****\n";
        cout << "1. Mostrar menu Torneo \n";
        cout << "2. Mostrar menu Jugador \n";
        cout << "3. Mostrar menu Videojuegos \n";
        cout << "-1. Salir \n";

        cin >> opc;

        switch (opc)
        {
            case 1:
                mostrarTorneoMenu();
            break;
            case 2:
                mostrarJugadorMenu();
            break;
            case 3:
                mostrarJugadorMenu();
            default:
                break;
        }
    } while (opc != -1);
}