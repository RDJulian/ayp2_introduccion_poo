#include <iostream>
#include "Circulo.hpp"

using namespace std;

int main() {
    Punto puntito(3, 2);
    Circulo circulito(5, puntito);
    cout << circulito.calcular_area() << endl;
    cout << circulito.incluye(Punto(4, 2)) << endl;
    return 0;
}