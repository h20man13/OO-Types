/*
 * String.cpp
 *
 *  Created on: Jun 24, 2021
 *      Author: jacob
 */

#include "String.h"
#include "Object.h"

String::String(const std::string& value): value(value){}

String::String(const String &value) : value(value.value){}

String::operator std::string(){
	return value;
}

const std::string String::get_class() const {
	return "String";
}

const std::string String::to_string() const {
  return value;
}

const bool String::bool_value() const {
	return value == "";
}

