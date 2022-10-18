﻿#include <iostream>
#include <string>
using namespace std;

enum Food {
	KOREAN,
	JAPANESE,
	CHINESE
};

void main(void) {
	string food_spot[3];

	food_spot[Food::KOREAN] = "삼백집";
	food_spot[Food::JAPANESE] = "야키토리 묵";
	food_spot[Food::CHINESE] = "태화장";

	cout << "맛집 선택 " << endl;
	int menu = Food::JAPANESE;

	switch (menu)
	{
	case Food::KOREAN:
		cout << "한식 : ";
		break;
	case Food::JAPANESE:
		cout << "일식 : ";
		break;
	case Food::CHINESE:
		cout << "중식 : ";
		break;
	}

	cout << food_spot[menu];
}
