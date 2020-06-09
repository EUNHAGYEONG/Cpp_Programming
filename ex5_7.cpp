/*
참조 매개 변수를 가진 함수 만들기 연습
키보드로부터 반지름 값을 읽어 Circle 객체에 반지름을 설정하는 readRadius() 함수를 작성하라.
*/
/*
#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << "\n";
}

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << "\n";
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << "\n";
}

void readRadius(Circle &c) {
	cout << "정수 값으로 반지름을 입력하세요>>";
	int r;
	cin >> r;
	c.setRadius(r);
}

int main()
{
	Circle circle(10);
	readRadius(circle);

	cout << "circle의 면적 = " << circle.getArea() << "\n";
}
*/