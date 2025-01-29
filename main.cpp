#include <iostream>
#include "MyMathLib.h"
#include "factorial.h"
#include "operaciones.h"





int main()
{
    std::cout << "Hello World!\n";
    std::cout << "Sqrt(9) = " << mySqrt(9) << '\n';
    std::cout << "suma (8) + (5) = " << suma(8, 5) << '\n';
    std::cout << "resta (8) - (5) = " << resta(8, 5) << '\n';
    std::cout << "multiplicacion (8) - (5) = " << multiplica (8, 5) << '\n';
    std::cout << "division (8) / (2) = " << divide (8, 2) << '\n';

    std::cout << "factorial (8) = " << factorial(8) << '\n';
    std::cout << "permutacion (5, 5) = " << permutacion(10, 5) << '\n';
}