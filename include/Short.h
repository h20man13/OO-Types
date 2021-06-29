/*
 * Number.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef SHORT_H
#define SHORT_H


#include "IntVal.h"

class Short: public IntVal<short int>{
public:
	Short(const short int value);

	operator short int();

	const std::string get_class() const;
};



#endif /* INCLUDE_COMMON_TYPES_NUMBER_H_ */
