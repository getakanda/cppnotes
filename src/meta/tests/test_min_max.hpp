#pragma once

#include <gtest/gtest.h>

#include <string>
#include "../templates/min_max.hpp"

class TestMinMax : public testing::Test
{
    public:
    	void SetUp() {}
		void TearDown() {}
};


TEST_F(TestMinMax, testMinWithInteger)
{
    EXPECT_EQ(1, ::min<int>(1, 2));
}

TEST_F(TestMinMax, testMinWithNegativePositive)
{
    EXPECT_EQ(-1, ::min(-1, 2));
}

TEST_F(TestMinMax, testMinWithNegativeNegative)
{
    EXPECT_EQ(-3, ::min(-1, -3));
}

TEST_F(TestMinMax, testMinWithDouble)
{
    EXPECT_EQ(3.25, ::min(3.3, 3.25));
}

TEST_F(TestMinMax, testMaxWithInteger)
{
    EXPECT_EQ(2, ::max(1, 2));
}

TEST_F(TestMinMax, testMaxWithNegativePositive)
{
    EXPECT_EQ(2, ::max(-1, 2));
}

TEST_F(TestMinMax, testMaxWithNegativeNegative)
{
    EXPECT_EQ(-1, ::max(-1, -3));
}

TEST_F(TestMinMax, testMaxWithDouble)
{
    EXPECT_EQ(3.3, ::max(3.3, 3.25));
}

TEST_F(TestMinMax, testMinWithString)
{
    std::string a = "a";
    std::string b = "b";
    ASSERT_STREQ("a", ::min(a, b).c_str());
}

TEST_F(TestMinMax, testMaxWithString)
{
    std::string a = "a";
    std::string b = "b";
    ASSERT_STREQ("b", ::max(a, b).c_str());
}
