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

class Length : public Quantity<LengthUnit>{
public:

	class Formatter : public Visitor{
	public:
		Formatter(std::ostream& os, size_t totalAmount):_os(os),_totalAmount(totalAmount),firstFlg(true){

		}
		void visit(const LengthUnit& unit){
			if (_totalAmount == 0 && firstFlg){
				_os << "0" << " " << LengthUnit::getBaseUnit();
				return;
			}
			size_t num = _totalAmount / unit.getAnmountInBaseUnit();
			if (num != 0){
				if (!firstFlg){
					_os << " ";
				}
				_os << num << " " << unit;
				firstFlg = false;
				_totalAmount %= unit.getAnmountInBaseUnit();
			}
		}
	private:
		std::ostream& _os;
		size_t _totalAmount;
		bool firstFlg;
	};

	Length(const Amount& value, const LengthUnit& unit):Quantity<LengthUnit>(value, unit){

	}

	friend const std::ostream& operator<<(std::ostream& os, const Length& rhs)
	{
		Formatter formatter(os, rhs.getAmountInBaseUnit());
		LengthUnit::visitAllUnits(&formatter);
		return os;
	}
};

#define Mile(value) Length(value, MILE)
#define Yard(value) Length(value, YARD)
#define Feet(value) Length(value, FEET)
#define Inch(value) Length(value, INCH)



#endif /* BASEUNIT_H_ */
