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
		cout << "�̸�: " << name << endl;
		cout << "ü��: " << health << endl;
		cout << "����: " << attack << endl;
		cout << "���: " << defense << endl;

	}
private:
	string name;
	int health, attack, defense;
};

int main() {
	Character* jimin = new Character("������", 80, 20, 30);
	jimin->view();
	delete jimin;
	return 0;
}