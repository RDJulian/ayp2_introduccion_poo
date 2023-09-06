#ifndef APY2_INTRODUCCION_POO_CIRCULO_H
#define APY2_INTRODUCCION_POO_CIRCULO_H

#include "Punto.h"

class Circulo {
private:
    float radio;
    Punto centro;
public:
    Circulo(float radio, Punto punto);

    float calcularArea();

    bool estaIncluido(Punto punto);
};

#endif