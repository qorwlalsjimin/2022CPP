#include <iostream>
#include <string>
using namespace std;

template <typename T>
T sum(T x, T y)
{
	T z = x + y;
	return z;
}

int main() {
	cout << sum<int>(3, 5) << endl;
	cout << sum<float>(3.f, 5.f) << endl;
	cout << sum<string>("3", "5") << endl;
	return 0;
}