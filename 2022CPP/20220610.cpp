#include <iostream>
using namespace std;

class Student{
public:
	Student();
	Student(const Student& rhs);
	Student(int Num, const char* Name);
	~Student();
	void show();
private:
	int sNum;
	char* sName;
};

Student::Student( ) {
	cout << "�⺻ ������ ȣ��" << endl;
	sNum = 1104;
	strcpy(sName, "������");
}

Student::Student(const Student& rhs)
	: sNum(rhs.sNum)
{
	int len = strlen(rhs.sName) + 1;
	sName = new char[len];

}

Student::Student(int Num, const char* Name)
	: sNum(Num)
{
	
}

Student::~Student() {
	cout << "�Ҹ��� ȣ��" << endl;
}
void Student::show() {
	cout << "�й�: " << sNum << " �̸�: " << sName<< endl;
}

int main() {

	//Student s1 = Student();
	//s1.show();
	Student s2 = Student(2104, "������");
	s2.show();

	//Student* s3 = new Student(1105, "������");
	//s3->show();
	//delete s3;

	//Student* s4 = new Student[4];
	//s4[0].show();
	//delete[] s4;

	int* a = new int[3];
	delete[] a;


	return 0;
}