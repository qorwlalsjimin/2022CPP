#include <iostream>
#include <string>
using namespace std;

class CBank {
private:
	string name; //예금주 이름
	string account; //계좌번호
	int balance; //잔액
public:
	// 생성자 작성
	CBank(string name, string account, int balance);
	// 입금되는 금액을 출력하는 함수 작성
	void show(int deposit);
};

CBank:: CBank(string Cname, string Caccount, int Cbalance)
	: name(Cname), account(Caccount), balance(Cbalance) { }

CBank:: ~CBank() {

}

void CBank:: show(int deposit) {
	cout << deposit << "원이 입금되었습니다." << endl;
	this->balance += deposit;
}

int main() {
	CBank c1 = CBank("백지민", "7777-01-2496", 1000000);
	c1.show(40000);
	return 0;
}