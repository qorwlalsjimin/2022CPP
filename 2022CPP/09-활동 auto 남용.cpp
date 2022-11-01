#include <iostream>
#include <string>
using namespace std;


void main(void) {
	int arr[] = { 10, 20, 30, 40 };

	//원래 코드
	//for (auto x : arr)
	for (int x : arr)
		x = x + 1;
}