/*
 * CurlyBraceDelimitedList.h
 *
 *  Created on: 2017年4月19日
 *      Author: litao
 */
#include <complex>
#include <iostream>
#include <math.h>

using namespace std;

void testInitialization(void) {
	double d1 = 2.3;
	double d2{2.3};

	complex<double> z 	= 1;
	complex<double> z2 {d1, d2};
	complex<double> z3	= {1, 2};		// = is optional with {...}

	// vector<int> v {1, 2, 3, 4, 5, 6};

	// Save to from conversions that lose information(narrowing conversion)
	int i1 = 7.2;		// i1 becomes 7
	// int i2 {7.2};	  // Error: floating-point to integer conversion
	// int i3 = {7.2};// Error: as i2, = is redundant

	// Type is deduced from its initializer
	auto b = true;	// a bool
	auto ch = 'x';
	auto i = 123;
	auto d = 1.2;
	auto zz = sqrt(i);		// zz has the type of whatever func return
}


