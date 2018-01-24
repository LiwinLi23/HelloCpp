/*
 * LTArray.h
 *
 *  Created on: 2017年9月3日
 *      Author: litao
 */

#ifndef BASIC_ARRAY_LTARRAY_H_
#define BASIC_ARRAY_LTARRAY_H_

#include <iostream>

using namespace std;

void testLTArray() {
	char* ptrsArray[] = {"String1", "String2", "String3"};
	cout << "ptrsArray is an array of pointers" << endl;

	char* arrays[2][3] = {{"Liwin", "Selia", "Sandy"}, {"Jordan", "Kobe", "Judy"}};
	char* (*arrayPtr)[3] = &(arrays[0]);
	cout << "arrayPtr is a pointer to array" << endl;
}

#endif /* BASIC_ARRAY_LTARRAY_H_ */
