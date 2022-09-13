#include <iostream>
using namespace std;

class Character {
public:
	Character(string n, int h, int a, int d)
	{
		name = n;
		health = h;
		attack = a;
		defense = d;
	}
	void view() {
		cout << "이름: " << name << endl;
		cout << "체력: " << health << endl;
		cout << "공격: " << attack << endl;
		cout << "방어: " << defense << endl;

	}
private:
	string name;
	int health, attack, defense;
};

int main() {
	Character* jimin = new Character("백지민", 80, 20, 30);
	jimin->view();
	delete jimin;
	return 0;
}