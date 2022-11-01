﻿#include <string>
#include <iostream>
using namespace std;

class Champ {
public:
	Champ(int age, const string& name);
	static int getCount(void)
	{
		// 에러, static 멤버함수에는 static 멤버변수만 사용가능
		// _age++;
		return mCount;
	}
private:
	int _age;
	string _name;
	static int mCount; //여기서 초기화하면 상수로만 사용할 수 있음
};

int Champ::mCount = 0;

Champ::Champ(int age, const string& name)
	: _age(age), _name(name)
{
	++mCount;
}

void main(void)
{
	//객체 생성 없이도 static 멤버함수를 사용할 수 있다.
	cout << Champ::getCount << endl;

	Champ* teemo = new Champ(10, "티모");
	Champ* masteryi = new Champ(11, "마이");
	Champ* veign = new Champ(14, "베인");

	// static 멤버변수 mCount를 모든 객체가 공유한다
	cout << teemo->getCount() << endl;
	cout << Champ::getCount() << endl;
}
