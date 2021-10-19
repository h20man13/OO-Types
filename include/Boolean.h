/*
 * Object.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <string>

#include "Object.h"

/**
 * @brief The boolean class is used to 
 * 
 */

class Boolean : public Object{
private:
	bool value; //The value that a boolean holds
public:
	 Boolean(const bool value); //The default constructor for a boolean object
	 Boolean(const Boolean& bool_value); //The copy constructor for a boolean object
	 
	 operator bool();

	 const std::string to_string() const; // The to string method for a booelan object
	 const std::string get_class() const;
	 const bool bool_value() const;
};



#endif /* INCLUDE_COMMON_TYPES_OBJECT_H_ */
