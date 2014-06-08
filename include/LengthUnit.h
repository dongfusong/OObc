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

#include "typeDefine.h"

class LengthUnit{

	LengthUnit(unsigned int amountsInBaseUnit):_amountsInBaseUnit(amountsInBaseUnit){

	}
public:
	Amount getAnmountInBaseUnit()const{
		return _amountsInBaseUnit;
	}
	friend const LengthUnit& getMile();
	friend const LengthUnit& getYard();
	friend const LengthUnit& getFeet();
	friend const LengthUnit& getInch();
private:
	unsigned int _amountsInBaseUnit;
};

const LengthUnit& getMile(){
	static LengthUnit unit(_amount_of_baseUnit_in_one_mile);
	return unit;
}

const LengthUnit& getYard(){
	static LengthUnit unit(_amount_of_baseUnit_in_one_yard);
	return unit;
}

const LengthUnit& getFeet(){
	static LengthUnit unit(_amount_of_baseUnit_in_one_feet);
	return unit;
}

const LengthUnit& getInch(){
	static LengthUnit unit(_amount_of_baseUnit_in_one_inch);
	return unit;
}


#define MILE getMile()
#define YARD getYard()
#define FEET getFeet()
#define INCH getInch()
#define BASE_UNIT INCH

#endif /* LENGTHUNIT_H_ */
