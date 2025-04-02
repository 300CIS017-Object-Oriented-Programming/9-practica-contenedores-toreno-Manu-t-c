#include "Torneo.h"
#include <iostream>

using std::cout;
using std::string;
using std::vector;
using std::endl;
using std::cin;

Torneo::Torneo() {
    inicializarVideojuegos();
    inicializarJugadores();
    cout << "Torneo inicializado con videojuegos y jugadores precargados." << endl;
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
    cout << "Ingrese el nombre: " << endl;
    cin.ignore(); // Importante para quitar el salto de línea en caso de que exista
    getline(cin, nombre);

    cout << "Ingrese el genero: " << endl;
    getline(cin, codigo);

    cout << "Ingrese el nivel de dificultad (1-5): " << endl;
    cin >> dificultad;
    if (dificultad < 1 || dificultad > 5) {
        cout << "Nivel de dificultad inválido. Intente de nuevo." << endl;
    }
    while (dificultad < 1 || dificultad > 5)
    videojuegosDisponibles[codigo] = new Videojuego(codigo, nombre, genero, dificultad);
    cout << "Videojuego registrado exitosamente." << endl;
}
void Torneo::inscribirJugadorEnVideojuego(){
}

void Torneo::inicializarVideojuegos(){
    videojuegosDisponibles["V001"] = new Videojuego("V001", "League of Legends", "MOBA", 3);
    videojuegosDisponibles["V002"] = new Videojuego("V002", "Counter-Strike", "FPS", 4);
    videojuegosDisponibles["V003"] = new Videojuego("V003", "Tekken", "Fighting", 5);
    cout << "Videojuegos inicializados." << endl;
}

void Torneo::inicializarJugadores(){
    jugadoresRegistrados["Player1"] = new Jugador("Player1", 100);
    jugadoresRegistrados["Player2"] = new Jugador("Player2", 50);
    jugadoresRegistrados["Player3"] = new Jugador("Player3", 10);
    cout << "Jugadores inicializados." << endl;
}