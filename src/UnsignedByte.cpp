/*
 * Integer.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "UnsignedByte.h"

#include <string>

UnsignedByte::UnsignedByte(const unsigned char value): value(value) {}

UnsignedByte::UnsignedByte(const UnsignedByte &byte): value(byte.value){}

UnsignedByte::operator unsigned char(){
	return value;
}

const std::string UnsignedByte::get_class() const {
	return "Unsigned Byte";
}

const std::string UnsignedByte::to_string() const {
	return std::to_string(value);
}

const short UnsignedByte::short_value() const{
	return (short)value;
}

const unsigned short UnsignedByte::unsigned_short_value() const{
	return (unsigned short)value;
}

const short UnsignedByte::int_value() const{
	return (int)value;
}

const unsigned short UnsignedByte::unsigned_int_value() const{
	return (unsigned int)value;
}

const char UnsignedByte::byte_value() const{
	return (char)value;
}

const unsigned char UnsignedByte::unsigned_byte_value() const{
	return (unsigned char)value;
}

const short UnsignedByte::long_value() const{
	return (long)value;
}

const unsigned short UnsignedByte::unsigned_long_value() const{
	return (unsigned long)value;
}

const float UnsignedByte::float_value() const{
	return (float)value;
}

const double UnsignedByte::double_value() const{
	return (double)value;
}

const bool UnsignedByte::bool_value() const {
	return (bool)value;
}



