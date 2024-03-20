#include <iostream>
#include "Molinete.hpp"

using namespace std;

/* Este ejemplo es quizá el más compilado. La idea es usar un atributo estático (pertenece a la clase)
 * para llevar cuenta de cuantas personas pasaron por TODOS los molinetes, independientemente de cuantos tengamos. */

int main() {
    Molinete molinete1(true);
    Molinete molinete2(false);
    Molinete molinete3(true);

    for (int i = 0; i < 357; ++i) {
        molinete1.pasar();
    }

    for (int i = 0; i < 999; ++i) {
        molinete2.habilitar();
        molinete2.pasar();
    }

    for (int i = 0; i < 2608; ++i) {
        molinete3.pasar();
    }

    cout << molinete1.obtener_cantidad_personas() << endl;
    cout << molinete2.obtener_cantidad_personas() << endl;
    cout << molinete3.obtener_cantidad_personas() << endl;

    cout << Molinete::obtener_cantidad_total_personas() << endl;

    return 0;
}