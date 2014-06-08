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
#include <map>

#define _amount_of_baseUnit_in_one_MILE _amount_of_baseUnit_in_one_YARD * 1760
#define _amount_of_baseUnit_in_one_YARD _amount_of_baseUnit_in_one_FEET * 3
#define _amount_of_baseUnit_in_one_FEET _amount_of_baseUnit_in_one_INCH * 12
#define _amount_of_baseUnit_in_one_INCH 1


template <typename Unit>
class TypeTable{
public:
	static TypeTable& getInstance(){
		static TypeTable instance;
		return instance;
	}
	void registType(unsigned int amountInBaseUnit, std::string typeName){
		_types[amountInBaseUnit] = typeName;
	}

	void format(std::ostream& os, unsigned int amountsOfBaseUnit){
		bool firstFlg = true;
		for (reverse_iterator iter = _types.rbegin(); iter != _types.rend(); iter++){
			size_t num = amountsOfBaseUnit / iter->first;
			if (num){
				if (!firstFlg){
					os << " ";
				}
				firstFlg = false;
				os << num << " " << iter->second;
				amountsOfBaseUnit -= iter->first * num;
			}
		}
	}
private:
	typedef std::map<unsigned int, std::string >::reverse_iterator reverse_iterator;
	std::map<unsigned int, std::string > _types;
};


#define _declared_func(typeName)\
	static const LengthUnit& get##typeName()\

class LengthUnit{
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
public:
	static void format(std::ostream& os, unsigned int amountsOfBaseUnit);
private:
	unsigned int _amountsInBaseUnit;
};

#define MILE (LengthUnit::getMILE())
#define YARD (LengthUnit::getYARD())
#define FEET (LengthUnit::getFEET())
#define INCH (LengthUnit::getINCH())
#define BASE_UNIT INCH

#endif /* LENGTHUNIT_H_ */
