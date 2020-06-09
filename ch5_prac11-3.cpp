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

����Ʈ ���� �����ڸ� ���� �� �Ʒ� main() �Լ��� ���� ������ �߻��Ѵ�.
*/
/*
#include <iostream>
#include <string>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price);
	~Book();
	void set(char* title, int price);
	void show() { cout << title << ' ' << price << "��" << endl; }
	Book(const Book& book);
};

Book::Book(const char* title, int price) {
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);
	this->price = price;
}

Book::~Book() {
	delete [] title;
}

void Book::set(char* title, int price) {
	if (this->title)
		delete[] this->title;
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);

	this->price = price;
}

Book::Book(const Book& book) {
	this->price = book.price;
	int len = strlen(book.title);
	this->title = new char[len + 1];
	strcpy(this->title, book.title);
}

int main()
{
	Book cpp("��ǰ C++", 10000);
	Book java = cpp;
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();
}
*/