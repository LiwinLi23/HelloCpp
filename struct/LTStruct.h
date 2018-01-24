/*
 * LTStruct.h
 *
 *  Created on: 2017年3月28日
 *      Author: litao
 */

#ifndef STRUCT_LTSTRUCT_H_
#define STRUCT_LTSTRUCT_H_

#include <iostream>

using namespace std;

struct LTStruct {
	char hour;
	int	value;
	char seq;
};

struct LTSupersetStruct {
	char c;
	LTStruct subSet;
};

void test_struct_size() {
	cout << "LTStruct size: " << sizeof(LTStruct) << endl;
	LTStruct structArray[10];
	cout << "One array with 10 items of LTStruct size: " << sizeof(structArray) << endl;
	cout << "Superset structure size: " << sizeof(LTSupersetStruct)  << endl;
}

#endif /* STRUCT_LTSTRUCT_H_ */









