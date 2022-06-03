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

int main(void) {
	Point p1(1, 2);
	Point p2(2, 3);
	Point sum = p1 + p2; //p1.operater+(p2)

	sum.ShowXY(); // (3, 5) 출력
	return 0;
}