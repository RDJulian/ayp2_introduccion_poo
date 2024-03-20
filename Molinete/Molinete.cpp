#include "Molinete.hpp"

int Molinete::cantidad_total_personas = 0;

Molinete::Molinete() {
    habilitado = true;
    cantidad_personas = 0;
}

Molinete::Molinete(bool habilitado) {
    this->habilitado = habilitado;
    cantidad_personas = 0;
}

void Molinete::habilitar() {
    habilitado = !habilitado;
}

void Molinete::pasar() {
    if (habilitado) {
        cantidad_personas++;
        cantidad_total_personas++;
    }
}

int Molinete::obtener_cantidad_personas() {
    return cantidad_personas;
}

int Molinete::obtener_cantidad_total_personas() {
    return cantidad_total_personas;
}