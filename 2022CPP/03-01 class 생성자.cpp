﻿#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class Student
{
private:
	int nHakbun;
	char* sName;

public:
	//생성자 : 객체가 생성되면 자동으로 호출되는 함수
	//반환형을 갖고있지 않는다
	Student();
	Student(int nHakbun, const char* sName);
	~Student();

	void show();
};

Student::Student() {
	
}

// 멤버변수를 초기화 할 수 있으며 따라서,
// const형 변수와 참조형 변수를 멤버변수로 할 수 있다.
Student::Student(int Hakbun, const char* Name)
	: nHakbun(Hakbun) //멤버변수(매개변수)
{
	cout << "일반생성자 생성자 호출." << endl;
	int len = strlen(Name) + 1;	//공간의 갯수 파악
	sName = new char[len];		//갯수만큼 메모리 할당
	strcpy(sName, Name);
}

Student::~Student() {
	delete []sName;
	cout << "소멸자 호출" << endl;
}

void Student::show() {
	cout << "학번은 " << nHakbun << "입니다" << endl;
	cout << "이름은 " << sName << "입니다" << endl;
}

int main() {
	Student stu1 = Student(1111, "BJM");
	stu1.show();
	
	return 0;
}