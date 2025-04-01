#include <string>
#include <map>
#include <vector>
#include "VideoJuego.h"
#include "Jugador.h"


class Torneo {
private:
    std::map<std::string, Videojuego*> videojuegosDisponibles;
    std::map<std::string, Jugador*> jugadoresRegistrados;

public:
    Torneo();
    ~Torneo();
    void registrarVideojuego();
    void registrarJugador();
    void inscribirJugadorEnVideojuego();
    void mostrarVideojuegosDeJugador();
    void inicializarVideojuegos();
    void inicializarJugadores();


};

#endif //TORNEO_H
