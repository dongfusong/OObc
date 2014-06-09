/*
 * OrderdUnits.h
 *
 *  Created on: 2014��6��9��
 *      Author: Thoughtworks
 */

#ifndef ORDERDUNITS_H_
#define ORDERDUNITS_H_
#include "Visitor.h"
#include <vector>
#include <algorithm>

template <typename UNIT, typename LessThan>
class OrderdUnits{
public:
	void addUnit(const UNIT& unit){
		_units.push_back(unit);
		std::sort(_units.begin(), _units.end(), LessThan());
	}
	void accept(Visitor* visitor)const
	{
		for (size_t i = 0; i < _units.size(); i++)
		{
			if (false == visitor->visit(_units[i])){
				return;
			}
		}
	}
private:
	std::vector<UNIT> _units;
};

#endif /* ORDERDUNITS_H_ */
