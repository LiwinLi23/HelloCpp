/*
 * LTInitStruct.h
 *
 *  Created on: 2017年4月3日
 *      Author: litao
 */
#include <iostream>
using namespace std;

struct Point {
	int x, y;
};

void init_struct() {
	Point a;
	Point b {1, 2};
	cout << "b.x: " << b.x  << ", b.y" << b.y << endl;

	Point c = {.y = 1, .x = 2};
	cout << "c.x: " << c.x  << ", c.y" << c.y << endl;
}
