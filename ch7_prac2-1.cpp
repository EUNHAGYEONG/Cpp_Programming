/*
Book 객체를 활용하는 사례이다.

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
		cout << title << ' ' << price << "원 " << pages << " 페이지\n";
	}
	string getTitle() { return title; }
};

int main()
{
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원\n";	//price 비교
	if (a == "명품 C++") cout << "명품 C++ 입니다.\n";	//책 title 비교
	if (a == b) cout << "두 책이 같은 책입니다.\n";	//title, ,price, pages 모두 비교
}

세 개의 == 연산자 함수를 가진 Book 클래스를 작성하라.
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
		cout << title << ' ' << price << "원 " << pages << " 페이지\n";
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
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원\n";	//price 비교
	if (a == "명품 C++") cout << "명품 C++ 입니다.\n";	//책 title 비교
	if (a == b) cout << "두 책이 같은 책입니다.\n";	//title, ,price, pages 모두 비교
}
*/