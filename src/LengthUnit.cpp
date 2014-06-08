/*
 * LengthUnit.cpp
 *
 *  Created on: 2014Äê6ÔÂ9ÈÕ
 *      Author: Thoughtworks
 */
#include "LengthUnit.h"

const LengthUnit& LengthUnit::getBaseUnit() {
	return getINCH();
}

LengthUnit::LengthUnit(unsigned int amountsInBaseUnit, std::string unitName) :
		_amountsInBaseUnit(amountsInBaseUnit) {
	TypeTable<LengthUnit>::getInstance().registType(amountsInBaseUnit,
			unitName);
}

Amount LengthUnit::getAnmountInBaseUnit() const {
	return _amountsInBaseUnit;
}

void LengthUnit::format(std::ostream& os, unsigned int amountsOfBaseUnit) {
	TypeTable<LengthUnit>::getInstance().format(os, amountsOfBaseUnit);
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

