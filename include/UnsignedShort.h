/*
 * Number.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef UNSIGNEDSHORT_H
#define UNSIGNEDSHORT_H


#include "Number.h"

class UnsignedShort: public Number{
private:
	unsigned short value;
public:
	UnsignedShort(const unsigned short value);
	UnsignedShort(const UnsignedShort &value);

	operator unsigned short();

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
