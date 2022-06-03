#include <iostream>
using namespace std;
#define jegob(A) ((A)*(A)) //(A*A) 아니되오
int main() {
	cout << jegob(3+1) << endl; //4*4가 아닌 의도치 않은 결과
	cout << (3+1) * (3+1) << endl; //위의 것과 같음
	return 0;
}