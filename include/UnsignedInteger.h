/*
 * Number.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef UNSIGNEDINTEGER_H
#define UNSIGNEDINTEGER_H


#include "Number.h"
#include "IntVal.h"

class UnsignedInteger: public IntVal<unsigned int>{
public:
	 UnsignedInteger(const unsigned int value);

	 operator unsigned int();

	 const std::string get_class() const;
};



#endif /* INCLUDE_COMMON_TYPES_NUMBER_H_ */
