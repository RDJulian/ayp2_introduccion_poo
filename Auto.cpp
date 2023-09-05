#include "Auto.h"
#include "CarWash.h"
#include <iostream>

using namespace std;

Auto::Auto(std::string modelo, std::string color, int cantPuertas, int kilometraje) {
    this->modelo = modelo;
    this->color = color;
    this->cantPuertas = cantPuertas;
    this->kilometraje = kilometraje;
    this->encendido = false;
}

Auto::Auto(std::string modelo, std::string color, int cantPuertas) {
    this->modelo = modelo;
    this->color = color;
    this->cantPuertas = cantPuertas;
    this->kilometraje = 0;
    this->encendido = false;
}

void Auto::encender() {
    encendido = true;
}

void Auto::apagar() {
    encendido = false;
}

void Auto::tocarBocina() {
    if (encendido) {
        cout << "BEEEEEEEEEEEPP" << endl;
    }
}

int Auto::getKilometraje() {
    return kilometraje;
}

void Auto::setKilometraje(int kilometraje) {
    this->kilometraje = kilometraje;
}

void Auto::limpiar() {
    if (sucio) {
        CarWash::limpiar(this);
    }
}

void Auto::imprimirInformacion() {
    cout << modelo << " " << color << " " << cantPuertas << " " << kilometraje << endl;
}