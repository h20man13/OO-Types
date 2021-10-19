/*
 * Integer.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "Byte.h"

#include <string>

Byte::Byte(const char value): value(value) {}

Byte::Byte(const Byte &byte): value(byte.value){}

Byte::operator char(){
	return value;
}

const std::string Byte::get_class() const {
	return "Byte";
}

const std::string Byte::to_string() const {
	return std::to_string(value);
}

const short Byte::short_value() const{
	return (short)value;
}

const unsigned short Byte::unsigned_short_value() const{
	return (unsigned short)value;
}

const short Byte::int_value() const{
	return (int)value;
}

const unsigned short Byte::unsigned_int_value() const{
	return (unsigned int)value;
}

const char Byte::byte_value() const{
	return (char)value;
}

const unsigned char Byte::unsigned_byte_value() const{
	return (unsigned char)value;
}

const short Byte::long_value() const{
	return (long)value;
}

const unsigned short Byte::unsigned_long_value() const{
	return (unsigned long)value;
}

const float Byte::float_value() const{
	return (float)value;
}

const double Byte::double_value() const{
	return (double)value;
}

const bool Byte::bool_value() const {
	return (bool)value;
}

