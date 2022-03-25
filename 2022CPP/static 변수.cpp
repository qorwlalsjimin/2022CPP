#include <iostream>
using namespace std;

void jungjuk() {
	int a = 0;
	cout << "지역변수 a는 " << a << endl;
	a++;
}

int main(void)
{
	jungjuk(); //0
	jungjuk(); //0
	jungjuk(); //0
	return 0;
}