#include <iostream>
using namespace std;

void plus2(int& num)
{
	//num이 포인터 변수이기에 *로 써서 내구값을 처리
	num += 2;
}

int main() {
	int a = 3;
	//포인터 매개변수 num에게 주소값으로 전달
	plus2(a);
	cout << a << endl;

	return 0;
}
