#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;

int main(void)
{
	char cI[10] = "aaa";
	printf("%d\n", cI);  //aaa

	string cppI = "aaa";
	printf("%s\n", cppI.c_str());
	cout << cppI.c_str() << endl; //3
	return 0;
}