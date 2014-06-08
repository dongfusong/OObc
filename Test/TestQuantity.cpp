/*
 * TestQuantity.cpp
 *
 *  Created on: 2014��6��8��
 *      Author: Thoughtworks
 */

#include <gtest/gtest.h>
#include "mile.h"
#include "yard.h"

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


TEST_F(TestQuantity, 3_yard_equal_3_yard){
	EXPECT_TRUE(Yard(3) == Yard(3));
	EXPECT_TRUE(Yard(3) != Yard(4));
}
