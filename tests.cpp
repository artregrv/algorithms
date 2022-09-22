#include <gtest/gtest.h>
#include "pow.h"

TEST(pow, positive_numbers)
{
	ASSERT_EQ(25, pow(5, 2));
	ASSERT_EQ(8000, pow(20, 3));
	ASSERT_EQ(1, pow(10, 0));
}

TEST(pow, negative_numbers)
{
	ASSERT_EQ(25, pow(-5, 2));
	ASSERT_EQ(-1, pow(-1, 3));
	ASSERT_EQ(-216, pow(-6, 3));
}

int main(int argc, char *argv[])
{
	testing::InitGoogleTest(&argc, argv);	
	return RUN_ALL_TESTS();
}

