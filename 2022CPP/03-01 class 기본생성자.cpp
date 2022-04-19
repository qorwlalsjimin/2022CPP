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
	Student() {
		nHakbun = 1234;
		sName = "이사랑";
		cout << "학번이 등록되었습니다." << endl;
	}
};
int main() {
	//기본생성자
	Student stu;
	return 0;
}