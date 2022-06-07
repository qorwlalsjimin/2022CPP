#include <iostream>
using namespace std;

class Integer {
public:
	Integer() {};
	Integer(int v) : value(v) {};
	void print();
	Integer operator+(const Integer& rhs);

private:
	int value;
};

Integer Integer :: operator+(const Integer& rhs) {
	Integer i;
	i.value = value + rhs.value;
	return i;
}

void Integer::print() {
	cout << value << endl;
}

int main(void) {
	Integer a = Integer(1);
	Integer b = Integer(2);
	Integer c = a+b;
	c.print(); //3

	return 0;
}