/*
 * BoolType.h
 *
 *  Created on: 2017年4月16日
 *      Author: litao
 */

#ifndef BASIC_BUILDINTYPES_BOOLTYPE_H_
#define BASIC_BUILDINTYPES_BOOLTYPE_H_

#include <iostream>
using namespace std;

void testBoolType(void) {
	bool boolValue = true;
	cout << "Size of (bool) is " << sizeof(bool) << endl;
	cout << "true value: " << (int)true << " false value: " << (int)false << endl;
}


#endif /* BASIC_BUILDINTYPES_BOOLTYPE_H_ */
