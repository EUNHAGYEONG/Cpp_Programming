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

Book 클래스의 생성자, 소멸자, set() 함수를 작성하라.
set() 함수는 멤버 변수 title에 할당된 메모리가 있으면 먼저 반환한다.
그러고 나서 새로운 메모리를 할당받고 이곳에 매개 변수로 전달받은 책이름을 저장한다.
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
	void show() { cout << title << ' ' << price << "원" << endl; }
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