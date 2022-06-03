#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;

int main(void)
{
	char cI[10] = "aaa";
	printf("%d\n", cI);  //aaa //주소값

	string cppI = "aaa";
	printf("%s\n", cppI.c_str()); //string 출력
	cout << cppI.c_str() << endl; //3
	return 0;
}