#include <iostream>
#include <string>
using namespace std;

class CBank {
private:
	string name; //������ �̸�
	string account; //���¹�ȣ
	int balance; //�ܾ�
public:
	// ������ �ۼ�
	CBank(string name, string account, int balance);
	// �ԱݵǴ� �ݾ��� ����ϴ� �Լ� �ۼ�
	void show(int deposit);
};

CBank:: CBank(string Cname, string Caccount, int Cbalance)
	: name(Cname), account(Caccount), balance(Cbalance) { }

CBank:: ~CBank() {

}

void CBank:: show(int deposit) {
	cout << deposit << "���� �ԱݵǾ����ϴ�." << endl;
	this->balance += deposit;
}

int main() {
	CBank c1 = CBank("������", "7777-01-2496", 1000000);
	c1.show(40000);
	return 0;
}