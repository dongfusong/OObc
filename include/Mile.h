/*
 * Mile.h
 *
 *  Created on: 2014Äê6ÔÂ8ÈÕ
 *      Author: Thoughtworks
 */

#ifndef MILE_H_
#define MILE_H_
#include "typeDefine.h"
#include "BaseUnit.h"

class Mile : public BaseUnit{
public:
	Mile(const Amount& val):BaseUnit(val){

	}
	virtual Amount getAmountOfBaseUnit()const{
		return 1760;
	}
};
#endif /* MILE_H_ */
