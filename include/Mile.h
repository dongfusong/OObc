/*
 * Mile.h
 *
 *  Created on: 2014Äê6ÔÂ8ÈÕ
 *      Author: Thoughtworks
 */

#ifndef MILE_H_
#define MILE_H_
#include "typeDefine.h"

class Mile {
public:
	const static Amount amount_of_baseUnit = 1760;
	Mile(const Amount& val):_value(val * amount_of_baseUnit){

	}
	bool operator==(const Mile& rhs) const;
	bool operator!=(const Mile& rhs) const;

private:
	Amount _value;
};
#endif /* MILE_H_ */
