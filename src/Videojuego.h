
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
      Videojuego();
      Videojuego(std::string codigo, std::string nombre, std::string genero, int dificultad);
      ~Videojuego();
      void mostrar();
    std::string getCodigo() const {return codigo;};
    std::string getNombre() const {return nombre;};
    std::string getGenero() const {return genero;};
};



#endif //VIDEOJUEGO_H
