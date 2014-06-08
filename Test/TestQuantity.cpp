/*
 * TestQuantity.cpp
 *
 *  Created on: 2014Äê6ÔÂ8ÈÕ
 *      Author: Thoughtworks
 */

#include <gtest/gtest.h>
#include "mile.h"

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



