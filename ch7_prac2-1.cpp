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

�� ���� == ������ �Լ��� ���� Book Ŭ������ �ۼ��϶�.
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
	bool operator== (int op);
	bool operator== (string op);
	bool operator== (Book op);
};

bool Book::operator== (int op) {
	if (price == op)
		return true;
	else
		return false;
}

bool Book::operator== (string op) {
	if (title == op)
		return true;
	else
		return false;
}

bool Book::operator== (Book op) {
	if (title == op.title && price == op.price && pages == op.pages)
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