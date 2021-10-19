/*
 * UnsignedInteger.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "UnsignedInteger.h"

#include <string>

UnsignedInteger::UnsignedInteger(const unsigned int value) : value(value) {}

UnsignedInteger::UnsignedInteger(const UnsignedInteger &integer): value(integer.value){}

UnsignedInteger::operator unsigned int(){
	return value;
}

const std::string UnsignedInteger::get_class() const {
	return "Unsigned Integer";
}

const std::string UnsignedInteger::to_string() const {
	return std::to_string(value);
}

const short UnsignedInteger::short_value() const{
	return (short)value;
}

const unsigned short UnsignedInteger::unsigned_short_value() const{
	return (unsigned short)value;
}

const short UnsignedInteger::int_value() const{
	return (int)value;
}

const unsigned short UnsignedInteger::unsigned_int_value() const{
	return (unsigned int)value;
}

const char UnsignedInteger::byte_value() const{
	return (char)value;
}

const unsigned char UnsignedInteger::unsigned_byte_value() const{
	return (unsigned char)value;
}

const short UnsignedInteger::long_value() const{
	return (long)value;
}

const unsigned short UnsignedInteger::unsigned_long_value() const{
	return (unsigned long)value;
}

const float UnsignedInteger::float_value() const{
	return (float)value;
}

const double UnsignedInteger::double_value() const{
	return (double)value;
}

const bool UnsignedInteger::bool_value() const {
	return (bool)value;
}


