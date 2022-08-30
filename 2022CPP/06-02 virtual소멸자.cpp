#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
	Animal() { cout << "Animal 생성" << endl; }
	virtual ~Animal() { cout << "Animal 소멸" << endl; }
	virtual void roar(void) { cout << "동물짖어" << endl; }

private:
	string name;
	int sex;
	int age;
};

class Tiger : public Animal {
public:
	Tiger() { cout << "Tiger 생성" << endl; }
	virtual ~Tiger() { cout << "Tiger 소멸" << endl; }
};

void main(void) {
	Animal* animal = new Tiger();
	delete animal;
}