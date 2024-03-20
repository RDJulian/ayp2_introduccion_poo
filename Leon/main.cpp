#include "Leon.hpp"

using namespace std;

int main() {
    // Memoria dinámica. Lo pueden ignorar por ahora.
    Leon* leonsito = new Leon("Oscar Hugo", 150, false, true, 8);
    leonsito->comer();
    leonsito->rugir();
    leonsito->dormir();
    leonsito->comer();
    leonsito->despertar();
    delete leonsito;
    return 0;
}