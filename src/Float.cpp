/*
 * Float.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "Float.h"

#include <string>

Float::Float(const float value): value(value){}

Float::Float(const Float &f_value): value(f_value.value){}

Float::operator float(){
	return value;
}

const std::string Float::get_class() const {
	return "Float";
}

const std::string Float::to_string() const {
	return std::to_string(value);
}

const short Float::short_value() const{
	return (short)value;
}

const unsigned short Float::unsigned_short_value() const{
	return (unsigned short)value;
}

const short Float::int_value() const{
	return (int)value;
}

const unsigned short Float::unsigned_int_value() const{
	return (unsigned int)value;
}

const char Float::byte_value() const{
	return (char)value;
}

const unsigned char Float::unsigned_byte_value() const{
	return (unsigned char)value;
}

const short Float::long_value() const{
	return (long)value;
}

const unsigned short Float::unsigned_long_value() const{
	return (unsigned long)value;
}

const float Float::float_value() const{
	return (float)value;
}

const double Float::double_value() const{
	return (double)value;
}

const bool Float::bool_value() const {
	return (bool)value;
}
