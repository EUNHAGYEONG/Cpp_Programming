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

+�� == �����ڸ� Color Ŭ������ ������ �Լ��� �����϶�.
*/
/*
#include <iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color(int red = 0, int green = 0, int blue = 0);
	friend Color operator+ (Color op1, Color op2);
	void show();
	friend bool operator== (Color op1, Color op2);
};

Color::Color(int red, int green, int blue) {
	this->red = red;
	this->green = green;
	this->blue = blue;
}

Color operator+ (Color op1, Color op2) {
	Color tmp;
	tmp.red = op1.red + op2.red;
	tmp.green = op1.green + op2.green;
	tmp.blue = op1.blue + op2.blue;

	return tmp;
}

void Color::show() {
	cout << "red : " << red << " green : " << green << " blue : " << blue << "\n";
}

bool operator== (Color op1, Color op2) {
	if (op1.red == op2.red && op1.green == op2.green && op1.blue == op2.blue)
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