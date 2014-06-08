/*
 * LengthUnit.h
 *
 *  Created on: 2014Äê6ÔÂ8ÈÕ
 *      Author: Thoughtworks
 */

#ifndef LENGTHUNIT_H_
#define LENGTHUNIT_H_

#define _amount_of_baseUnit_in_one_mile _amount_of_baseUnit_in_one_yard * 1760
#define _amount_of_baseUnit_in_one_yard _amount_of_baseUnit_in_one_feet * 3
#define _amount_of_baseUnit_in_one_feet _amount_of_baseUnit_in_one_inch * 12
#define _amount_of_baseUnit_in_one_inch 1

#define MILE _amount_of_baseUnit_in_one_mile
#define YARD _amount_of_baseUnit_in_one_yard
#define FEET _amount_of_baseUnit_in_one_feet
#define INCH _amount_of_baseUnit_in_one_inch
#define BASE_UNIT INCH

#endif /* LENGTHUNIT_H_ */
