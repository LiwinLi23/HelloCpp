#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

class Line {
public:
	Line(Point p1, Point p2);
	Line(Line &lParam);
	double getLen() {return mLen;}
	static void testLine();
	static void testObjParameter();

private:
	static void _testObjParameter(Point p);
	Point mP1, mP2;
	double mLen;
};

Line::Line(Point p1, Point p2)
	: mP1(p1), mP2(p2) {
	cout << "Line constructor" << endl;
	double xLen = static_cast<double>(p1.getX() - p2.getX());
	double yLen = static_cast<double>(p1.getY() - p2.getY());
	mLen = sqrt(xLen * xLen + yLen + yLen);
}

Line::Line(Line &lParam)
	: mP1(lParam.mP1), mP2(lParam.mP2) {
    cout << "Line copy constructor" << endl;
    mLen = lParam.mLen;
}


void Line::testLine() {
	// cout << "testLine()" << endl;
	// Point p1(1, 1), p2(4, 5);
	// Line line1(p1, p2), line2(line1);
	
	Point(1, 2); Point(2);
	Point p1(1);
	Point p2(p1);
	// cout << Line((Point)1, p2).getLen() << endl;
}

void Line::testObjParameter() {
	Point p(0, 0);
	_testObjParameter(p);
}

void Line::_testObjParameter(Point p) {
}














