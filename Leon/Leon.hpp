#ifndef APY2_INTRODUCCION_POO_LEON_H
#define APY2_INTRODUCCION_POO_LEON_H

#include <string>

class Leon {
private:
    std::string nombre;
    size_t peso;
    bool es_hembra;
    bool es_lider;
    bool esta_durmiendo;
    size_t edad;

    void mensaje_dormir();

public:
    Leon(std::string nombre, size_t peso, bool es_hembra, bool es_lider, size_t edad);

    Leon(std::string nombre, size_t peso, bool es_hembra);

    void comer();

    void rugir();

    void dormir();

    void despertar();
};

#endif