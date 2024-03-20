#include "Auto.hpp"

int main() {
    Auto autito("Ka", "Rojo", "Ford", 3, 150000);
    autito.encender();
    autito.tocar_bocina();
    autito.acelerar();
    autito.desacelerar();
    autito.desacelerar();
    autito.apagar();
    autito.tocar_bocina();
    return 0;
}