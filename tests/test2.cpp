#include <iostream>
#include <ostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cassert>
#include "../operaciones.h"
#include "../factorial.h"


void test_operaciones() {
    assert(suma(2, 3) == 5);
    assert(resta(5, 2) == 3);
    assert(multiplica(3, 4) == 12);
    assert(divide(10, 2) == 5);
    std::cout << "Todas las pruebas de operaciones pasaron correctamente." << std::endl;
}

void test_factorial() {
    assert(factorial(5) == 120);
    assert(factorial(10) == 3628800);
    assert(factorial(1) == 1);
    assert(factorial(2) == 2);
    std::cout << "Pruebas de factorial correctamente." << std::endl;
}

void test_permutation() {
    assert(permutacion(5 , 5) == 120);
    assert(permutacion(7, 5) == 2520);
    assert(permutacion(10, 5) == 30240);
    std::cout << "Pruebas de permutacion correctamente." << std::endl;
}

int main() {
    test_operaciones();
    test_factorial();
    test_permutation();
    return 0;
}
