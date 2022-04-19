#include <iostream>
#define jegob(a) (a)*(a)
using namespace std;

int cha(int a, int b = 3);
int main() {
	int a = 3;
	int ra = cha(a);

	cout << ra << endl;
	return 0;
}
int cha(int a, int b = 3) {
	return a + b;
};