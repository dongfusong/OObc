/*
 * BaseUnit.h
 *
 *  Created on: 2014��6��8��
 *      Author: Thoughtworks
 */

#ifndef BASEUNIT_H_
#define BASEUNIT_H_
#include <ostream>
#include "typeDefine.h"
#include "LengthUnit.h"
#include "Quantity.h"


class Length : public Quantity<LengthUnit>{
public:
	Length(const Amount& value, const LengthUnit& unit):Quantity<LengthUnit>(value, unit){

	}

	friend const std::ostream& operator<<(std::ostream& os, const Length& rhs){
		LengthUnit::format(os, rhs.getAmountInBaseUnit());
		return os;
	}
};

#define Mile(value) Length(value, MILE)
#define Yard(value) Length(value, YARD)
#define Feet(value) Length(value, FEET)
#define Inch(value) Length(value, INCH)



#endif /* BASEUNIT_H_ */
