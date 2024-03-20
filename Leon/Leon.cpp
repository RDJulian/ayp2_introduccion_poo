#include "Leon.hpp"
#include <iostream>

using namespace std;

Leon::Leon(std::string nombre, size_t peso, bool es_hembra, bool es_lider, size_t edad) {
    this->nombre = nombre;
    this->peso = peso;
    this->es_hembra = es_hembra;
    this->es_lider = es_lider;
    this->edad = edad;
    esta_durmiendo = false;
}

Leon::Leon(std::string nombre, size_t peso, bool es_hembra) {
    this->nombre = nombre;
    this->peso = peso;
    this->es_hembra = es_hembra;
    this->es_lider = false;
    this->edad = 0;
    esta_durmiendo = false;
}

void Leon::comer() {
    if (!esta_durmiendo) {
        cout << "Estoy comiendo un humano... Nom nom..." << endl;
    }
}

void Leon::rugir() {
    if (!esta_durmiendo) {
        if (edad <= 1) {
            cout << "Miau" << endl;
        } else {
            cout << "ROOOAAAAAAAAAAAAAAAAAR" << endl;
        }
    }
}

void Leon::mensaje_dormir() {
    cout << "zzzzzzz" << endl;
}

void Leon::dormir() {
    mensaje_dormir();
    esta_durmiendo = true;
}

void Leon::despertar() {
    cout << "*bostezo*" << endl;
    esta_durmiendo = false;
}