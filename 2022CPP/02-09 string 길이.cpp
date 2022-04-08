#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;

int main(void)
{
	char cI[10] = "aaa";
	printf("%d\n", strlen(cI));  //3

	string cppI = "aaa";
	cout << cppI.size() << endl; //3
	cout << cppI.length() << endl; //3
	return 0;
}