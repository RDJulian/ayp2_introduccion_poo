#include <iostream>
#include "Auto.h"

int main() {
    Auto autito("Ford Ka", "Fucsia", 5, 50000);

    autito.encender();
    autito.tocarBocina();
    autito.apagar();
    autito.tocarBocina();

    return 0;
}