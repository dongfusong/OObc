/*
 * LengthUnit.h
 *
 *  Created on: 2014Äê6ÔÂ8ÈÕ
 *      Author: Thoughtworks
 */

#ifndef LENGTHUNIT_H_
#define LENGTHUNIT_H_
#include "typeDefine.h"
#include <string>
#include <iostream>
#include "OrderdUnits.h"

#define _amount_of_baseUnit_in_one_MILE _amount_of_baseUnit_in_one_YARD * 1760
#define _amount_of_baseUnit_in_one_YARD _amount_of_baseUnit_in_one_FEET * 3
#define _amount_of_baseUnit_in_one_FEET _amount_of_baseUnit_in_one_INCH * 12
#define _amount_of_baseUnit_in_one_INCH 1

#define _declared_func(typeName)\
	static const LengthUnit& get##typeName()\


class LengthUnit{
public:
	class LessThan{
	public:
		bool operator()(const LengthUnit& unit1, const LengthUnit& unit2){
			return unit1.getAnmountInBaseUnit() > unit2.getAnmountInBaseUnit();
		}
	};
public:
	_declared_func(MILE);
	_declared_func(YARD);
	_declared_func(FEET);
	_declared_func(INCH);

	static const LengthUnit& getBaseUnit();
private:
	LengthUnit(unsigned int amountsInBaseUnit, std::string unitName);
public:
	Amount getAnmountInBaseUnit() const;
	typedef OrderdUnits<LengthUnit, LessThan> OrderdLengthUnits;

	static void visitUnits(Visitor* visitor){
		_orderdUnits.accept(visitor);
	}

	friend std::ostream& operator<< (std::ostream& os, const LengthUnit& unit){
		os << unit._unitName;
		return os;
	}
private:
	unsigned int _amountsInBaseUnit;
	std::string _unitName;

	static OrderdUnits<LengthUnit, LessThan> _orderdUnits;
};

#define MILE (LengthUnit::getMILE())
#define YARD (LengthUnit::getYARD())
#define FEET (LengthUnit::getFEET())
#define INCH (LengthUnit::getINCH())
#define BASE_UNIT INCH

#endif /* LENGTHUNIT_H_ */
