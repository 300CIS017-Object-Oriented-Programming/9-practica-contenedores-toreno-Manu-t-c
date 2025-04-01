#include "Jugador.h"
#include<iostream>

using std::cout;
using std::string;

Jugador::Jugador(){
 nickname = "";
 nivelRanking = 0;

}

void Jugador::mostar() {
 cout << "Tu nombre es: " << nickname << "\n";
 cout << "tu nivel en el ranking es: " << nivelRanking << "\n";
}

 Jugador::~Jugador() {
 delete nickname;
 }

string Jugador::getNickname() {
 return nickname;
}
