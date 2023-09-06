#include <iostream>
#include "Circulo.h"

using namespace std;

int main() {
    Punto puntito(3, 2);
    Circulo circulito(5, puntito);
    cout << circulito.calcularArea() << endl;

    return 0;
}