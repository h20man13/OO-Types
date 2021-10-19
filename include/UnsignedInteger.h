/*
 * Number.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef UNSIGNEDINTEGER_H
#define UNSIGNEDINTEGER_H


#include "Number.h"

class UnsignedInteger: public Number{
private:
	unsigned int value;
public:
	 UnsignedInteger(const unsigned int value);
	 UnsignedInteger(const UnsignedInteger &integer);

	 operator unsigned int();

	const short short_value() const;
    const unsigned short unsigned_short_value() const;
	const short int_value() const;
	const unsigned short unsigned_int_value() const;
	const char byte_value() const;
	const unsigned char unsigned_byte_value() const;
	const short long_value() const;
	const unsigned short unsigned_long_value() const;
	const float float_value() const;
	const double double_value() const;

	 const std::string get_class() const;
	 const std::string to_string() const;
	 const bool bool_value() const;
};



#endif /* INCLUDE_COMMON_TYPES_NUMBER_H_ */
