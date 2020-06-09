/*
다른 클래스의 멤버 함수를 프렌드 함수로 선언
RectManager 클래스의 equals() 멤버 함수를 Rect 클래스의 프렌드로 선언한 사례를 보인다.
*/
/*
#include <iostream>
using namespace std;

class Rect;

class RectManager {
public:
	bool equals(Rect r, Rect s);
};

class Rect {
	int width, height;
public:
	Rect(int width = 0, int height = 0);
	friend bool RectManager::equals(Rect r, Rect s);
};

bool RectManager::equals(Rect r, Rect s) {
	if ((r.height == s.height) && (r.width == s.width))
		return true;
	else
		return false;
}

Rect::Rect(int width, int height) {
	this->width = width;
	this->height = height;
}

int main()
{
	Rect r1(3, 3);
	Rect r2(3, 3);
	Rect r3(4, 4);

	RectManager rm;
	cout << rm.equals(r1, r2) << "\n";
	cout << rm.equals(r1, r3) << "\n";
}
*/