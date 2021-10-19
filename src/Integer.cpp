/*
 * Integer.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "Integer.h"

#include <string>

Integer::Integer(const int value) : value(value) {}

Integer::Integer(const Integer &int_value): value(int_value.value){}

Integer::operator int(){
	return value;
}

const std::string Integer::get_class() const {
	return "Integer";
}

const std::string Integer::to_string() const {
	return std::to_string(value);
}

const short Integer::short_value() const{
	return (short)value;
}

const unsigned short Integer::unsigned_short_value() const{
	return (unsigned short)value;
}

const short Integer::int_value() const{
	return (int)value;
}

const unsigned short Integer::unsigned_int_value() const{
	return (unsigned int)value;
}

const char Integer::byte_value() const{
	return (char)value;
}

const unsigned char Integer::unsigned_byte_value() const{
	return (unsigned char)value;
}

const short Integer::long_value() const{
	return (long)value;
}

const unsigned short Integer::unsigned_long_value() const{
	return (unsigned long)value;
}

const float Integer::float_value() const{
	return (float)value;
}

const double Integer::double_value() const{
	return (double)value;
}

const bool Integer::bool_value() const {
	return (bool)value;
}

