/*
은행에서 사용하는 프로그램을 작성하기 위해, 은행 계좌 하나를 표현하는 클래스 Account가 필요하다.
계좌 정보는 계좌의 주인, 계좌 번호, 잔액을 나타내는 3 멤버 변수로 이루어진다.
main() 함수의 실행 결과가 다음과 같도록 Account 클래스를 작성하라.

int main()
{
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}
*/
/*
#include <iostream>
using namespace std;

class Account {
	string owner;
	int account_number;
	int balance;

public:
	Account(string o, int a, int b);
	void deposit(int m);
	int withdraw(int m);
	int inquiry();
	string getOwner();
};

Account::Account(string o, int a, int b) {
	owner = o;
	account_number = a;
	balance = b;
}

void Account::deposit(int m) {
	balance += m;
}

int Account::withdraw(int m) {
	if (balance < m)
		m = balance;
	balance -= m;

	return m;
}

int Account::inquiry() {
	return balance;
}

string Account::getOwner() {
	return owner;
}

int main()
{
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}
*/