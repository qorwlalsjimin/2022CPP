#include <iostream>
using namespace std;

int main() {
	int a;

	//포인터로  a값을 바꿈
	int* pa = &a;
	*pa = 30;
	cout << a << endl;

	//참조로 a값을 바꿈
	int& ra = a;
	ra = 50;
	cout << a << endl;

	return 0;
}