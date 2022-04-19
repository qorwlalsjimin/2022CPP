#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	int nHakbun;
	string sName;

public:
	//생성자 : 객체가 생성되면 자동으로 호출되는 함수
	//반환형을 갖고있지 않는다
	Student();
	Student(int Hakbun, string Name);
	void show();
};

Student::Student() {
	nHakbun = 1234;
	sName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;
}

Student::Student(int Hakbun, string Name) {
	nHakbun = Hakbun;
	sName = Name;
	cout << "학번이 등록되었습니다." << endl;
}

void Student::show() {
	cout << "학번은 " << nHakbun << "입니다" << endl;
	cout << "이름은 " << sName << "입니다" << endl;
}

int main() {
	//기본생성자
	Student stu1 = Student();
	stu1.show();

	Student stu2 = Student(1111,"BJM");
	stu2.show();
	return 0;
}