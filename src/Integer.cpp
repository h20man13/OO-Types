/*
 * Integer.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "Integer.h"

#include <string>

Integer::Integer(const int value) : IntVal(value) {}

Integer::operator int(){
	return get_value();
}

const std::string Integer::get_class() const {
	return "Integer";
}
