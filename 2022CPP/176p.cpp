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
		cout << "�̸�: " << name << endl;
		cout << "�й�: " << hakbun << endl;
	}
};

class Student : public Person {
public:
	string university;
	Student(string Name, int Hakbun, string University)
		: Person(Name, Hakbun), university(University){};
	void PrintShow() {
		cout << "�̸�: " << name << endl;
		cout << "�й�: " << hakbun << endl;
		cout << "�б�: " << university << endl;
	}
};

int main() {
	Student st1("ȫ�浿", 2018, "�ѱ����б�");
	st1.PrintShow();

	return 0;
}