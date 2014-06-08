/*
 * BaseUnit.h
 *
 *  Created on: 2014��6��8��
 *      Author: Thoughtworks
 */

#ifndef BASEUNIT_H_
#define BASEUNIT_H_
#include "typeDefine.h"
#include "LengthUnit.h"
#include "Quantity.h"

typedef  Quantity<LengthUnit> Length;

#define Mile(value) Length(value, MILE)
#define Yard(value) Length(value, YARD)
#define Feet(value) Length(value, FEET)
#define Inch(value) Length(value, INCH)

#endif /* BASEUNIT_H_ */
