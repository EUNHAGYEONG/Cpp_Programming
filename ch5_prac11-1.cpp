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

Book Ŭ������ ������, �Ҹ���, set() �Լ��� �ۼ��϶�.
set() �Լ��� ��� ���� title�� �Ҵ�� �޸𸮰� ������ ���� ��ȯ�Ѵ�.
�׷��� ���� ���ο� �޸𸮸� �Ҵ�ް� �̰��� �Ű� ������ ���޹��� å�̸��� �����Ѵ�.
*/
/*
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

Book::Book(const char* title, int price) {
	this->title = new char (*title);
	this->price = price;
}

Book::~Book() {
	delete title;
}

void Book::set(char* title, int price) {
	if (title != NULL)
		delete title;
	this->title = new char (*title);
	this->price = price;
}
*/