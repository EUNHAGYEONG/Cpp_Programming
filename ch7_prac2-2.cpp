/*
Book ��ü�� Ȱ���ϴ� ����̴�.

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

int main()
{
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��\n";	//price ��
	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�.\n";	//å title ��
	if (a == b) cout << "�� å�� ���� å�Դϴ�.\n";	//title, ,price, pages ��� ��
}

�� ���� == �����ڸ� ������ �Լ��� �ۼ��϶�.
*/
/*
#include <iostream>
#include <string>
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
	friend bool operator== (Book op1, int op2);
	friend bool operator== (Book op1, string op2);
	friend bool operator== (Book op1, Book op2);
};

bool operator== (Book op1, int op2) {
	if (op1.price == op2)
		return true;
	else
		return false;
}

bool operator== (Book op1, string op2) {
	if (op1.title == op2)
		return true;
	else
		return false;
}

bool operator== (Book op1, Book op2) {
	if (op1.title == op2.title && op1.price == op2.price && op1.pages == op2.pages)
		return true;
	else
		return false;
}

int main()
{
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��\n";	//price ��
	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�.\n";	//å title ��
	if (a == b) cout << "�� å�� ���� å�Դϴ�.\n";	//title, ,price, pages ��� ��
}
*/