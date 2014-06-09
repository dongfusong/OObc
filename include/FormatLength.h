/*
 * LengthFormatter.h
 *
 *  Created on: 2014Äê6ÔÂ9ÈÕ
 *      Author: Thoughtworks
 */

#ifndef LENGTHFORMATTER_H_
#define LENGTHFORMATTER_H_
#include <ostream>
#include "length.h"
#include "Formatter.h"

class FormatLength{
public:
	FormatLength(const Length& length, Formatter& fomatter):_length(length),_formatter(fomatter){

	}
private:
	void format(std::ostream& os)const
	{
		_length.format(os, _formatter);
	}

	friend std::ostream& operator<<(std::ostream& os,const FormatLength& formatLength){
		formatLength.format(os);
		return os;
	}

	const Length& _length;
	Formatter& _formatter;
};




#endif /* LENGTHFORMATTER_H_ */
