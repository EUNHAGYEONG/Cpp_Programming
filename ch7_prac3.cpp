/*
다음 연산을 통해 공짜 책인지를 판별하도록 ! 연산자를 작성하라.

Book book("벼룩시장", 0, 50);	//가격은 0
if (!book) cout << "공짜다\n";
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
	bool operator! ();
};

bool Book::operator! () {
	if (price == 0)
		return true;
	else
		false;
}

int main()
{
	Book book("벼룩시장", 0, 50);	//가격은 0
	if (!book) cout << "공짜다\n";
}
*/