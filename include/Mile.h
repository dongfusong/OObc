/*
 * Mile.h
 *
 *  Created on: 2014��6��8��
 *      Author: Thoughtworks
 */

#ifndef MILE_H_
#define MILE_H_
class Mile {
public:
	Mile(int val):_value(val){

	}
	bool operator ==(const Mile& rhs) const;
	bool operator !=(const Mile& rhs) const;

private:
	int _value;
};
#endif /* MILE_H_ */
