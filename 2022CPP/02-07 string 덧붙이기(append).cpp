#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;

int main(void)
{
	char cMunja[20];
	strcpy(cMunja, "c_insert");
	strcat(cMunja, "++");
	printf("%s\n", cMunja);

	// 주의사항 "cpp_insert"+"++" 하면 에러 발생
	string cppMunja;
	cppMunja = "cpp_insert";	// cpp_insert
	cppMunja += "++";			// cpp_insert++
	cout << cppMunja << endl;
}