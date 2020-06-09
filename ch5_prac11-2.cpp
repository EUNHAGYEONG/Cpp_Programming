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

컴파일러가 삽입하는 디폴트 복사 생성자 코드는 무엇인가?
*/
/*
Book::Book(const Book& book) {
	this->title = book.title;
	this->price = book.price;
}
*/