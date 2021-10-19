/*
 * String.cpp
 *
 *  Created on: Jun 24, 2021
 *      Author: jacob
 */

#include "Boolean.h"

Boolean::Boolean(const bool value): value(value){
	this->value = value;
}

Boolean::Boolean(const Boolean &obj): value(obj.value){}

Boolean::operator bool(){
	return value;
}

const std::string Boolean::to_string() const {
	return std::to_string(value);
}

const std::string Boolean::get_class() const {
	return "Boolean";
}

const bool Boolean::bool_value() const {
	return value;
}

