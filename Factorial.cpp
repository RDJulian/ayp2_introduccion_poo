#include "Factorial.h"

int Factorial::factorial(int numero) {
    int factorial = 1;
    for (int i = 2; i <= numero; i++) {
        factorial *= i;
    }
    return factorial;
}