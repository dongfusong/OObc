/*
 * Formatter.h
 *
 *  Created on: 2014Äê6ÔÂ9ÈÕ
 *      Author: Thoughtworks
 */

#ifndef FORMATTER_H_
#define FORMATTER_H_
#include <ostream>
#include "visitor.h"

class Formatter: public Visitor {
public:
	Formatter():_os(NULL), _totalAmount(0){

	}
	void setInfo(std::ostream* os, size_t totalAmount){
		_os = os;
		_totalAmount = totalAmount;
	}

	virtual bool visit(const LengthUnit& unit) = 0;
protected:
	std::ostream* _os;
	size_t _totalAmount;

};

class MultiFormatter: public Formatter {
public:
	MultiFormatter() :firstFlg(true) {

	}
	bool visit(const LengthUnit& unit) {
		if (_totalAmount == 0) {
			*_os << "0" << " " << LengthUnit::getBaseUnit();
			return false;
		}
		size_t num = _totalAmount / unit.getAnmountInBaseUnit();
		if (num != 0) {
			if (!firstFlg) {
				*_os << " ";
			}
			*_os << num << " " << unit;
			firstFlg = false;
			_totalAmount %= unit.getAnmountInBaseUnit();
			if (!_totalAmount){
				return false;
			}
		}
		return true;
	}
private:
	bool firstFlg;
};


class SingleUnitFormatter : public Formatter{
public:
	SingleUnitFormatter(){

	}
	bool visit(const LengthUnit& unit){
		*_os << _totalAmount << " " << LengthUnit::getBaseUnit();
		return false;
	}

};


#endif /* FORMATTER_H_ */
