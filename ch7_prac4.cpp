/*
���� ������ ���� å�� ������ ���� ������ ���ϰ��� �Ѵ�.
< �����ڸ� �ۼ��϶�.

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
	friend bool operator< (string op1, Book& op2);
};

bool operator< (string op1, Book& op2) {
	if (op1.compare(op2.title) < 0)
		return true;
	else
		return false;
}

int main()
{
	Book a("û��", 20000, 300);
	string b;
	cout << "å �̸��� �Է��ϼ���>>";
	getline(cin, b);	// Ű����κ��� ���ڿ��� å �̸��� �Է� ����
	if (b < a)
		cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!\n";
}
*/