/*
 * String.cpp
 *
 *  Created on: Jun 24, 2021
 *      Author: jacob
 */

#include "Boolean.h"
#include "Object.h"

Boolean::Boolean(const bool value) : Object(value) {}

Boolean::operator bool(){
	return get_value();
}

const std::string Boolean::get_class() const {
	return "Boolean";
}

