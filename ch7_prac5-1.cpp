/*
���� main()���� Color Ŭ������ 3���(����, �ʷ�, �Ķ�)�� �ϳ��� ���� ��Ÿ���� Ŭ�����̴�.
+ �����ڷ� ���� ���ϰ�, == �����ڷ� ���� ���ϰ��� �Ѵ�.
���� ����� �����Ͽ� Color Ŭ������ ������, �׸��� ���α׷��� �ϼ��϶�.

int main()
{
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();	//�� �� ���

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "����� ����";
	else
		cout << "����� �ƴ�";
}

+�� == �����ڸ� Color Ŭ������ ��� �Լ��� �����϶�.
*/
/*
#include <iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color(int red = 0, int green = 0, int blue = 0);
	Color operator+ (Color op);
	void show();
	bool operator== (Color op);
};

Color::Color(int red, int green, int blue) {
	this->red = red;
	this->green = green;
	this->blue = blue;
}

Color Color::operator+ (Color op) {
	Color tmp;
	tmp.red = this->red + op.red;
	tmp.green = this->green + op.green;
	tmp.blue = this->blue + op.blue;

	return tmp;
}

void Color::show() {
	cout << "red : " << red << " green : " << green << " blue : " << blue << "\n";
}

bool Color::operator== (Color op) {
	if (red == op.red && green == op.green && blue == op.blue)
		return true;
	else
		return false;
}

int main()
{
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();	//�� �� ���

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "����� ����";
	else
		cout << "����� �ƴ�";
}
*/