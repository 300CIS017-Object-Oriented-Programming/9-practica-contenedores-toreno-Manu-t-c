#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H
#include <string>


class Videojuego {
private:
    std::string codigo;
    std::string nombre;
    std::string genero;
    int dificultad;
public:
    Videojuego(std::string codigo, std::string nombre, std::string genero, int dificultad);
    ~Videojuego();
    void mostar();


};



#endif //VIDEOJUEGO_H
