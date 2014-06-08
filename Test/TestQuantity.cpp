/*
 * TestQuantity.cpp
 *
 *  Created on: 2014Äê6ÔÂ8ÈÕ
 *      Author: Thoughtworks
 */

#include <gtest/gtest.h>
#include "length.h"

class TestQuantity: public testing::Test {
public:
	void setUp() {

	}
	void tearDown() {

	}
private:
};

TEST_F(TestQuantity, 3_mile_equal_3_mile)
{
	EXPECT_TRUE(Mile(3) == Mile(3));
}

TEST_F(TestQuantity, 3_mile_not_equal_2_mile)
{
	EXPECT_TRUE(Mile(3) != Mile(2));
}


TEST_F(TestQuantity, test_yard_operator_equal_and_nequal){
	EXPECT_TRUE(Yard(3) == Yard(3));
	EXPECT_TRUE(Yard(3) != Yard(4));
}

TEST_F(TestQuantity, 1760yard_equal_1mile){

	EXPECT_TRUE(Yard(1760) == Mile(1));
}

TEST_F(TestQuantity, 1Yard_equal_3Feet)
{
	EXPECT_TRUE(Yard(1) == Feet(3));
}

TEST_F(TestQuantity, 1Feet_equal_12inch)
{
	EXPECT_TRUE(Inch(12) == Feet(1));
}

TEST_F(TestQuantity, 13Inch_add_11Inch_equal_2feet)
{
	EXPECT_EQ(Feet(2), Inch(13) + Inch(11));
}


