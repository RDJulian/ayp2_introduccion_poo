#ifndef APY2_INTRODUCCION_POO_AUTO_H
#define APY2_INTRODUCCION_POO_AUTO_H

#include <string>

class Auto {
private:
    std::string modelo;
    std::string color;
    std::string marca;
    int cantidad_puertas;
    int kilometraje;
    float velocidad;
    bool encendido;

public:
    Auto(std::string modelo,
         std::string color,
         std::string marca,
         int cantidad_puertas,
         int kilometraje);

    Auto(std::string modelo,
         std::string color,
         std::string marca,
         int cantidad_puertas);
    
    void encender();

    void apagar();

    void tocar_bocina();

    void acelerar();

    void desacelerar();
};

#endif