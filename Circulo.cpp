//
// Created by Julian on 5/9/2023.
//

#include "Circulo.h"

Circulo::Circulo(int radio, Punto punto) {
    this->radio = radio;
    this->centro = punto;
}

float Circulo::calcularArea() {
    return 3.14f * (float) radio * (float) radio;
}
