/*
 * UnsignedInteger.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "Long.h"
#include "IntVal.h"

#include <string>

Long::Long(const long value) : IntVal(value) {};

Long::operator long(){
	return get_value();
}

const std::string Long::get_class() const {
	return "Unsigned Long";
}


