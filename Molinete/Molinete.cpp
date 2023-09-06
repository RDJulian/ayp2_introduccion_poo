#include "Molinete.h"

int Molinete::cantTotalPersonas = 0;

Molinete::Molinete() {
    habilitado = true;
    cantPersonas = 0;
}

Molinete::Molinete(bool habilitado) {
    this->habilitado = habilitado;
    cantPersonas = 0;
}

void Molinete::habilitar() {
    habilitado = !habilitado;
}

void Molinete::pasar() {
    if (habilitado) {
        cantPersonas++;
        cantTotalPersonas++;
    }
}

int Molinete::getCantPersonas() {
    return cantPersonas;
}

int Molinete::getCantTotalPersonas() {
    return cantTotalPersonas;
}