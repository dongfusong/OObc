/*
 * Mile.cpp
 *
 *  Created on: 2014Äê6ÔÂ8ÈÕ
 *      Author: Thoughtworks
 */
#include "mile.h"

bool Mile::operator ==(const Mile& rhs) const {
	return _value == rhs._value;
}

bool Mile::operator !=(const Mile& rhs) const {
	return !operator ==(rhs);
}
