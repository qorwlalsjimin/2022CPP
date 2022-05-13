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
	Student(int nHakbun, string sName);
	void show();
};

Student::Student() {
	this->nHakbun = 1234;
	this->sName = "이사랑";
	cout << "일반생성자 생성." << endl;
}

// 멤버변수를 초기화 할 수 있으며 따라서,
// const형 변수와 참조형 변수를 멤버변수로 할 수 있다.
Student::Student(int Hakbun, string Name)
	: nHakbun(Hakbun), sName(Name) //멤버변수(매개변수)
{
	cout << "일반생성자 생성." << endl;
}

void Student::show() {
	cout << "학번은 " << nHakbun << "입니다" << endl;
	cout << "이름은 " << sName << "입니다" << endl;
}

int main() {
	////기본생성자
	//Student stu1 = Student();
	//stu1.show();

	//Student stu2 = Student(1111,"BJM");
	//stu2.show();

	//int* ptr1 = new int;
	//*ptr1 = 20;
	//cout << *ptr1 << endl;

	//delete ptr1;

	//int* ptr2 = new int[4];
	//for (int i = 0; i < 4; i++) {
	//	ptr2[i] = 10 + i;
	//	cout << ptr2[i] << " ";
	//}
	//delete []ptr2; //배열을 날리려면 꼭 [] 쳐줘야함

	/*Student* stu2 = new Student(1111, "JWP");
	stu2->show();
	delete stu2;*/

	Student* stu2 = new Student[6];
	for(int i = 0; i<6; i++)
		stu2[i].show();
		//->를 쓰면 오류가 나는 이유: stu2[i] == *(str2+i). 이미 *연산자가 있기 때문
	delete []stu2;

	return 0;
}