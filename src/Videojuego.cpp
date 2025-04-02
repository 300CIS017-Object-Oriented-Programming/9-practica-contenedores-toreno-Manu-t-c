#include "Videojuego.h"
#include <iostream>

using std::cout;
using std::string;

Videojuego::Videojuego()
{
    codigo = "";
    nombre = "";
    genero = "";
    dificultad = 0;
}

Videojuego::Videojuego(string codigo, string nombre, string genero, int dificultad) :
codigo(codigo), nombre(nombre){}

void Videojuego::mostrar(){
    cout << "El código es: " << codigo << "\n";
    cout << "El nombre es: " << nombre << "\n";
    cout << "El género es: " << genero << "\n";
    cout << "La dificultad es: " << dificultad << "\n";
}


