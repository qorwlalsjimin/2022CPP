#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	int nHakbun;
	char* nName;
public:
	Student();
	Student(int nHakbun, const char* nName);
	~Student();
	void show();
};

Student::Student() {
	nHakbun = 1104;
	cout << "���� �ԷѾ��" << endl;
}

Student::Student(int Hakbun, const char* Name)
	: nHakbun(Hakbun)
{
	cout << "������ ȣ��" << endl;
	int len = strlen(Name) + 1;
	nName = new char[len];
	strcpy(nName, Name);
	delete[] nName;
}

Student::~Student() {
	cout << "�Ҹ��� ȣ��" << endl;
}
void Student::show() {
	cout << nHakbun << endl;
	cout << nName << endl;
}

int main() {
	Student stu1 = Student();
	//Student stu2 = Student(2520, "������");
	
	stu1.show();
	//stu2.show();

	//int* ptr1 = new int;
	//*ptr1 = 45;
	//cout << *ptr1 << endl;
	//delete ptr1;

	//int* ptr2 = new int[4];
	//for (int i = 0; i < 4; i++) {
	//	ptr2[i] = i;
	//}
	//delete[] ptr2;

	/*Student* stu3 = new Student();
	stu3->show();
	delete stu3;*/

	//Student* stu4 = new Student[3];
	//stu4[0].show();
	//delete[] stu4;

	//Student stu1 = Student(1111, "JWP");
	//stu1.show();

	//Student stu2 = Student(stu1);
	//stu2.show();

	//�޸� ����
	Student* aaa;
	for (int i = 0; i < 1000000; i++)
		aaa = new Student(i, "JWP");

	return 0;
}