#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	string name;
	int hakbun;
	Person(string Name, int Hakbun)
		: name(Name), hakbun(Hakbun) {}
	Person() {}
	void PrintShow() {
		cout << "이름: " << name << endl;
		cout << "학번: " << hakbun << endl;
	}
};

class Student : public Person {
public:
	string university;
	Student(string Name, int Hakbun, string University)
		: Person(Name, Hakbun), university(University){};
	void PrintShow() {
		cout << "이름: " << name << endl;
		cout << "학번: " << hakbun << endl;
		cout << "학교: " << university << endl;
	}
};

int main() {
	Student st1("홍길동", 2018, "한국대학교");
	st1.PrintShow();

	return 0;
}