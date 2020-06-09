/*
�ٸ� Ŭ������ ��� �Լ��� ������ �Լ��� ����
RectManager Ŭ������ equals() ��� �Լ��� Rect Ŭ������ ������� ������ ��ʸ� ���δ�.
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