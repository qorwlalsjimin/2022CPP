﻿#include <iostream>
#include <string.h>

using namespace std;

class m_string {
private:
	char* _Myptr;
	int _Mysize;

public:
	//생성자, 소멸자 선언
	m_string();
	m_string(const char* str);
	m_string(const m_string& str);
	~m_string();

	//연산자 오버로딩 선언
	m_string& operator=(const m_string& rhs);
	m_string& operator+=(const m_string& rhs);
	int operator==(const m_string& rhs);
	m_string operator+(const m_string& rhs);

	//함수 선언
	int size();
	int length();
	char* c_str() const;

	//선생님이 주신 코드
	friend ostream& operator<<(ostream& os, const m_string& ms)
	{
		os << ms._Myptr;
		return os;
	}
};

//생성자 구현
	//기본 생성자: 멤버 변수 초기화
m_string::m_string() {
	//printf("기본 생성자 호출\n");
	_Mysize = 0;
	_Myptr = NULL;
}

	//C 스타일 문자열을 매개변수로 받는 생성자
	// ㄴ 받은 문자열을 m_string의 _Myptr 변수에 대임
m_string::m_string(const char* str) {
	//printf("char 문자열 받는 생성자 호출\n");
	_Mysize = strlen(str) + 1; //'\0'의 자리를 위해 +1
	_Myptr = new char[_Mysize]; //동적할당
	strcpy(_Myptr, str);
}

	//m_string 문자열을 매개변수로 받는 생성자
	// ㄴ 받은 문자열을 m_string의 _Myptr 변수에 대임
m_string::m_string(const m_string& str) {
	//printf("m_string 받는 생성자 호출\n");
	_Mysize = str._Mysize;
	_Myptr = new char[_Mysize]; //동적할당
	strcpy(_Myptr, str._Myptr);
}

//소멸자 구현
	//_Myptr에 값이 있으면 메모리를 할당해라
m_string::~m_string() {
	//printf("소멸자 호출\n");
	if (_Myptr != NULL) delete[] _Myptr;
}

//연산자 오버로딩
	//대입 연산자
m_string& m_string::operator=(const m_string& rhs) {
	//cout << "=연산자 호출" << endl;
	if (_Mysize != NULL) delete[] _Myptr;

	_Mysize = strlen(rhs._Myptr) + 1;
	_Myptr = new char[_Mysize];
	strcpy(_Myptr, rhs._Myptr);

	return *this;
}

	//+= 연산자
m_string& m_string::operator+=(const m_string& rhs) {
	//cout << "+=연산자 호출" << endl;
	char* str = new char[_Mysize + rhs._Mysize -1];
	strcpy(str, _Myptr);
	strcat(str, rhs._Myptr);
	
	if (_Myptr != NULL) delete[] _Myptr;

	_Myptr = str;
	return *this;
	//(연산자 왼쪽.원래 멤버인 문자열, 연산자 오른쪽.rhs로 받은 새로운 문자열)
}

	//== 연산자
int m_string::operator==(const m_string& rhs) {
	//printf("==연산자 호출\n");
	if (strcmp(_Myptr, rhs._Myptr)) return -1;
	else return 0;
}

	//+ 연산자
m_string m_string::operator+(const m_string& rhs) {
	//printf("+연산자 호출\n");
	char* str = new char[_Mysize + rhs._Mysize - 1]; //operator+에서만 쓸 변수
	strcpy(str, _Myptr);
	strcat(str, rhs._Myptr);

	m_string answer(str); //객체 생성
	delete[] str;

	return answer;
}

//길이 구하는 함수 구현
int m_string::size() {
	//printf("size 호출\n");
	return _Mysize-1;
}
int m_string::length() {
	//printf("size 호출\n");
	return _Mysize-1;
}

//c_str
char* m_string::c_str() const {
	return _Myptr;
}

int main(void)
{
	m_string str1="123";
	cout << str1 << " " << str1.size() << endl;

	m_string str2 = str1;
	cout << str2 << " " << str2.size() << endl;

	str2 = "m_string";
	cout << str2 << " " << str2.size() << endl;

	str2 = str2 + str1;
	cout << str2 << " " << str2.size() << endl;
	
	str2 = str2 + "ab";
	cout << str2 << " " << str2.size() << endl;

	cout << (str1 == "123") << endl;

	cout << (str1 == str2) << endl;

	return 0;
}
