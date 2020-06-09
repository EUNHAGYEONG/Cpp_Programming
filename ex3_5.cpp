/*
멤버 변수 초기화와 위임 생성자 활용
다음 Point 클래스의 멤버 x, y를 생성자 서두에 초깃값으로 초기화하고 위임 생성자를 이용하여 재작성하라.

class Point {
	int x, y;
	public:
		Point();
		Point(int a, int b);
};
Point::Point() { x = 0; y = 0; }
Point::Point(int a, int b) { x = a; y = b; }
*/
/*
#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() { cout << "(" << x << ", " << y << ")" << "\n"; }
};

Point::Point() : x(0), y(0) {}
Point::Point(int a, int b) : x(a), y(b) {};

int main()
{
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}
*/