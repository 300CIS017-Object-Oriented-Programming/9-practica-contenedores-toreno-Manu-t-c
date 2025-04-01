#include "Torneo.h"
#include <iostream>

using std::cout;
using std::string;
using std::vector;
using std::endl;
using std::cin;

Torneo::Torneo() {

}

void Torneo::registrarJugador() {
    string nombre;
    cout << "Ingrese el nombre:" << endl;
    cin.ignore(); // Importante para quitar el salto de línea en caso de que exista
    getline(cin, nombre);
    Jugador *propTemp = new Jugador();
}

void Torneo::registrarVideojuego() {
    string nombre;
    string codigo;
    string genero;
    int dificultad;
    cout << "Ingrese el nombre:" << endl;
    cin.ignore(); // Importante para quitar el salto de línea en caso de que exista
    getline(cin, nombre);
    cout << "Ingrese el nivel de dificultad:" << endl;
    cin >> dificultad;
}

void Torneo::inscribirJugadorEnVideojuego(){

}

void Torneo::mostrarVideojuegosDeJugador(){

}

void Torneo::inicializarVideojuegos(){

}

void Torneo::inicializarJugadores(){

}