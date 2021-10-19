/*
 * Object.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef STRING_H
#define STRING_H

#include <string>

#include "Object.h"

class String : public Object{
 private:
  std::string value;
 public:
  String(const std::string& value);
  String(const String& value);

  operator std::string();

  const std::string get_class() const;
  const std::string to_string() const;
  const bool bool_value() const;
};



#endif /* INCLUDE_COMMON_TYPES_OBJECT_H_ */
