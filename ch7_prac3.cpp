/*
���� ������ ���� ��¥ å������ �Ǻ��ϵ��� ! �����ڸ� �ۼ��϶�.

Book book("�������", 0, 50);	//������ 0
if (!book) cout << "��¥��\n";
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
	Book book("�������", 0, 50);	//������ 0
	if (!book) cout << "��¥��\n";
}
*/