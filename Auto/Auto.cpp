#include "Auto.hpp"
#include <iostream>

using namespace std;

Auto::Auto(std::string modelo, std::string color, std::string marca, int cantidad_puertas, int kilometraje) {
    this->modelo = modelo;
    this->color = color;
    this->marca = marca;
    this->cantidad_puertas = cantidad_puertas;
    this->kilometraje = kilometraje;
    this->encendido = false;
    this->velocidad = 0.0;
}

Auto::Auto(std::string modelo, std::string color, std::string marca, int cantidad_puertas) {
    this->modelo = modelo;
    this->color = color;
    this->marca = marca;
    this->cantidad_puertas = cantidad_puertas;
    this->kilometraje = 0;
    this->encendido = false;
    this->velocidad = 0.0;
}

void Auto::encender() {
    encendido = true;
}

void Auto::apagar() {
    encendido = false;
}

void Auto::tocar_bocina() {
    if (encendido) {
        cout << "BEEEEEEEEEEEPP" << endl;
    }
}

void Auto::acelerar() {
    if (encendido) {
        cout << "Estoy acelerando!" << endl;
        velocidad += 10;
        if (velocidad != 0) {
            kilometraje += 1;
        }
    }
}

void Auto::desacelerar() {
    if (encendido) {
        cout << "Estoy desacelerando!" << endl;
        velocidad -= 10;
        if (velocidad != 0) {
            kilometraje += 1;
        }
    }
}