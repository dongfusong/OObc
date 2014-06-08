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
	const static LengthUnit& getMile();
	const static LengthUnit& getYard();
	const static LengthUnit& getFeet();
	const static LengthUnit& getInch();
private:
	LengthUnit(unsigned int amountsInBaseUnit):_amountsInBaseUnit(amountsInBaseUnit){

	}
public:
	Amount getAnmountInBaseUnit()const{
		return _amountsInBaseUnit;
	}

private:
	unsigned int _amountsInBaseUnit;
};

const LengthUnit& LengthUnit::getMile(){
	static LengthUnit unit(_amount_of_baseUnit_in_one_mile);
	return unit;
}

const LengthUnit& LengthUnit::getYard(){
	static LengthUnit unit(_amount_of_baseUnit_in_one_yard);
	return unit;
}

const LengthUnit& LengthUnit::getFeet(){
	static LengthUnit unit(_amount_of_baseUnit_in_one_feet);
	return unit;
}

const LengthUnit& LengthUnit::getInch(){
	static LengthUnit unit(_amount_of_baseUnit_in_one_inch);
	return unit;
}


#define MILE (LengthUnit::getMile())
#define YARD (LengthUnit::getYard())
#define FEET (LengthUnit::getFeet())
#define INCH (LengthUnit::getInch())
#define BASE_UNIT INCH

#endif /* LENGTHUNIT_H_ */
