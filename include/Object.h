/*
 * Object.h
 *
 *  Created on: Jun 25, 2021
 *      Author: jacob
 */

#ifndef OBJECT_H
#define OBJECT_H

template<typename Base, typename Type>
bool instanceof(const Type*);

#include <string>

class Object{
public:
	virtual const std::string to_string() const = 0;
	virtual const std::string get_class() const = 0;

	virtual const bool operator==(const Object &value) const;
	virtual const bool operator!=(const Object &value) const;

	virtual const bool bool_value() const = 0;
};



#endif /* Object */
