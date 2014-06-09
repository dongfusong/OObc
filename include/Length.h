/*
 * BaseUnit.h
 *
 *  Created on: 2014Äê6ÔÂ8ÈÕ
 *      Author: Thoughtworks
 */

#ifndef BASEUNIT_H_
#define BASEUNIT_H_
#include <ostream>
#include "typeDefine.h"
#include "LengthUnit.h"
#include "Quantity.h"
#include "Formatter.h"

class Length : public Quantity<LengthUnit>{
public:
	Length(const Amount& value, const LengthUnit& unit):Quantity<LengthUnit>(value, unit){

	}

	void format(std::ostream& os, Formatter& formatter)const
	{
		formatter.setInfo(&os, getAmountInBaseUnit());
		LengthUnit::visitAllUnits(&formatter);
	}

};

#define Mile(value) Length(value, MILE)
#define Yard(value) Length(value, YARD)
#define Feet(value) Length(value, FEET)
#define Inch(value) Length(value, INCH)



#endif /* BASEUNIT_H_ */
