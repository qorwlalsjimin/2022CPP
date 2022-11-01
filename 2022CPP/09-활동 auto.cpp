#include <iostream>
#include <string>
#include <vector>
using namespace std;

void main(void) {

	//벡터의 요소들을 모두 2배시키는 코드
	vector<int> v = { 1,2,3,4,5 };

	for (auto& element : v) {
		element *= 2;
		cout << element << endl;
	}
}
