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

세 개의 == 연산자를 프렌드 함수로 작성하라.
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
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원\n";	//price 비교
	if (a == "명품 C++") cout << "명품 C++ 입니다.\n";	//책 title 비교
	if (a == b) cout << "두 책이 같은 책입니다.\n";	//title, ,price, pages 모두 비교
}
*/