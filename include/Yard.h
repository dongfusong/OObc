/*
 * Yard.h
 *
 *  Created on: 2014��6��8��
 *      Author: Thoughtworks
 */

#ifndef YARD_H_
#define YARD_H_

#include "typeDefine.h"
#include "BaseUnit.h"

class Yard : public BaseUnit{
public:
	Yard(const Amount& val):BaseUnit(val){

	}
	virtual Amount getAmountOfBaseUnit()const{
			return 1;
	}
};





#endif /* YARD_H_ */
