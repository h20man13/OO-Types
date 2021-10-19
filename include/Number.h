/*
 * Number.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef NUMBER_H
#define NUMBER_H

#include "Object.h"

class Number: public Object{
public:
	 
	 virtual const short short_value() const = 0;
	 virtual const unsigned short unsigned_short_value() const = 0;
	 virtual const short int_value() const = 0;
	 virtual const unsigned short unsigned_int_value() const = 0;
	 virtual const char byte_value() const = 0;
	 virtual const unsigned char unsigned_byte_value() const = 0;
	 virtual const short long_value() const = 0;
	 virtual const unsigned short unsigned_long_value() const = 0;
	 virtual const float float_value() const = 0;
	 virtual const double double_value() const = 0;
	 virtual const bool bool_value() const = 0;

	 virtual const std::string to_string() const = 0;
	 virtual const std::string get_class() const = 0;
};



#endif /* INCLUDE_COMMON_TYPES_NUMBER_H_ */
