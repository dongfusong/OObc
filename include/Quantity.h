/*
 * Quantity.h
 *
 *  Created on: 2014Äê6ÔÂ8ÈÕ
 *      Author: Thoughtworks
 */

#ifndef QUANTITY_H_
#define QUANTITY_H_

template <typename Unit>
class Quantity {
public:
	Quantity(const Amount& value, const Unit& unit)
	:_value(value),_unit(unit){}

	Amount getAmountInBaseUnit()const{
		return _value * _unit.getAnmountInBaseUnit();
	}
	bool operator==(const Quantity& rhs) const{
		return getAmountInBaseUnit() == rhs.getAmountInBaseUnit();
	}
	bool operator!=(const Quantity& rhs) const{
		return !operator==(rhs);
	}

	Quantity<Unit> operator+(const Quantity& rhs){
		return Quantity(getAmountInBaseUnit() + rhs.getAmountInBaseUnit(), Unit::getBaseUnit());
	}
	virtual ~Quantity(){}

protected:
	Amount _value;
	const Unit& _unit;
};





#endif /* QUANTITY_H_ */
