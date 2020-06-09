/*
���� 1~4���� ���� Book Ŭ������ ������ ����.

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������\n";
	}
	string getTitle() { return title; }
};

Book ��ü�� ���� ���� ������ �ϰ��� �Ѵ�.

Book a("û��", 20000, 300), b("�̷�", 30000, 500);
a += 500;	//å a�� ���� 500�� ����
b -= 500;	//å b�� ���� 500�� ����
a.show();
b.show();

+=, -= ������ �Լ��� Book Ŭ������ �ܺ� �Լ��� �����϶�.
*/
/*
#include <iostream>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������\n";
	}
	string getTitle() { return title; }
	friend Book& operator+= (Book &op1, int op2);
	friend Book& operator-= (Book& op1, int op2);
};

Book& operator+= (Book& op1, int op2) {
	op1.price += op2;
	return op1;
}

Book& operator-= (Book& op1, int op2) {
	op1.price -= op2;
	return op1;
}

int main()
{
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
	a += 500;	//å a�� ���� 500�� ����
	b -= 500;	//å b�� ���� 500�� ����
	a.show();
	b.show();
}
*/