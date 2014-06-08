/*
 * Yard.h
 *
 *  Created on: 2014Äê6ÔÂ8ÈÕ
 *      Author: Thoughtworks
 */

#ifndef YARD_H_
#define YARD_H_
#include "typeDefine.h"

class Yard {
public:
	const static Amount amount_of_baseUnit = 1;
	Yard(const Amount& val):_value(val * amount_of_baseUnit){

	}
	bool operator==(const Yard& rhs) const{
		return _value == rhs._value;
	}
	bool operator!=(const Yard& rhs) const{
		return !operator==(rhs);
	}

private:
	Amount _value;
};





#endif /* YARD_H_ */
