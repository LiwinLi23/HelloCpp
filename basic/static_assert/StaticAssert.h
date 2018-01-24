/*
 * StaticAssert.h
 *
 *  Created on: 2017年8月12日
 *      Author: litao
 */

#include <iostream>
using namespace std;

constexpr double C = 299792.458;			// km/s

void foo(double speed) {
	cout << "+ foo()" << endl;
	static_assert(sizeof(long) >= 8, "It's not 64 bits system");

	constexpr double local_max = 160 / (60 * 60); // 160 km/h = 160/(60*60)km/s
	cout << "Error: speed must be a constant" << endl;
	// static_assert(speed < C, "Can't go that fast");

	cout << "It's OK" << endl;
	static_assert(local_max < C, "Can't go that fast");
}


