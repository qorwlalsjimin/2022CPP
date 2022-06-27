#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class m_string {
private:
	char* str;
	int length;
public:

};

int main(void) {

	m_string cppMunja;
	cppMunja = "cpp_insert";	// cpp_insert
	cppMunja += "++";			// cpp_insert++
	cout << cppMunja << endl;
	
	return 0;
}
