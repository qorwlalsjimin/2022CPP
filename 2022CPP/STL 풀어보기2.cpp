#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

//링링: 원숭이
//뽀이: 코끼리
//먀오: 살쾡이

void main(void) {
	map<string, string> zoo;
	zoo.insert(pair<string, string>("링링", "원숭이"));
	zoo.insert(pair<string, string>("뽀이", "코끼리"));
	zoo.insert(pair<string, string>("먀오", "살쾡이"));

	map<string, string>::iterator iter;
	for (iter = zoo.begin(); iter != zoo.end(); iter++)
		cout << iter->first << "은 " << iter->second << "입니다\n";

	cout << "\n링링이를 목록에서 삭제했습니다\n\n";
	zoo.erase("링링");

	for (iter = zoo.begin(); iter != zoo.end(); iter++)
		cout << iter->first << "은 " << iter->second << "입니다\n";
}