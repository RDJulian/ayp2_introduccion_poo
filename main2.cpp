#include <iostream>
#include "Auto.h"
#include "Factorial.h"
#include "Leon.h"
#include <vector>
#include "Molinete.h"

using namespace std;

int main() {

    Leon* leonsito = new Leon("Oscar Hugo", 200, false, true, 78);
    Leon* leonsito2 = new Leon("Oscar Hugo", 200, false, true, 78);
    Leon* leonsito3 = new Leon("Oscar Hugo", 200, false, true, 78);

    leonsito->comer();
    leonsito->rugir();
    leonsito->dormir();
    leonsito->comer();
    leonsito->levantar();

    return 0;
}