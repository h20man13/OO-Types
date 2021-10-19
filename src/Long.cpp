/*
 * UnsignedInteger.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "Long.h"

#include <string>

Long::Long(const long value) : value(value) {}

Long::Long(const Long &lvalue): value(lvalue.value){}

Long::operator long(){
	return value;
}

const std::string Long::get_class() const {
	return "Unsigned Long";
}

const std::string Long::to_string() const {
	return std::to_string(value);
}

const short Long::short_value() const{
	return (short)value;
}

const unsigned short Long::unsigned_short_value() const{
	return (unsigned short)value;
}

const short Long::int_value() const{
	return (int)value;
}

const unsigned short Long::unsigned_int_value() const{
	return (unsigned int)value;
}

const char Long::byte_value() const{
	return (char)value;
}

const unsigned char Long::unsigned_byte_value() const{
	return (unsigned char)value;
}

const short Long::long_value() const{
	return (long)value;
}

const unsigned short Long::unsigned_long_value() const{
	return (unsigned long)value;
}

const float Long::float_value() const{
	return (float)value;
}

const double Long::double_value() const{
	return (double)value;
}

const bool Long::bool_value() const {
	return (bool)value;
}


