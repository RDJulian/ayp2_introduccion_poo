#ifndef APY2_INTRODUCCION_POO_MOLINETE_H
#define APY2_INTRODUCCION_POO_MOLINETE_H

class Molinete {
private:
    static int cantTotalPersonas;
    int cantPersonas;
    bool habilitado;
public:
    Molinete();

    Molinete(bool habilitado);

    void habilitar();

    void pasar();

    int getCantPersonas();

    static int getCantTotalPersonas();
};

#endif