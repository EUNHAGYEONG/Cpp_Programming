/*
프렌드 함수 만들기
두 Rect 객체를 비교하는 bool equals(Rect r, Rect s)를 Rect 클래스에 프렌드 함수로 작성하라.
*/
/*
#include <iostream>
using namespace std;

class Rect {
	int width, height;
public:
	Rect(int width = 0, int height = 0);
	friend bool equals(Rect r, Rect s);
};

Rect::Rect(int width, int height) {
	this->width = width;
	this->height = height;
}

bool equals(Rect r, Rect s) {
	if ((r.width == s.width) && (r.height == s.height))
		return true;
	else
		return false;
}

int main()
{
	Rect r1(3, 5);
	Rect r2(3, 5);
	Rect r3(4, 4);

	cout << equals(r1, r2) << "\n";
	cout << equals(r1, r3) << "\n";
}*/