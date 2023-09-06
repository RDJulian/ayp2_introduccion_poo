#include "Circulo.h"

Circulo::Circulo(float radio, Punto punto) {
    this->radio = radio;
    this->centro = punto;
}

float Circulo::calcularArea() {
    return 3.14f * radio * radio;
}

bool Circulo::estaIncluido(Punto punto) {
    // IMPLEMENTAR //
    return false;
}