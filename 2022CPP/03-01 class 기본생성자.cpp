#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	int nHakbun;
	string sName;
	//아래와 같은 생성자를 만들어줌
	//Student(){}
};
int main() {
	//기본생성자
	Student student1;
	Student student2 = student1;

	return 0;
}