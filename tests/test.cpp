#include <gtest/gtest.h>
#include "../MyMathLib.h"
#include <iostream>
#include <cassert>


TEST(MathTestCase, MathTestSqrt9) {
	ASSERT_EQ(3, mySqrt(9));
}
