#include <iostream>
#include "04-01.h"
using namespace std;

Point::Point(int X, int Y)
	: mX(X), mY(Y) {};

Point::Point() {};

void Point::ShowXY() {
	cout << "(" << mX << ", " << mY << ")" << endl;
}

Point Point::operator+(const Point& rhs) {
	Point p; //매개변수가 없는 생성자 필요
	p.mX = mX + rhs.mX;
	p.mY = mY + rhs.mY;
	return p;
	
}