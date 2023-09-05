#ifndef APY2_INTRODUCCION_POO_CIRCULO_H
#define APY2_INTRODUCCION_POO_CIRCULO_H


#include "Punto.h"

class Circulo {
private:
    int radio;
    Punto centro;
public:
    Circulo(int radio, Punto punto);

    float calcularArea();
};


#endif
