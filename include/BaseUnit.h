/*
 * BaseUnit.h
 *
 *  Created on: 2014Äê6ÔÂ8ÈÕ
 *      Author: Thoughtworks
 */

#ifndef BASEUNIT_H_
#define BASEUNIT_H_
#include "typeDefine.h"
class BaseUnit {
public:
	BaseUnit(const Amount& value):_value(value){}
	virtual Amount getAmountOfBaseUnit()const = 0;

	Amount getAmountInBaseUnit()const{
		return _value * getAmountOfBaseUnit();
	}

	bool operator==(const BaseUnit& rhs) const{
		return getAmountInBaseUnit() == rhs.getAmountInBaseUnit();
	}
	bool operator!=(const BaseUnit& rhs) const{
		return !operator==(rhs);
	}
	virtual ~BaseUnit(){}
protected:
	Amount _value;
};





#endif /* BASEUNIT_H_ */
