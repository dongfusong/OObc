/*
 * Mile.h
 *
 *  Created on: 2014Äê6ÔÂ8ÈÕ
 *      Author: Thoughtworks
 */

#ifndef MILE_H_
#define MILE_H_

typedef unsigned int Amount;

class Mile {
public:
	Mile(const Amount& val):_value(val){

	}
	bool operator ==(const Mile& rhs) const;
	bool operator !=(const Mile& rhs) const;

private:
	Amount _value;
};
#endif /* MILE_H_ */
