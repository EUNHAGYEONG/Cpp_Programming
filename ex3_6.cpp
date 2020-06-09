/*
Rectangle 클래스 만들기
다음 main() 함수가 잘 작동하도록 Rectangle 클래스를 작성하고 프로그램을 완성하라.
Rectangle 클래스는 width와 height의 두 멤버 변수와 3개의 생성자, 그리고 isSquare() 함수를 가진다.

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);
	
	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;
}
*/
/*
#include <iostream>
using namespace std;

class Rectangle {
	int width;
	int height;
public:
	Rectangle();
	Rectangle(int a, int b);
	Rectangle(int a);
	bool isSquare();
};

Rectangle::Rectangle() : width(1), height(1) {}
Rectangle::Rectangle(int a, int b) : width(a), height(b) {}
Rectangle::Rectangle(int a) : width(a), height(a) {}

bool Rectangle::isSquare() {
	if (width == height)
		return true;
	else
		return false;
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;
}
*/