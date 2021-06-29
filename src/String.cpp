/*
 * String.cpp
 *
 *  Created on: Jun 24, 2021
 *      Author: jacob
 */

#include "String.h"
#include "Object.h"

String::String(const std::string value) : Object(value) {}

String::operator std::string(){
	return get_value();
}
const std::string String::get_class() const {
	return "String";
}

