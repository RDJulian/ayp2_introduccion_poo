#include "Leon.h"
#include <iostream>

using namespace std;

Leon::Leon(std::string nombre, size_t peso, bool esHembra, bool esLider, size_t edad) {
    this->nombre = nombre;
    this->peso = peso;
    this->esHembra = esHembra;
    this->esLider = esLider;
    this->edad = edad;
    estaDurmiendo = false;
}

Leon::Leon(std::string nombre, size_t peso, bool esHembra, bool esLider) {
    this->nombre = nombre;
    this->peso = peso;
    this->esHembra = esHembra;
    this->esLider = esLider;
    this->edad = 0;
    estaDurmiendo = false;
}

void Leon::comer() {
    if (!estaDurmiendo)
        cout << "Estoy comiendo un humano... Nom nom..." << endl;
}

void Leon::rugir() {
    if (!estaDurmiendo) {
        if (edad <= 1) {
            cout << "Miau" << endl;
        } else {
            cout << "ROOOAAAAAAAAAAAAAAAAAR" << endl;
        }
    }
}

void Leon::mensajeAlDormir() {
    cout << "zzzzzzz" << endl;
}


void Leon::dormir() {
    this->mensajeAlDormir();
    estaDurmiendo = true;
}

void Leon::levantar() {
    cout << "*bostezo*" << endl;
    estaDurmiendo = false;
}