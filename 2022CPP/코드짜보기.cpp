#include <iostream>
#include <string>
using namespace std;

template <typename stringT, typename intT>
class Character {
public:

	Character(stringT name, intT health, intT attack, intT defense) : this->name(name), this->health(h), this->attack(a), this->defense(d) {};

	void view() {
		cout << "이름: " << name << endl;
		cout << "체력: " << health << endl;
		cout << "공격: " << attack << endl;
		cout << "방어: " << defense << endl;

	}
private:
	stringT name;
	intT health, attack, defense;
};

int main() {
	Character<string, int>* jimin = new Character<string, int>("백지민", 100, 20, 10);
	jimin->view();
	delete jimin;
	return 0;
}