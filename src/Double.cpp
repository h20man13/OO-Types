/*
 * Double.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "Double.h"

#include <string>

Double::Double(const double value): value(value){}

Double::Double(const Double &d_value): value(d_value.value){}

Double::operator double(){
	return value;
}

const std::string Double::get_class() const {
	return "Double";
}

const std::string Double::to_string() const {
	return std::to_string(value);
}

const short Double::short_value() const{
	return (short)value;
}

const unsigned short Double::unsigned_short_value() const{
	return (unsigned short)value;
}

const short Double::int_value() const{
	return (int)value;
}

const unsigned short Double::unsigned_int_value() const{
	return (unsigned int)value;
}

const char Double::byte_value() const{
	return (char)value;
}

const unsigned char Double::unsigned_byte_value() const{
	return (unsigned char)value;
}

const short Double::long_value() const{
	return (long)value;
}

const unsigned short Double::unsigned_long_value() const{
	return (unsigned long)value;
}

const float Double::float_value() const{
	return (float)value;
}

const double Double::double_value() const{
	return (double)value;
}

const bool Double::bool_value() const {
	return (bool)value;
}
