/*
�ٸ� Ŭ���� ��ü�� ������� ����
RectManager Ŭ���� ��ü�� Rect Ŭ������ ������� �����ϴ� ��ʸ� ���δ�.
RectManager Ŭ�������� �� ���� ��� �Լ��� ������, �̵��� ��� Rect Ŭ������ private ����� �����Ӱ� �����Ѵ�.
*/
/*
#include <iostream>
using namespace std;

class Rect;

class RectManager {
public:
	bool equals(Rect r, Rect s);
	void copy(Rect& dest, Rect& src);
};

class Rect {
	int width, height;
public:
	Rect(int width = 0, int height = 0);
	int getWidth() { return width; }
	int getHeight() { return height; }
	friend RectManager;
};

bool RectManager::equals(Rect r, Rect s) {
	if ((r.width == s.width) && (r.height == s.height))
		return true;
	else
		return false;
}

void RectManager::copy(Rect& dest, Rect& src) {
	dest.width = src.width;
	dest.height = src.height;
}

Rect::Rect(int width, int height) {
	this->width = width;
	this->height = height;
}

int main()
{
	RectManager rm;
	Rect r1(3, 3);
	Rect r2(4, 4);
	Rect r3;

	cout << rm.equals(r1, r2) << "\n";
	cout << r3.getWidth() << " " << r3.getHeight() << "\n";
	rm.copy(r3, r2);
	cout << r3.getWidth() << " " << r3.getHeight() << "\n";
}
*/