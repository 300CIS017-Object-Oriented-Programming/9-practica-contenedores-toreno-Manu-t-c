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
      Jugador();
     ~Jugador();
      Jugador(std::string nickname, int nivelRanking);
      std::string getNickname();
    void setnickname(std::string &nickname);

      void mostar();
};



#endif //JUGADOR_H
