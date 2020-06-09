/*
다음 main()에서 Color 클래스는 3요소(빨강, 초록, 파랑)로 하나의 색을 나타내는 클래스이다.
+ 연산자로 색을 더하고, == 연산자로 색을 비교하고자 한다.
실행 결과를 참고하여 Color 클래스와 연산자, 그리고 프로그램을 완성하라.

int main()
{
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();	//색 값 출력

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}

+와 == 연산자를 Color 클래스의 멤버 함수로 구현하라.
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
	c.show();	//색 값 출력

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}
*/