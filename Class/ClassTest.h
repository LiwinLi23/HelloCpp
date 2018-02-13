#ifndef CLASS_TEST_H_
#define CLASS_TEST_H_
#include <iostream>
#include <cmath>
#include "Point.h"
#include "Line.h"

using namespace std;
static void funcWithObjParameter(Point p) {}

void class_test_funcWithObjparam() {
	// funcWithObjParameter(Point(1, 2));
}

Point returnObject() {
	Point p(1, 1);
	return p;
}

void ClassTest_test() {
	Point p;
	p = returnObject();
}




#endif /* CLASS_TEST_H_ */