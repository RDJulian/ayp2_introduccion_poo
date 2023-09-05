#ifndef APY2_INTRODUCCION_POO_AUTO_H
#define APY2_INTRODUCCION_POO_AUTO_H

#include <string>

class Auto {
private:
    Auto(std::string modelo, std::string color, int cantPuertas);

    std::string modelo;
    std::string color;
    int cantPuertas;
    int kilometraje;
    bool encendido;

public:
    Auto(std::string modelo1,
         std::string color,
         int cantPuertas,
         int kilometraje);

    void encender();

    void apagar();

    void tocarBocina();

    void imprimirInformacion();

    void limpiar();

    int getKilometraje();

    void setKilometraje(int kilometraje);
};

#endif