#pragma once

#include <gtest/gtest.h>

#include "../templates/min_max.hpp"

class TestMinMax : public testing::Test
{
    public:
    	void SetUp() {}
		void TearDown() {}
};


TEST_F(TestMinMax, testMinWithInteger)
{
    EXPECT_EQ(1, returnMin<int>(1, 2));
}

TEST_F(TestMinMax, testMinWithNegativePositive)
{
    EXPECT_EQ(-1, returnMin(-1, 2));
}

TEST_F(TestMinMax, testMinWithNegativeNegative)
{
    EXPECT_EQ(-3, returnMin(-1, -3));
}