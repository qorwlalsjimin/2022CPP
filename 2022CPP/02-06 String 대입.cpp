﻿#include <iostream> //cout, endl 사용
#include <stdio.h> //printf 사용
#include <string.h>//strcpy 사용
#include <string> //std::string 클래스 사용
using namespace std;

int main() {
	char cMunja[20];
	strcpy(cMunja, "c_insert");
	printf("%s\n", cMunja);
	
	string cppMunja;
	cppMunja = "cpp_insert";
	cout << cppMunja << endl;
}