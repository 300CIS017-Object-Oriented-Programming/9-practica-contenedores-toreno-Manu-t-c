#include "Jugador.h"
#include<iostream>

using std::cout;
using std::string;
using std::endl;

Jugador::Jugador(){
 nickname = "";
 nivelRanking = 0;

}

void Jugador::mostar() {
 cout << "Tu nombre es: " << nickname << "\n";
 cout << "tu nivel en el ranking es: " << nivelRanking << "\n";
}

string Jugador::getNickname() {
 return nickname;
}

void Jugador::VideojuegosIncritos() {

}

void Jugador::inscribir(Videojuego* juego) {
 for (auto& vj : VideojuegosIncritos() ){
  if (vj->getCodigo() == juego->getCodigo()) {
   cout << "El jugador ya está inscrito en este videojuego." << endl;
   return;
  };
 }
}
