/*
 * Integer.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "Short.h"

#include <string>

Short::Short(const short value) : value(value){}

Short::Short(const Short &value): value(value.value){}

Short::operator short(){
	return value;
}

const std::string Short::get_class() const {
	return "Short";
}

const std::string Short::to_string() const {
	return std::to_string(value);
}

const short Short::short_value() const{
	return (short)value;
}

const unsigned short Short::unsigned_short_value() const{
	return (unsigned short)value;
}

const short Short::int_value() const{
	return (int)value;
}

const unsigned short Short::unsigned_int_value() const{
	return (unsigned int)value;
}

const char Short::byte_value() const{
	return (char)value;
}

const unsigned char Short::unsigned_byte_value() const{
	return (unsigned char)value;
}

const short Short::long_value() const{
	return (long)value;
}

const unsigned short Short::unsigned_long_value() const{
	return (unsigned long)value;
}

const float Short::float_value() const{
	return (float)value;
}

const double Short::double_value() const{
	return (double)value;
}

const bool Short::bool_value() const {
	return (bool)value;
}

