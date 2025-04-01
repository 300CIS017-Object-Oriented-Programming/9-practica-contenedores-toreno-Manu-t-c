#ifndef JUGADOR_H
#define JUGADOR_H
#include <vector>
#include <string>
#include "Videojuego.h"


class Jugador {
private:
    std::string nickname;
    int nivelRanking;
    std::vector< Videojuego* > videojuegosInscrito;

  public:
    Jugador(std::string nickname, int nivelRanking);
    ~Jugador();
    void mostar();
};



#endif //JUGADOR_H
