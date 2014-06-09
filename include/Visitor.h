/*
 * Visitor.h
 *
 *  Created on: 2014��6��9��
 *      Author: Thoughtworks
 */

#ifndef VISITOR_H_
#define VISITOR_H_
class LengthUnit;
class Visitor{
public:
	virtual bool visit(const LengthUnit& unit) = 0;
	virtual ~Visitor() {

	}
};
#endif /* VISITOR_H_ */
