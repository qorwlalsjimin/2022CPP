#include <iostream>
using namespace std;

class Point {
public:
	// 생성자
	Point(int X, int Y);
	Point();

	// 연산자 오버로딩
	Point operator+(const Point& rhs);
	void ShowXY();

private:
	int mX, mY;
};