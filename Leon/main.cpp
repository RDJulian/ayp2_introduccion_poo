#include <iostream>
#include "Leon.h"

using namespace std;

int main() {
    Leon* leonsito = new Leon("Oscar Hugo", 200, false, true, 78);

    leonsito->comer();
    leonsito->rugir();
    leonsito->dormir();
    leonsito->comer();
    leonsito->despertar();

    delete leonsito;

    return 0;
}