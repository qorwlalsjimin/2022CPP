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
	cout << "값이 입력됏어용" << endl;
}

Student::Student(int Hakbun, const char* Name)
	: nHakbun(Hakbun)
{
	cout << "생성자 호출" << endl;
	int len = strlen(Name) + 1;
	nName = new char[len];
	strcpy(nName, Name);
	delete[] nName;
}

Student::~Student() {
	cout << "소멸자 호출" << endl;
}
void Student::show() {
	cout << nHakbun << endl;
	cout << nName << endl;
}

int main() {
	Student stu1 = Student();
	//Student stu2 = Student(2520, "누구냐");
	
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

	//메모리 누수
	Student* aaa;
	for (int i = 0; i < 1000000; i++)
		aaa = new Student(i, "JWP");

	return 0;
}