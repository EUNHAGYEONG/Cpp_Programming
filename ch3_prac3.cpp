/*
���࿡�� ����ϴ� ���α׷��� �ۼ��ϱ� ����, ���� ���� �ϳ��� ǥ���ϴ� Ŭ���� Account�� �ʿ��ϴ�.
���� ������ ������ ����, ���� ��ȣ, �ܾ��� ��Ÿ���� 3 ��� ������ �̷������.
main() �Լ��� ���� ����� ������ ������ Account Ŭ������ �ۼ��϶�.

int main()
{
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
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
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
}
*/