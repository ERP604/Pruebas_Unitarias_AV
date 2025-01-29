#include <gtest/gtest.h>
#include "MyMathLib.h"
#include <iostream>
#include <cassert>
#include "../Operaciones.h"


TEST(MathTestCase, MathTestSqrt9)
{
	ASSERT_EQ(3, mySqrt(9));
}


void test_operaciones() {
	assert(Operaciones::add(2, 3) == 5);
	assert(Operaciones::subtract(5, 2) == 3);
	assert(Operaciones::multiply(3, 4) == 12);
	assert(Operaciones::divide(10, 2) == 5);

	std::cout << "Todas las pruebas pasaron correctamente." << std::endl;
}

int main() {
	test_operaciones();
	return 0;
}
