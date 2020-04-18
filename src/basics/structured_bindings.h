#pragma once

#include <gtest/gtest.h>

namespace cppnotes
{
namespace basics
{
	class StructuredBindings
	{
	public:
		std::pair<int, double> get_divide_results(int diviser, int divider)
		{
			int value = diviser/divider;
			double remainder = diviser - (value * divider);

			return std::make_pair(value, remainder);
		}
	};

	class StructuredBindingsTest : public ::testing::Test
	{
	public:
		void SetUp() {}

		void TearDown() {}

		StructuredBindings m_strcBindings;
	};

	TEST_F(StructuredBindingsTest, DivideWithNoRemainder)
	{
		auto [fraction, remainder] = m_strcBindings.get_divide_results(16, 4);
		EXPECT_EQ(4, fraction);
		EXPECT_EQ(0, remainder);
	}

	TEST_F(StructuredBindingsTest, DivideWithRemainder)
	{
		auto [fraction, remainder] = m_strcBindings.get_divide_results(17, 4);
		EXPECT_EQ(4, fraction);
		EXPECT_EQ(1, remainder);
	}

	TEST_F(StructuredBindingsTest, DivideWithZero)
	{

	}

	TEST_F(StructuredBindingsTest, DivideNegativeWithRemainder)
	{
		auto [fraction, remainder] = m_strcBindings.get_divide_results(-18, 2);
		EXPECT_EQ(-9, fraction);
		EXPECT_EQ(0, remainder);
	}
}
}
