#include <iostream>
using namespace std;

class Point {
private:
	int mX, mY;
public:
	Point(int X, int Y);
	void ShowXY();
};

Point::Point(int X, int Y)
	: mX(X), mY(Y) {};

void Point::ShowXY() {
	cout << "(" << mX << ", " << mY << ")" << endl;
}

int main(void) {
	Point p1(1, 2);
	p1.ShowXY();
	return 0;
}