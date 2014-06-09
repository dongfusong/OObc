/*
 * LengthUnit.cpp
 *
 *  Created on: 2014Äê6ÔÂ9ÈÕ
 *      Author: Thoughtworks
 */
#include "LengthUnit.h"


LengthUnit::OrderdLengthUnits LengthUnit::_orderdUnits;

const LengthUnit& LengthUnit::getBaseUnit() {
	return getINCH();
}

LengthUnit::LengthUnit(unsigned int amountsInBaseUnit, std::string unitName) :
		_amountsInBaseUnit(amountsInBaseUnit),_unitName(unitName) {
	_orderdUnits.addUnit(*this);
}

Amount LengthUnit::getAnmountInBaseUnit() const {
	return _amountsInBaseUnit;
}


#define _impl_get_func(typeName)\
		const LengthUnit& LengthUnit::get##typeName() {\
			static LengthUnit unit(_amount_of_baseUnit_in_one_##typeName, #typeName);\
			return unit;\
		}


_impl_get_func(MILE)
_impl_get_func(YARD)
_impl_get_func(FEET)
_impl_get_func(INCH)



const LengthUnit mile = MILE;
const LengthUnit yard = YARD;
const LengthUnit feet = FEET;
const LengthUnit inch = INCH;

