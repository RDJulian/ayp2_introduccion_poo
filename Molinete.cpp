#include "Molinete.h"

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
    }
}

int Molinete::getCantPersonas() {
    return cantPersonas;
}