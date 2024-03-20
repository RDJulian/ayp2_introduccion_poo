#include "Circulo.hpp"

Circulo::Circulo(float radio, Punto punto) {
    this->radio = radio;
    this->centro = punto;
}

float Circulo::calcular_area() {
    return 3.14f * radio * radio;
}

bool Circulo::incluye(Punto punto) {
    // IMPLEMENTAR. Pista: piensen en la distancia...
    return false;
}