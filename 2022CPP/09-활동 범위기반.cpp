#include <iostream>
#include <string>
using namespace std;

void main(void) {
	int arr[] = { 10, 20, 30, 40 };
	for (int i : arr)
		cout << i << endl;
}