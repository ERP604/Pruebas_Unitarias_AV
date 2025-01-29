#include <gtest/gtest.h>
#include "../MyMathLib.h"
#include <iostream>
#include <cassert>
#include "../operaciones.h"


TEST(MathTestCase, MathTestSqrt9)
{
	ASSERT_EQ(3, mySqrt(9));
}


void test_operaciones() {
	assert(suma(2, 3) == 5);
	assert(resta(5, 2) == 3);
	assert(multiplica(3, 4) == 12);
	assert(divide(10, 2) == 5);

	std::cout << "Todas las pruebas pasaron correctamente." << std::endl;
}

int main() {
	test_operaciones();
	return 0;
}
