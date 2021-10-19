/*
 * UnsignedInteger.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "UnsignedLong.h"

#include <string>

/**
 * The unsigned long creates an unsigned long object
 * @param value the initial value it should be set to
 */

UnsignedLong::UnsignedLong(const unsigned long value): value(value) {}

UnsignedLong::UnsignedLong(const UnsignedLong &l_value): value(l_value.value){}

UnsignedLong::operator unsigned long(){
	return value;
}

/**
 * The get class method returns the name of the class as a string
 * @return  a string representing the type name or more specifically unsigned long
 */

const std::string UnsignedLong::get_class() const {
	return "Unsigned Long";
}

const std::string UnsignedLong::to_string() const {
	return std::to_string(value);
}

const short UnsignedLong::short_value() const{
	return (short)value;
}

const unsigned short UnsignedLong::unsigned_short_value() const{
	return (unsigned short)value;
}

const short UnsignedLong::int_value() const{
	return (int)value;
}

const unsigned short UnsignedLong::unsigned_int_value() const{
	return (unsigned int)value;
}

const char UnsignedLong::byte_value() const{
	return (char)value;
}

const unsigned char UnsignedLong::unsigned_byte_value() const{
	return (unsigned char)value;
}

const short UnsignedLong::long_value() const{
	return (long)value;
}

const unsigned short UnsignedLong::unsigned_long_value() const{
	return (unsigned long)value;
}

const float UnsignedLong::float_value() const{
	return (float)value;
}

const double UnsignedLong::double_value() const{
	return (double)value;
}

const bool UnsignedLong::bool_value() const {
	return (bool)value;
}

