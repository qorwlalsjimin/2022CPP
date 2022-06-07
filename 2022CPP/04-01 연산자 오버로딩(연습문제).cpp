#include <iostream>
#include "04-01 (연습문제).h"
using namespace std;

Integer Integer :: operator+(const Integer& rhs) {
	Integer i;
	i.value = value + rhs.value;
	return i;
}

void Integer::print() {
	cout << value << endl;
}