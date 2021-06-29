/*
 * UnsignedInteger.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "UnsignedInteger.h"
#include "IntVal.h"

#include <string>

UnsignedInteger::UnsignedInteger(const unsigned int value) : IntVal(value) {};

UnsignedInteger::operator unsigned int(){
	return get_value();
}

const std::string UnsignedInteger::get_class() const {
	return "Unsigned Integer";
}


