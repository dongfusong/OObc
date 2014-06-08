/*
 * LengthUnit.h
 *
 *  Created on: 2014��6��8��
 *      Author: Thoughtworks
 */

#ifndef LENGTHUNIT_H_
#define LENGTHUNIT_H_

#define _amount_of_baseUnit_in_one_mile _amount_of_baseUnit_in_one_yard * 1760
#define _amount_of_baseUnit_in_one_yard _amount_of_baseUnit_in_one_feet * 3
#define _amount_of_baseUnit_in_one_feet _amount_of_baseUnit_in_one_inch * 12
#define _amount_of_baseUnit_in_one_inch 1

#include "typeDefine.h"

class LengthUnit{
public:
	LengthUnit(unsigned int amountsInBaseUnit):_amountsInBaseUnit(amountsInBaseUnit){

	}
	Amount getAnmountInBaseUnit()const{
		return _amountsInBaseUnit;
	}
private:
	unsigned int _amountsInBaseUnit;
};

static LengthUnit getMile(){
	static LengthUnit unit(_amount_of_baseUnit_in_one_mile);
	return unit;
}

static LengthUnit getYard(){
	static LengthUnit unit(_amount_of_baseUnit_in_one_yard);
	return unit;
}

static LengthUnit getFeet(){
	static LengthUnit unit(_amount_of_baseUnit_in_one_feet);
	return unit;
}

static LengthUnit getInch(){
	static LengthUnit unit(_amount_of_baseUnit_in_one_inch);
	return unit;
}


#define MILE getMile()
#define YARD getYard()
#define FEET getFeet()
#define INCH getInch()
#define BASE_UNIT INCH

#endif /* LENGTHUNIT_H_ */
