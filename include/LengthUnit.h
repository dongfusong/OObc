/*
 * LengthUnit.h
 *
 *  Created on: 2014Äê6ÔÂ8ÈÕ
 *      Author: Thoughtworks
 */

#ifndef LENGTHUNIT_H_
#define LENGTHUNIT_H_
#include "typeDefine.h"

#define _amount_of_baseUnit_in_one_Mile _amount_of_baseUnit_in_one_Yard * 1760
#define _amount_of_baseUnit_in_one_Yard _amount_of_baseUnit_in_one_Feet * 3
#define _amount_of_baseUnit_in_one_Feet _amount_of_baseUnit_in_one_Inch * 12
#define _amount_of_baseUnit_in_one_Inch 1

#define _decl_lenth_get_unit(name)\
	_decl_get_unit(Length, name)


#define _impl_length_get_unit(name)\
		_impl_get_unit(Length, name)


#define _get_unit_func(type, name)\
	type##Unit::get##name()


#define _decl_get_unit(type, name)\
	const static type##Unit& get##name()\


#define _impl_get_unit(type, name)\
const type##Unit& _get_unit_func(type, name){\
	static type##Unit unit(_amount_of_baseUnit_in_one_##name);\
	return unit;\
}


class LengthUnit{
public:
	_decl_lenth_get_unit(Mile);
	_decl_lenth_get_unit(Yard);
	_decl_lenth_get_unit(Feet);
	_decl_lenth_get_unit(Inch);

	const static LengthUnit& getBaseUnit(){
		return getInch();
	}
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

_impl_length_get_unit(Mile)
_impl_length_get_unit(Yard)
_impl_length_get_unit(Feet)
_impl_length_get_unit(Inch)

#define MILE (LengthUnit::getMile())
#define YARD (LengthUnit::getYard())
#define FEET (LengthUnit::getFeet())
#define INCH (LengthUnit::getInch())
#define BASE_UNIT INCH

#endif /* LENGTHUNIT_H_ */
