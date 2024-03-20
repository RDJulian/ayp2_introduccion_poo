#ifndef APY2_INTRODUCCION_POO_CIRCULO_H
#define APY2_INTRODUCCION_POO_CIRCULO_H

#include "Punto.hpp"

class Circulo {
private:
    float radio;
    Punto centro;
public:
    Circulo(float radio, Punto punto);

    float calcular_area();

    bool incluye(Punto punto);
};

#endif