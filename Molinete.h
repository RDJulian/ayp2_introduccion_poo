#ifndef APY2_INTRODUCCION_POO_MOLINETE_H
#define APY2_INTRODUCCION_POO_MOLINETE_H


class Molinete {
private:
    int cantPersonas;
    bool habilitado;
public:

    Molinete(bool habilitado);

    void habilitar();

    void pasar();

    int getCantPersonas();
};

#endif