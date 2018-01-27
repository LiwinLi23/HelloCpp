#ifndef CLASS_POINT_H_
#define CLASS_POINT_H_
#include <iostream>

using namespace std;

class Point {
public:
	Point(int x = 0, int y = 0) {
		cout << "Point constructor(" << this << ", " 
			 << x << ", " << y << ")"<< endl;
		mx = x;
		my = y;
	}

	Point(Point &p);

#if 0
	Point(Point p) {
		// cout << "Point constructor(" << x << ")"<< endl;
		// Point(x, 0);	
	}
#endif
	~Point() {
		cout << "~Point(" << this << ", " << mx << ", " << my << ")" << endl;
	}
	
	int getX() {return mx;}
	int getY() {return my;}

private:
	int mx;
	int my;
};

Point::Point(Point &p) {
	cout << "Point copy constructor(" << this << ")"<< endl;
	mx = p.mx;
	my = p.my;
}

#endif /*CLASS_POINT_H_*/








