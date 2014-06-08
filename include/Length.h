/*
 * BaseUnit.h
 *
 *  Created on: 2014Äê6ÔÂ8ÈÕ
 *      Author: Thoughtworks
 */

#ifndef BASEUNIT_H_
#define BASEUNIT_H_
#include "typeDefine.h"
#include "LengthUnit.h"

class Length {
public:
	Length(const Amount& value, unsigned int amountsOfBaseUnit)
	:_value(value),_amountsOfBaseUnit(amountsOfBaseUnit){}

	Amount getAmountInBaseUnit()const{
		return _value * _amountsOfBaseUnit;
	}

	bool operator==(const Length& rhs) const{
		return getAmountInBaseUnit() == rhs.getAmountInBaseUnit();
	}
	bool operator!=(const Length& rhs) const{
		return !operator==(rhs);
	}

	friend Length operator+(const Length& rhs1, const Length& rhs2){
		Amount sum = rhs1.getAmountInBaseUnit() + rhs2.getAmountInBaseUnit();
		return Length(sum, BASE_UNIT);
	}

	virtual ~Length(){}

protected:
	Amount _value;
	unsigned int _amountsOfBaseUnit;
};


#define Mile(value) Length(value, MILE)
#define Yard(value) Length(value, YARD)
#define Feet(value) Length(value, FEET)
#define Inch(value) Length(value, INCH)

#endif /* BASEUNIT_H_ */
