#ifndef APY2_INTRODUCCION_POO_MOLINETE_H
#define APY2_INTRODUCCION_POO_MOLINETE_H

class Molinete {
private:
    static int cantidad_total_personas;
    int cantidad_personas;
    bool habilitado;
public:
    Molinete();

    Molinete(bool habilitado);

    void habilitar();

    void pasar();

    int obtener_cantidad_personas();

    static int obtener_cantidad_total_personas();
};

#endif