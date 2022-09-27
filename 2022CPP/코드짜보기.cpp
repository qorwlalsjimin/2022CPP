#include <iostream>
#include <string>
using namespace std;

template <typename stringT, typename intT>
class Character {
public:

	Character(stringT name, intT health, intT attack, intT defense) : this->name(name), this->health(h), this->attack(a), this->defense(d) {};

	void view() {
		cout << "�̸�: " << name << endl;
		cout << "ü��: " << health << endl;
		cout << "����: " << attack << endl;
		cout << "���: " << defense << endl;

	}
private:
	stringT name;
	intT health, attack, defense;
};

int main() {
	Character<string, int>* jimin = new Character<string, int>("������", 100, 20, 10);
	jimin->view();
	delete jimin;
	return 0;
}