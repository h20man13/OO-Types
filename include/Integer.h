/*
 * Number.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef INTEGER_H
#define INTEGER_H

#include "Number.h"

class Integer: public Number{
private:
	int value;
public:
	Integer(const int value);
	Integer(const Integer &integer);

	operator int();

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
