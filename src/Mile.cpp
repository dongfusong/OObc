/*
 * Mile.cpp
 *
 *  Created on: 2014��6��8��
 *      Author: Thoughtworks
 */
#include "mile.h"

bool Mile::operator ==(const Mile& rhs) const {
	return _value == rhs._value;
}

bool Mile::operator !=(const Mile& rhs) const {
	return !operator ==(rhs);
}
