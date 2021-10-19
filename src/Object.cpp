/*
 * Object.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include <iostream>
#include "Object.h"

template<typename Base, typename Type>
bool instanceof(const Type*) {
   return std::is_base_of<Base, Type>::value;
}

const bool Object::operator==(const Object &value) const{
  return this == &value;
}

const bool Object::operator!=(const Object& value) const{
  return this != &value;
}