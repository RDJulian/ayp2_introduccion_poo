#include <iostream>
#include "Molinete.h"

using namespace std;

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

    cout << molinete1.getCantPersonas() << endl;
    cout << molinete2.getCantPersonas() << endl;
    cout << molinete3.getCantPersonas() << endl;

    cout << Molinete::getCantTotalPersonas() << endl;

    return 0;
}