#include <iostream>
#include "04-01.h"
using namespace std;

int main(void) {
	Point p1(1, 2);
	Point p2(2, 3);
	Point sum = p1 + p2; //p1.operater+(p2)

	sum.ShowXY(); // (3, 5) 출력
	return 0;
}