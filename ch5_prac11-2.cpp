/*
å�� �̸��� ������ �����ϴ� ���� Book Ŭ������ ���� ������ ���Ͽ���.

#include <iostream>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price);
	~Book();
	void set(char* title, int price);
	void show() { cout << title << ' ' << price << "��" << endl; }
};

�����Ϸ��� �����ϴ� ����Ʈ ���� ������ �ڵ�� �����ΰ�?
*/
/*
Book::Book(const Book& book) {
	this->title = book.title;
	this->price = book.price;
}
*/