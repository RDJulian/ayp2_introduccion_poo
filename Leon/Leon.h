#ifndef APY2_INTRODUCCION_POO_LEON_H
#define APY2_INTRODUCCION_POO_LEON_H

#include <string>

class Leon {
private:
    std::string nombre;
    size_t peso;
    bool esHembra;
    bool esLider;
    bool estaDurmiendo;
    size_t edad;

    void mensajeAlDormir();

public:
    Leon(std::string nombre, size_t peso, bool esHembra, bool esLider, size_t edad);

    Leon(std::string nombre, size_t peso, bool esHembra, bool esLider);

    void comer();

    void rugir();

    void dormir();

    void despertar();
};

#endif