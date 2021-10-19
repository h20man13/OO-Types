/*
 * Integer.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "UnsignedShort.h"

#include <string>

UnsignedShort::UnsignedShort(const unsigned short value) : value(value) {}

UnsignedShort::UnsignedShort(const UnsignedShort &s_value) : value(s_value.value){}

UnsignedShort::operator unsigned short(){
	return value;
}

const std::string UnsignedShort::get_class() const {
	return "Unsigned Short";
}

const std::string UnsignedShort::to_string() const{
	return std::to_string(value);
}

const short UnsignedShort::short_value() const{
	return (short)value;
}

const unsigned short UnsignedShort::unsigned_short_value() const{
	return (unsigned short)value;
}

const short UnsignedShort::int_value() const{
	return (int)value;
}

const unsigned short UnsignedShort::unsigned_int_value() const{
	return (unsigned int)value;
}

const char UnsignedShort::byte_value() const{
	return (char)value;
}

const unsigned char UnsignedShort::unsigned_byte_value() const{
	return (unsigned char)value;
}

const short UnsignedShort::long_value() const{
	return (long)value;
}

const unsigned short UnsignedShort::unsigned_long_value() const{
	return (unsigned long)value;
}

const float UnsignedShort::float_value() const{
	return (float)value;
}

const double UnsignedShort::double_value() const{
	return (double)value;
}

const bool UnsignedShort::bool_value() const {
	return (bool)value;
}

