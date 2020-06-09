/*
책의 이름과 가격을 저장하는 다음 Book 클래스에 대해 물음에 답하여라.

#include <iostream>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price);
	~Book();
	void set(char* title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
};

디폴트 복사 생성자만 있을 때 아래 main() 함수는 실행 오류가 발생한다.
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
	void show() { cout << title << ' ' << price << "원" << endl; }
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
	Book cpp("명품 C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}
*/