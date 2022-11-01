#include <iostream>
#include <string>
using namespace std;

enum Fruit {
	RED,
	PURPLE,
	BLUE,
	YELLOW,
	COUNT
};

void main(void) {
	string fruit_color[Fruit::COUNT];

	fruit_color[Fruit::RED] = "딸기";
	fruit_color[Fruit::PURPLE] = "포도";
	fruit_color[Fruit::BLUE] = "블루베리";
	fruit_color[Fruit::YELLOW] = "바나나";

	cout << "해당색을 가진 과일을 알 수 있어요!" << endl;
	int input = Fruit::PURPLE;

	switch (input)
	{
	case Fruit::RED:
		cout << "붉은 색은 " << fruit_color[input]; 
		break;
	case Fruit::PURPLE:
		cout << "보라색은 " << fruit_color[input];
		break;
	case Fruit::BLUE:
		cout << "파란 색은 " << fruit_color[input];
		break;
	case Fruit::YELLOW:
		cout << "노란 색은 " << fruit_color[input];
		break;
	}

}