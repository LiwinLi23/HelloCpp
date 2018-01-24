#include <iostream>

using namespace std;

class Point {
public:
	Point(int x = 0, int y = 0) {
		cout << "Point constructor(" << this << ", " << x << ", " << y << ")"<< endl;
		mx = x;
		my = y;
	}
#if 0
	Point(int x) {
		cout << "Point constructor(" << x << ")"<< endl;
		Point(x, 0);	
	}
#endif
	~Point() {
		cout << "~Point(" << this << ", " << mx << ", " << my << ")" << endl;
	}
	
	Point(Point &p);

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








