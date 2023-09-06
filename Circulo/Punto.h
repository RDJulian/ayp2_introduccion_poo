#ifndef APY2_INTRODUCCION_POO_PUNTO_H
#define APY2_INTRODUCCION_POO_PUNTO_H

class Punto {
private:
    float x, y;
public:
    Punto();

    Punto(float x, float y);

    float distancia(Punto punto2);
};

#endif